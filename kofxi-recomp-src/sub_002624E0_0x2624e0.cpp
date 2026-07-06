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

// Function: sub_002624E0
// Address: 0x2624e0 - 0x2625a8
void sub_002624E0_0x2624e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002624E0_0x2624e0");
#endif

    switch (ctx->pc) {
        case 0x262524u: goto label_262524;
        case 0x262534u: goto label_262534;
        case 0x262544u: goto label_262544;
        case 0x26257cu: goto label_26257c;
        default: break;
    }

    ctx->pc = 0x2624e0u;

    // 0x2624e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2624e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2624e4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2624e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2624e8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2624e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2624ec: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2624ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2624f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2624f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2624f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2624f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2624f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2624f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2624fc: 0xac401a00  sw          $zero, 0x1A00($v0)
    ctx->pc = 0x2624fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6656), GPR_U32(ctx, 0));
    // 0x262500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x262500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262504: 0xac601a04  sw          $zero, 0x1A04($v1)
    ctx->pc = 0x262504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6660), GPR_U32(ctx, 0));
    // 0x262508: 0xacc01a08  sw          $zero, 0x1A08($a2)
    ctx->pc = 0x262508u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6664), GPR_U32(ctx, 0));
    // 0x26250c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26250cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x262510: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x262510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x262514: 0xac40d768  sw          $zero, -0x2898($v0)
    ctx->pc = 0x262514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956904), GPR_U32(ctx, 0));
    // 0x262518: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x262518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x26251c: 0xc098a1e  jal         func_262878
    ctx->pc = 0x26251Cu;
    SET_GPR_U32(ctx, 31, 0x262524u);
    ctx->pc = 0x262520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26251Cu;
    // 0x262520: 0xac60d770  sw          $zero, -0x2890($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956912), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262878u, 0x26251Cu, 0x262524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262524u;
label_262524:
    // 0x262524: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x262524u;
    {
        const bool branch_taken_0x262524 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x262528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262524u;
        // 0x262528: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262524) {
            ctx->pc = 0x262598u;
            goto label_262598;
        }
    }
    ctx->pc = 0x26252Cu;
    // 0x26252c: 0xc098b42  jal         func_262D08
    ctx->pc = 0x26252Cu;
    SET_GPR_U32(ctx, 31, 0x262534u);
    ctx->pc = 0x262D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262D08u, 0x26252Cu, 0x262534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262534u;
label_262534:
    // 0x262534: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x262534u;
    {
        const bool branch_taken_0x262534 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x262538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262534u;
        // 0x262538: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262534) {
            ctx->pc = 0x262594u;
            goto label_262594;
        }
    }
    ctx->pc = 0x26253Cu;
    // 0x26253c: 0xc098590  jal         func_261640
    ctx->pc = 0x26253Cu;
    SET_GPR_U32(ctx, 31, 0x262544u);
    ctx->pc = 0x262540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26253Cu;
    // 0x262540: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261640u, 0x26253Cu, 0x262544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262544u;
label_262544:
    // 0x262544: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x262544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x262548: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262548u;
    {
        const bool branch_taken_0x262548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262548u;
        // 0x26254c: 0xac62d75c  sw          $v0, -0x28A4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956892), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262548) {
            ctx->pc = 0x262558u;
            goto label_262558;
        }
    }
    ctx->pc = 0x262550u;
    // 0x262550: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x262550u;
    {
        const bool branch_taken_0x262550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262550u;
        // 0x262554: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262550) {
            ctx->pc = 0x262594u;
            goto label_262594;
        }
    }
    ctx->pc = 0x262558u;
label_262558:
    // 0x262558: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x262558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x26255c: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x26255cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x262560: 0x24842470  addiu       $a0, $a0, 0x2470
    ctx->pc = 0x262560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
    // 0x262564: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x262564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262568: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x262568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26256c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26256cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262570: 0x252975c0  addiu       $t1, $t1, 0x75C0
    ctx->pc = 0x262570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30144));
    // 0x262574: 0xc0985d0  jal         func_261740
    ctx->pc = 0x262574u;
    SET_GPR_U32(ctx, 31, 0x26257Cu);
    ctx->pc = 0x262578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262574u;
    // 0x262578: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261740u, 0x262574u, 0x26257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26257Cu;
label_26257c:
    // 0x26257c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x26257cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x262580: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x262580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x262584: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x262584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x262588: 0xac82d760  sw          $v0, -0x28A0($a0)
    ctx->pc = 0x262588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294956896), GPR_U32(ctx, 2));
    // 0x26258c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x26258cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x262590: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x262590u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_262594:
    // 0x262594: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x262594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_262598:
    // 0x262598: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x262598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26259c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26259cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2625a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2625A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2625A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625A0u;
        // 0x2625a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2625A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2625A8u;
}
