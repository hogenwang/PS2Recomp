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

// Function: sub_00236778
// Address: 0x236778 - 0x236830
void sub_00236778_0x236778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236778_0x236778");
#endif

    switch (ctx->pc) {
        case 0x23680cu: goto label_23680c;
        default: break;
    }

    ctx->pc = 0x236778u;

    // 0x236778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23677c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x23677cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x236780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236784: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x236784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x236788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23678c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23678cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236790: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x236790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x236794: 0x24425d40  addiu       $v0, $v0, 0x5D40
    ctx->pc = 0x236794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23872));
    // 0x236798: 0x24636320  addiu       $v1, $v1, 0x6320
    ctx->pc = 0x236798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25376));
    // 0x23679c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x23679cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2367a0: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x2367a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x2367a4: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x2367a4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2367a8: 0xa204003a  sb          $a0, 0x3A($s0)
    ctx->pc = 0x2367a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 4));
    // 0x2367ac: 0xfe060040  sd          $a2, 0x40($s0)
    ctx->pc = 0x2367acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 6));
    // 0x2367b0: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x2367b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x2367b4: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x2367b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
    // 0x2367b8: 0xa2080038  sb          $t0, 0x38($s0)
    ctx->pc = 0x2367b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 8));
    // 0x2367bc: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2367BCu;
    {
        const bool branch_taken_0x2367bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2367C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367BCu;
        // 0x2367c0: 0xa2080039  sb          $t0, 0x39($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367bc) {
            ctx->pc = 0x2367D0u;
            goto label_2367d0;
        }
    }
    ctx->pc = 0x2367C4u;
    // 0x2367c4: 0x3c020098  lui         $v0, 0x98
    ctx->pc = 0x2367c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)152 << 16));
    // 0x2367c8: 0x34429680  ori         $v0, $v0, 0x9680
    ctx->pc = 0x2367c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38528);
    // 0x2367cc: 0xfe020050  sd          $v0, 0x50($s0)
    ctx->pc = 0x2367ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 2));
label_2367d0:
    // 0x2367d0: 0x8e0600f0  lw          $a2, 0xF0($s0)
    ctx->pc = 0x2367d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2367d4: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2367D4u;
    {
        const bool branch_taken_0x2367d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2367D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367D4u;
        // 0x2367d8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367d4) {
            ctx->pc = 0x23680Cu;
            goto label_23680c;
        }
    }
    ctx->pc = 0x2367DCu;
    // 0x2367dc: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2367dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2367e0: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2367E0u;
    {
        const bool branch_taken_0x2367e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2367e0) {
            ctx->pc = 0x2367E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2367E0u;
            // 0x2367e4: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236810u;
            goto label_236810;
        }
    }
    ctx->pc = 0x2367E8u;
    // 0x2367e8: 0xa0c80004  sb          $t0, 0x4($a2)
    ctx->pc = 0x2367e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 8));
    // 0x2367ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2367ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2367f0: 0x90c50005  lbu         $a1, 0x5($a2)
    ctx->pc = 0x2367f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x2367f4: 0x92020039  lbu         $v0, 0x39($s0)
    ctx->pc = 0x2367f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    // 0x2367f8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2367f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2367fc: 0xa0c20006  sb          $v0, 0x6($a2)
    ctx->pc = 0x2367fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x236800: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x236800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x236804: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x236804u;
    SET_GPR_U32(ctx, 31, 0x23680Cu);
    ctx->pc = 0x236808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236804u;
    // 0x236808: 0x92060039  lbu         $a2, 0x39($s0) (Delay Slot)
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x236804u, 0x23680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23680Cu;
label_23680c:
    // 0x23680c: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x23680cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_236810:
    // 0x236810: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x236810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x236814: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x236814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
    // 0x236818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23681c: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x23681cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x236820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236824: 0x3e00008  jr          $ra
    ctx->pc = 0x236824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236824u;
        // 0x236828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23682Cu;
    // 0x23682c: 0x0  nop
    ctx->pc = 0x23682cu;
    // NOP
}
