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

// Function: sub_002FE1B0
// Address: 0x2fe1b0 - 0x2fe270
void sub_002FE1B0_0x2fe1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE1B0_0x2fe1b0");
#endif

    switch (ctx->pc) {
        case 0x2fe1d0u: goto label_2fe1d0;
        case 0x2fe240u: goto label_2fe240;
        case 0x2fe254u: goto label_2fe254;
        default: break;
    }

    ctx->pc = 0x2fe1b0u;

    // 0x2fe1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fe1b4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2fe1b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2fe1b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fe1bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fe1c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe1c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fe1c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe1c8: 0xc0691d0  jal         func_1A4740
    ctx->pc = 0x2FE1C8u;
    SET_GPR_U32(ctx, 31, 0x2FE1D0u);
    ctx->pc = 0x2FE1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE1C8u;
    // 0x2fe1cc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4740u, 0x2FE1C8u, 0x2FE1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE1D0u;
label_2fe1d0:
    // 0x2fe1d0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE1D0u;
    {
        const bool branch_taken_0x2fe1d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe1d0) {
            ctx->pc = 0x2FE1E4u;
            goto label_2fe1e4;
        }
    }
    ctx->pc = 0x2FE1D8u;
    // 0x2fe1d8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe1dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE1DCu;
    {
        const bool branch_taken_0x2fe1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE1DCu;
        // 0x2fe1e0: 0xac51be80  sw          $s1, -0x4180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe1dc) {
            ctx->pc = 0x2FE1F4u;
            goto label_2fe1f4;
        }
    }
    ctx->pc = 0x2FE1E4u;
label_2fe1e4:
    // 0x2fe1e4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2fe1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2fe1e8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe1ec: 0x2463da10  addiu       $v1, $v1, -0x25F0
    ctx->pc = 0x2fe1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957584));
    // 0x2fe1f0: 0xac43be80  sw          $v1, -0x4180($v0)
    ctx->pc = 0x2fe1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
label_2fe1f4:
    // 0x2fe1f4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE1F4u;
    {
        const bool branch_taken_0x2fe1f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe1f4) {
            ctx->pc = 0x2FE208u;
            goto label_2fe208;
        }
    }
    ctx->pc = 0x2FE1FCu;
    // 0x2fe1fc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe200: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE200u;
    {
        const bool branch_taken_0x2fe200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE200u;
        // 0x2fe204: 0xac50be84  sw          $s0, -0x417C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950532), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe200) {
            ctx->pc = 0x2FE218u;
            goto label_2fe218;
        }
    }
    ctx->pc = 0x2FE208u;
label_2fe208:
    // 0x2fe208: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2fe208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2fe20c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe210: 0x2463da10  addiu       $v1, $v1, -0x25F0
    ctx->pc = 0x2fe210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957584));
    // 0x2fe214: 0xac43be84  sw          $v1, -0x417C($v0)
    ctx->pc = 0x2fe214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950532), GPR_U32(ctx, 3));
label_2fe218:
    // 0x2fe218: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2fe218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2fe21c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fe21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fe220: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x2fe220u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x2fe224: 0xa460be90  sh          $zero, -0x4170($v1)
    ctx->pc = 0x2fe224u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950544), (uint16_t)GPR_U32(ctx, 0));
    // 0x2fe228: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2fe228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2fe22c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE22Cu;
    {
        const bool branch_taken_0x2fe22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fe22c) {
            ctx->pc = 0x2FE248u;
            goto label_2fe248;
        }
    }
    ctx->pc = 0x2FE234u;
    // 0x2fe234: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fe234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fe238: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FE238u;
    SET_GPR_U32(ctx, 31, 0x2FE240u);
    ctx->pc = 0x2FE23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE238u;
    // 0x2fe23c: 0x2484dba0  addiu       $a0, $a0, -0x2460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FE238u, 0x2FE240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE240u;
label_2fe240:
    // 0x2fe240: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE240u;
    {
        const bool branch_taken_0x2fe240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE240u;
        // 0x2fe244: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe240) {
            ctx->pc = 0x2FE258u;
            goto label_2fe258;
        }
    }
    ctx->pc = 0x2FE248u;
label_2fe248:
    // 0x2fe248: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fe248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fe24c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FE24Cu;
    SET_GPR_U32(ctx, 31, 0x2FE254u);
    ctx->pc = 0x2FE250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE24Cu;
    // 0x2fe250: 0x2484dd60  addiu       $a0, $a0, -0x22A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FE24Cu, 0x2FE254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE254u;
label_2fe254:
    // 0x2fe254: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fe258:
    // 0x2fe258: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe25c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe260: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE260u;
        // 0x2fe264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE268u;
    // 0x2fe268: 0x0  nop
    ctx->pc = 0x2fe268u;
    // NOP
    // 0x2fe26c: 0x0  nop
    ctx->pc = 0x2fe26cu;
    // NOP
    if (ctx->pc == 0x2fe26cu) { ctx->pc = 0x2fe270u; }
}
