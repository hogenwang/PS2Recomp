#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001098A8
// Address: 0x1098a8 - 0x109978
void sub_001098A8_0x1098a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001098A8_0x1098a8");
#endif

    ctx->pc = 0x1098a8u;

    // 0x1098a8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1098a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1098ac: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1098acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x1098b0: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x1098b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x1098b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1098b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1098b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1098b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x1098bc: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x1098bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x1098c0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1098c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1098c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1098c8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1098c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1098cc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1098ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1098d0: 0x8ce3087c  lw          $v1, 0x87C($a3)
    ctx->pc = 0x1098d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2172)));
    // 0x1098d4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1098D4u;
    {
        const bool branch_taken_0x1098d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1098D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098D4u;
        // 0x1098d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098d4) {
            ctx->pc = 0x10991Cu;
            goto label_10991c;
        }
    }
    ctx->pc = 0x1098DCu;
    // 0x1098dc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1098dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1098e0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1098e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1098e4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1098e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1098e8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1098e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1098ec: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1098ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1098f0: 0x34423600  ori         $v0, $v0, 0x3600
    ctx->pc = 0x1098f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13824);
    // 0x1098f4: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x1098f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
    // 0x1098f8: 0x34841b00  ori         $a0, $a0, 0x1B00
    ctx->pc = 0x1098f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6912);
    // 0x1098fc: 0x34a53300  ori         $a1, $a1, 0x3300
    ctx->pc = 0x1098fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13056);
    // 0x109900: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x109900u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x109904: 0xace605a0  sw          $a2, 0x5A0($a3)
    ctx->pc = 0x109904u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 6));
    // 0x109908: 0xace305a4  sw          $v1, 0x5A4($a3)
    ctx->pc = 0x109908u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 3));
    // 0x10990c: 0xace406e0  sw          $a0, 0x6E0($a3)
    ctx->pc = 0x10990cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 4));
    // 0x109910: 0xace506e4  sw          $a1, 0x6E4($a3)
    ctx->pc = 0x109910u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 5));
    // 0x109914: 0x3e00008  jr          $ra
    ctx->pc = 0x109914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109914u;
        // 0x109918: 0xace00820  sw          $zero, 0x820($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10991Cu;
label_10991c:
    // 0x10991c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10991Cu;
    {
        const bool branch_taken_0x10991c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x109920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10991Cu;
        // 0x109920: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10991c) {
            ctx->pc = 0x109968u;
            goto label_109968;
        }
    }
    ctx->pc = 0x109924u;
    // 0x109924: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x109924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x109928: 0x24e40880  addiu       $a0, $a3, 0x880
    ctx->pc = 0x109928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2176));
    // 0x10992c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10992cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x109930: 0x24e30b80  addiu       $v1, $a3, 0xB80
    ctx->pc = 0x109930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2944));
    // 0x109934: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x109934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x109938: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x109938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10993c: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x10993cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x109940: 0x24e20e80  addiu       $v0, $a3, 0xE80
    ctx->pc = 0x109940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3712));
    // 0x109944: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x109944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x109948: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x109948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x10994c: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x10994cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x109950: 0xace405a4  sw          $a0, 0x5A4($a3)
    ctx->pc = 0x109950u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 4));
    // 0x109954: 0xace306e4  sw          $v1, 0x6E4($a3)
    ctx->pc = 0x109954u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 3));
    // 0x109958: 0xace00820  sw          $zero, 0x820($a3)
    ctx->pc = 0x109958u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
    // 0x10995c: 0xace005a0  sw          $zero, 0x5A0($a3)
    ctx->pc = 0x10995cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 0));
    // 0x109960: 0x3e00008  jr          $ra
    ctx->pc = 0x109960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109960u;
        // 0x109964: 0xace006e0  sw          $zero, 0x6E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109968u;
label_109968:
    // 0x109968: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x109968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10996c: 0x804305a  j           func_10C168
    ctx->pc = 0x10996Cu;
    ctx->pc = 0x109970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10996Cu;
    // 0x109970: 0x24a5a2a0  addiu       $a1, $a1, -0x5D60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    sub_0010C168_0x10c168(rdram, ctx, runtime); return;
    ctx->pc = 0x109974u;
    // 0x109974: 0x0  nop
    ctx->pc = 0x109974u;
    // NOP
    if (ctx->pc == 0x109974u) { ctx->pc = 0x109978u; }
}
