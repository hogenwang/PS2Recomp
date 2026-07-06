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

// Function: sub_00264470
// Address: 0x264470 - 0x2644f8
void sub_00264470_0x264470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264470_0x264470");
#endif

    switch (ctx->pc) {
        case 0x2644acu: goto label_2644ac;
        case 0x2644c8u: goto label_2644c8;
        case 0x2644e0u: goto label_2644e0;
        default: break;
    }

    ctx->pc = 0x264470u;

    // 0x264470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x264470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x264474: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x264474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x264478: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x264478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26447c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26447cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264480: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x264480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x264484: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x264484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264488: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x264488u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x26448c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x26448cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x264490: 0x908a0003  lbu         $t2, 0x3($a0)
    ctx->pc = 0x264490u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x264494: 0x24c676c8  addiu       $a2, $a2, 0x76C8
    ctx->pc = 0x264494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30408));
    // 0x264498: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x264498u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26449c: 0x90880001  lbu         $t0, 0x1($a0)
    ctx->pc = 0x26449cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2644a0: 0x90890002  lbu         $t1, 0x2($a0)
    ctx->pc = 0x2644a0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2644a4: 0xc043e24  jal         func_10F890
    ctx->pc = 0x2644A4u;
    SET_GPR_U32(ctx, 31, 0x2644ACu);
    ctx->pc = 0x2644A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2644A4u;
    // 0x2644a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x2644A4u, 0x2644ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2644ACu;
label_2644ac:
    // 0x2644ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2644ACu;
    {
        const bool branch_taken_0x2644ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2644ac) {
            ctx->pc = 0x2644C0u;
            goto label_2644c0;
        }
    }
    ctx->pc = 0x2644B4u;
    // 0x2644b4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2644b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2644b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2644B8u;
    {
        const bool branch_taken_0x2644b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2644BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644B8u;
        // 0x2644bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644b8) {
            ctx->pc = 0x2644D8u;
            goto label_2644d8;
        }
    }
    ctx->pc = 0x2644C0u;
label_2644c0:
    // 0x2644c0: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2644C0u;
    SET_GPR_U32(ctx, 31, 0x2644C8u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2644C0u, 0x2644C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2644C8u;
label_2644c8:
    // 0x2644c8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2644c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2644cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2644ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2644d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2644D0u;
    {
        const bool branch_taken_0x2644d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2644D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644D0u;
        // 0x2644d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644d0) {
            ctx->pc = 0x2644E4u;
            goto label_2644e4;
        }
    }
    ctx->pc = 0x2644D8u;
label_2644d8:
    // 0x2644d8: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x2644D8u;
    SET_GPR_U32(ctx, 31, 0x2644E0u);
    ctx->pc = 0x2644DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2644D8u;
    // 0x2644dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x2644D8u, 0x2644E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2644E0u;
label_2644e0:
    // 0x2644e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2644e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2644e4:
    // 0x2644e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2644e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2644e8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2644e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2644ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2644ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2644f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2644F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2644F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644F0u;
        // 0x2644f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2644F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2644F8u;
}
