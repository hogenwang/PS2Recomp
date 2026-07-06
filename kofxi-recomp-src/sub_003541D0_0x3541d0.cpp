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

// Function: sub_003541D0
// Address: 0x3541d0 - 0x3542b0
void sub_003541D0_0x3541d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003541D0_0x3541d0");
#endif

    ctx->pc = 0x3541d0u;

    // 0x3541d0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3541d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x3541d4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3541d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3541d8: 0x90639720  lbu         $v1, -0x68E0($v1)
    ctx->pc = 0x3541d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x3541dc: 0x1483002f  bne         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3541DCu;
    {
        const bool branch_taken_0x3541dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3541dc) {
            ctx->pc = 0x35429Cu;
            goto label_35429c;
        }
    }
    ctx->pc = 0x3541E4u;
    // 0x3541e4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3541e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3541e8: 0x8c64bee4  lw          $a0, -0x411C($v1)
    ctx->pc = 0x3541e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950628)));
    // 0x3541ec: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x3541ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x3541f0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3541F0u;
    {
        const bool branch_taken_0x3541f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3541f0) {
            ctx->pc = 0x3541F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3541F0u;
            // 0x3541f4: 0x30830400  andi        $v1, $a0, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x35420Cu;
            goto label_35420c;
        }
    }
    ctx->pc = 0x3541F8u;
    // 0x3541f8: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x3541f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x3541fc: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x3541fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x354200: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x354200u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x354204: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x354204u;
    {
        const bool branch_taken_0x354204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354204u;
        // 0x354208: 0xa0a3000d  sb          $v1, 0xD($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354204) {
            ctx->pc = 0x35429Cu;
            goto label_35429c;
        }
    }
    ctx->pc = 0x35420Cu;
label_35420c:
    // 0x35420c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x35420Cu;
    {
        const bool branch_taken_0x35420c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35420c) {
            ctx->pc = 0x354210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35420Cu;
            // 0x354210: 0x30830800  andi        $v1, $a0, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x354228u;
            goto label_354228;
        }
    }
    ctx->pc = 0x354214u;
    // 0x354214: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x354214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x354218: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x354218u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x35421c: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x35421cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x354220: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x354220u;
    {
        const bool branch_taken_0x354220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354220u;
        // 0x354224: 0xa0a3000d  sb          $v1, 0xD($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354220) {
            ctx->pc = 0x35429Cu;
            goto label_35429c;
        }
    }
    ctx->pc = 0x354228u;
label_354228:
    // 0x354228: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x354228u;
    {
        const bool branch_taken_0x354228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354228) {
            ctx->pc = 0x35422Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354228u;
            // 0x35422c: 0x30831000  andi        $v1, $a0, 0x1000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
            ctx->in_delay_slot = false;
            ctx->pc = 0x354244u;
            goto label_354244;
        }
    }
    ctx->pc = 0x354230u;
    // 0x354230: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x354230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x354234: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x354234u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x354238: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x354238u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35423c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x35423Cu;
    {
        const bool branch_taken_0x35423c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35423Cu;
        // 0x354240: 0xa0a3000d  sb          $v1, 0xD($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35423c) {
            ctx->pc = 0x35429Cu;
            goto label_35429c;
        }
    }
    ctx->pc = 0x354244u;
label_354244:
    // 0x354244: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x354244u;
    {
        const bool branch_taken_0x354244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354244) {
            ctx->pc = 0x354248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354244u;
            // 0x354248: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354260u;
            goto label_354260;
        }
    }
    ctx->pc = 0x35424Cu;
    // 0x35424c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x35424cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x354250: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x354250u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x354254: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x354254u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x354258: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x354258u;
    {
        const bool branch_taken_0x354258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354258u;
        // 0x35425c: 0xa0a3000d  sb          $v1, 0xD($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354258) {
            ctx->pc = 0x35429Cu;
            goto label_35429c;
        }
    }
    ctx->pc = 0x354260u;
label_354260:
    // 0x354260: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x354260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x354264: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x354264u;
    {
        const bool branch_taken_0x354264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354264) {
            ctx->pc = 0x354268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354264u;
            // 0x354268: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354280u;
            goto label_354280;
        }
    }
    ctx->pc = 0x35426Cu;
    // 0x35426c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35426cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x354270: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x354270u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x354274: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x354274u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x354278: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x354278u;
    {
        const bool branch_taken_0x354278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354278u;
        // 0x35427c: 0xa0a3000d  sb          $v1, 0xD($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354278) {
            ctx->pc = 0x35429Cu;
            goto label_35429c;
        }
    }
    ctx->pc = 0x354280u;
label_354280:
    // 0x354280: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x354280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x354284: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x354284u;
    {
        const bool branch_taken_0x354284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354284) {
            ctx->pc = 0x35429Cu;
            goto label_35429c;
        }
    }
    ctx->pc = 0x35428Cu;
    // 0x35428c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x35428cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x354290: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x354290u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x354294: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x354294u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x354298: 0xa0a3000d  sb          $v1, 0xD($a1)
    ctx->pc = 0x354298u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 3));
label_35429c:
    // 0x35429c: 0x3e00008  jr          $ra
    ctx->pc = 0x35429Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35429Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3542A4u;
    // 0x3542a4: 0x0  nop
    ctx->pc = 0x3542a4u;
    // NOP
    // 0x3542a8: 0x0  nop
    ctx->pc = 0x3542a8u;
    // NOP
    // 0x3542ac: 0x0  nop
    ctx->pc = 0x3542acu;
    // NOP
    if (ctx->pc == 0x3542acu) { ctx->pc = 0x3542b0u; }
}
