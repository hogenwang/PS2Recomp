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

// Function: sub_00202F68
// Address: 0x202f68 - 0x203360
void sub_00202F68_0x202f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202F68_0x202f68");
#endif

    switch (ctx->pc) {
        case 0x202f98u: goto label_202f98;
        case 0x202fd8u: goto label_202fd8;
        case 0x202ff4u: goto label_202ff4;
        case 0x203038u: goto label_203038;
        case 0x20305cu: goto label_20305c;
        case 0x20307cu: goto label_20307c;
        case 0x2030c8u: goto label_2030c8;
        case 0x2030ecu: goto label_2030ec;
        case 0x203138u: goto label_203138;
        case 0x2031b8u: goto label_2031b8;
        case 0x203238u: goto label_203238;
        case 0x2032b8u: goto label_2032b8;
        case 0x203348u: goto label_203348;
        default: break;
    }

    ctx->pc = 0x202f68u;

    // 0x202f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x202f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202f6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202F6Cu;
    {
        const bool branch_taken_0x202f6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F6Cu;
        // 0x202f70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f6c) {
            ctx->pc = 0x202F7Cu;
            goto label_202f7c;
        }
    }
    ctx->pc = 0x202F74u;
    // 0x202f74: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x202F74u;
    {
        const bool branch_taken_0x202f74 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x202F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F74u;
        // 0x202f78: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f74) {
            ctx->pc = 0x202F88u;
            goto label_202f88;
        }
    }
    ctx->pc = 0x202F7Cu;
label_202f7c:
    // 0x202f7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x202F7Cu;
    {
        const bool branch_taken_0x202f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F7Cu;
        // 0x202f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f7c) {
            ctx->pc = 0x202F9Cu;
            goto label_202f9c;
        }
    }
    ctx->pc = 0x202F84u;
    // 0x202f84: 0x0  nop
    ctx->pc = 0x202f84u;
    // NOP
label_202f88:
    // 0x202f88: 0x24840013  addiu       $a0, $a0, 0x13
    ctx->pc = 0x202f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19));
    // 0x202f8c: 0x24a5f450  addiu       $a1, $a1, -0xBB0
    ctx->pc = 0x202f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964304));
    // 0x202f90: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x202F90u;
    SET_GPR_U32(ctx, 31, 0x202F98u);
    ctx->pc = 0x202F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F90u;
    // 0x202f94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x202F90u, 0x202F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F98u;
label_202f98:
    // 0x202f98: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x202f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_202f9c:
    // 0x202f9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x202FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FA0u;
        // 0x202fa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202FA8u;
    // 0x202fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x202fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202fac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x202facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202fb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x202fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x202fb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x202fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202fb8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202FB8u;
    {
        const bool branch_taken_0x202fb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FB8u;
        // 0x202fbc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fb8) {
            ctx->pc = 0x202FC8u;
            goto label_202fc8;
        }
    }
    ctx->pc = 0x202FC0u;
    // 0x202fc0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202FC0u;
    {
        const bool branch_taken_0x202fc0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x202fc0) {
            ctx->pc = 0x202FD0u;
            goto label_202fd0;
        }
    }
    ctx->pc = 0x202FC8u;
label_202fc8:
    // 0x202fc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x202FC8u;
    {
        const bool branch_taken_0x202fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FC8u;
        // 0x202fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fc8) {
            ctx->pc = 0x202FF8u;
            goto label_202ff8;
        }
    }
    ctx->pc = 0x202FD0u;
label_202fd0:
    // 0x202fd0: 0xc080bb8  jal         func_202EE0
    ctx->pc = 0x202FD0u;
    SET_GPR_U32(ctx, 31, 0x202FD8u);
    ctx->pc = 0x202EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202EE0u, 0x202FD0u, 0x202FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FD8u;
label_202fd8:
    // 0x202fd8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x202fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x202fdc: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x202fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x202fe0: 0x24a5f468  addiu       $a1, $a1, -0xB98
    ctx->pc = 0x202fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964328));
    // 0x202fe4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x202FE4u;
    {
        const bool branch_taken_0x202fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FE4u;
        // 0x202fe8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fe4) {
            ctx->pc = 0x202FF8u;
            goto label_202ff8;
        }
    }
    ctx->pc = 0x202FECu;
    // 0x202fec: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x202FECu;
    SET_GPR_U32(ctx, 31, 0x202FF4u);
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x202FECu, 0x202FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FF4u;
label_202ff4:
    // 0x202ff4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x202ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_202ff8:
    // 0x202ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202ffc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x202ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203000: 0x3e00008  jr          $ra
    ctx->pc = 0x203000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203000u;
        // 0x203004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203008u;
    // 0x203008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20300c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20300cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203018: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203018u;
    {
        const bool branch_taken_0x203018 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203018u;
        // 0x20301c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203018) {
            ctx->pc = 0x203028u;
            goto label_203028;
        }
    }
    ctx->pc = 0x203020u;
    // 0x203020: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203020u;
    {
        const bool branch_taken_0x203020 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x203020) {
            ctx->pc = 0x203030u;
            goto label_203030;
        }
    }
    ctx->pc = 0x203028u;
label_203028:
    // 0x203028: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x203028u;
    {
        const bool branch_taken_0x203028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203028u;
        // 0x20302c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203028) {
            ctx->pc = 0x203088u;
            goto label_203088;
        }
    }
    ctx->pc = 0x203030u;
label_203030:
    // 0x203030: 0xc080bb8  jal         func_202EE0
    ctx->pc = 0x203030u;
    SET_GPR_U32(ctx, 31, 0x203038u);
    ctx->pc = 0x202EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202EE0u, 0x203030u, 0x203038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203038u;
label_203038:
    // 0x203038: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x203038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x20303c: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x20303cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x203040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x203040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203044: 0x24a5f460  addiu       $a1, $a1, -0xBA0
    ctx->pc = 0x203044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964320));
    // 0x203048: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x203048u;
    {
        const bool branch_taken_0x203048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203048u;
        // 0x20304c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203048) {
            ctx->pc = 0x203088u;
            goto label_203088;
        }
    }
    ctx->pc = 0x203050u;
    // 0x203050: 0x26100015  addiu       $s0, $s0, 0x15
    ctx->pc = 0x203050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
    // 0x203054: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x203054u;
    SET_GPR_U32(ctx, 31, 0x20305Cu);
    ctx->pc = 0x203058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203054u;
    // 0x203058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x203054u, 0x20305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20305Cu;
label_20305c:
    // 0x20305c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x20305cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x203060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203064: 0x24a5f468  addiu       $a1, $a1, -0xB98
    ctx->pc = 0x203064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964328));
    // 0x203068: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x203068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20306c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20306Cu;
    {
        const bool branch_taken_0x20306c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20306Cu;
        // 0x203070: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20306c) {
            ctx->pc = 0x203084u;
            goto label_203084;
        }
    }
    ctx->pc = 0x203074u;
    // 0x203074: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x203074u;
    SET_GPR_U32(ctx, 31, 0x20307Cu);
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x203074u, 0x20307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20307Cu;
label_20307c:
    // 0x20307c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20307cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203080: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x203080u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_203084:
    // 0x203084: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x203084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_203088:
    // 0x203088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20308c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20308cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203090: 0x3e00008  jr          $ra
    ctx->pc = 0x203090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203090u;
        // 0x203094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203098u;
    // 0x203098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20309c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20309cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2030a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2030a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2030a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2030a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2030a8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2030A8u;
    {
        const bool branch_taken_0x2030a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030A8u;
        // 0x2030ac: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030a8) {
            ctx->pc = 0x2030B8u;
            goto label_2030b8;
        }
    }
    ctx->pc = 0x2030B0u;
    // 0x2030b0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2030B0u;
    {
        const bool branch_taken_0x2030b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2030b0) {
            ctx->pc = 0x2030C0u;
            goto label_2030c0;
        }
    }
    ctx->pc = 0x2030B8u;
label_2030b8:
    // 0x2030b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2030B8u;
    {
        const bool branch_taken_0x2030b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030B8u;
        // 0x2030bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030b8) {
            ctx->pc = 0x2030F0u;
            goto label_2030f0;
        }
    }
    ctx->pc = 0x2030C0u;
label_2030c0:
    // 0x2030c0: 0xc080bb8  jal         func_202EE0
    ctx->pc = 0x2030C0u;
    SET_GPR_U32(ctx, 31, 0x2030C8u);
    ctx->pc = 0x202EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202EE0u, 0x2030C0u, 0x2030C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030C8u;
label_2030c8:
    // 0x2030c8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2030c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2030cc: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x2030ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2030d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2030d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2030d4: 0x26040016  addiu       $a0, $s0, 0x16
    ctx->pc = 0x2030d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
    // 0x2030d8: 0x24a5f430  addiu       $a1, $a1, -0xBD0
    ctx->pc = 0x2030d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964272));
    // 0x2030dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2030DCu;
    {
        const bool branch_taken_0x2030dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2030E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030DCu;
        // 0x2030e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030dc) {
            ctx->pc = 0x2030F0u;
            goto label_2030f0;
        }
    }
    ctx->pc = 0x2030E4u;
    // 0x2030e4: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2030E4u;
    SET_GPR_U32(ctx, 31, 0x2030ECu);
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x2030E4u, 0x2030ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030ECu;
label_2030ec:
    // 0x2030ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2030ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2030f0:
    // 0x2030f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2030f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2030f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2030f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2030f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2030F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2030FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030F8u;
        // 0x2030fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2030F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203100u;
    // 0x203100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20310c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20310cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x203110: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x203110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203114: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203114u;
    {
        const bool branch_taken_0x203114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x203118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203114u;
        // 0x203118: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203114) {
            ctx->pc = 0x203124u;
            goto label_203124;
        }
    }
    ctx->pc = 0x20311Cu;
    // 0x20311c: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20311Cu;
    {
        const bool branch_taken_0x20311c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x20311c) {
            ctx->pc = 0x203130u;
            goto label_203130;
        }
    }
    ctx->pc = 0x203124u;
label_203124:
    // 0x203124: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x203124u;
    {
        const bool branch_taken_0x203124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203124u;
        // 0x203128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203124) {
            ctx->pc = 0x203168u;
            goto label_203168;
        }
    }
    ctx->pc = 0x20312Cu;
    // 0x20312c: 0x0  nop
    ctx->pc = 0x20312cu;
    // NOP
label_203130:
    // 0x203130: 0xc080bb8  jal         func_202EE0
    ctx->pc = 0x203130u;
    SET_GPR_U32(ctx, 31, 0x203138u);
    ctx->pc = 0x202EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202EE0u, 0x203130u, 0x203138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203138u;
label_203138:
    // 0x203138: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x203138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x20313c: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x20313cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x203140: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x203140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203148: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x203148u;
    {
        const bool branch_taken_0x203148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203148u;
        // 0x20314c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203148) {
            ctx->pc = 0x203168u;
            goto label_203168;
        }
    }
    ctx->pc = 0x203150u;
    // 0x203150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203154: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x203154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20315c: 0x8080cc0  j           func_203300
    ctx->pc = 0x20315Cu;
    ctx->pc = 0x203160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20315Cu;
    // 0x203160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203300u;
    goto label_203300;
    ctx->pc = 0x203164u;
    // 0x203164: 0x0  nop
    ctx->pc = 0x203164u;
    // NOP
label_203168:
    // 0x203168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20316c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20316cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203174: 0x3e00008  jr          $ra
    ctx->pc = 0x203174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203174u;
        // 0x203178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20317Cu;
    // 0x20317c: 0x0  nop
    ctx->pc = 0x20317cu;
    // NOP
    // 0x203180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203188: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20318c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20318cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x203190: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x203190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203194: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203194u;
    {
        const bool branch_taken_0x203194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x203198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203194u;
        // 0x203198: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203194) {
            ctx->pc = 0x2031A4u;
            goto label_2031a4;
        }
    }
    ctx->pc = 0x20319Cu;
    // 0x20319c: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20319Cu;
    {
        const bool branch_taken_0x20319c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x20319c) {
            ctx->pc = 0x2031B0u;
            goto label_2031b0;
        }
    }
    ctx->pc = 0x2031A4u;
label_2031a4:
    // 0x2031a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2031A4u;
    {
        const bool branch_taken_0x2031a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2031A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031A4u;
        // 0x2031a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031a4) {
            ctx->pc = 0x2031E8u;
            goto label_2031e8;
        }
    }
    ctx->pc = 0x2031ACu;
    // 0x2031ac: 0x0  nop
    ctx->pc = 0x2031acu;
    // NOP
label_2031b0:
    // 0x2031b0: 0xc080bb8  jal         func_202EE0
    ctx->pc = 0x2031B0u;
    SET_GPR_U32(ctx, 31, 0x2031B8u);
    ctx->pc = 0x202EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202EE0u, 0x2031B0u, 0x2031B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2031B8u;
label_2031b8:
    // 0x2031b8: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x2031b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2031bc: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x2031bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2031c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2031c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2031c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2031c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2031c8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2031C8u;
    {
        const bool branch_taken_0x2031c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2031CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031C8u;
        // 0x2031cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031c8) {
            ctx->pc = 0x2031E8u;
            goto label_2031e8;
        }
    }
    ctx->pc = 0x2031D0u;
    // 0x2031d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2031d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2031d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2031d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2031d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2031d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2031dc: 0x8080cc0  j           func_203300
    ctx->pc = 0x2031DCu;
    ctx->pc = 0x2031E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2031DCu;
    // 0x2031e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203300u;
    goto label_203300;
    ctx->pc = 0x2031E4u;
    // 0x2031e4: 0x0  nop
    ctx->pc = 0x2031e4u;
    // NOP
label_2031e8:
    // 0x2031e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2031e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2031ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2031ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2031f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2031f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2031f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2031F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2031F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031F4u;
        // 0x2031f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2031F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2031FCu;
    // 0x2031fc: 0x0  nop
    ctx->pc = 0x2031fcu;
    // NOP
    // 0x203200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20320c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20320cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x203210: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x203210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203214: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203214u;
    {
        const bool branch_taken_0x203214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x203218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203214u;
        // 0x203218: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203214) {
            ctx->pc = 0x203224u;
            goto label_203224;
        }
    }
    ctx->pc = 0x20321Cu;
    // 0x20321c: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20321Cu;
    {
        const bool branch_taken_0x20321c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x20321c) {
            ctx->pc = 0x203230u;
            goto label_203230;
        }
    }
    ctx->pc = 0x203224u;
label_203224:
    // 0x203224: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x203224u;
    {
        const bool branch_taken_0x203224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203224u;
        // 0x203228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203224) {
            ctx->pc = 0x203268u;
            goto label_203268;
        }
    }
    ctx->pc = 0x20322Cu;
    // 0x20322c: 0x0  nop
    ctx->pc = 0x20322cu;
    // NOP
label_203230:
    // 0x203230: 0xc080bb8  jal         func_202EE0
    ctx->pc = 0x203230u;
    SET_GPR_U32(ctx, 31, 0x203238u);
    ctx->pc = 0x202EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202EE0u, 0x203230u, 0x203238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203238u;
label_203238:
    // 0x203238: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x203238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x20323c: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x20323cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x203240: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x203240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203248: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x203248u;
    {
        const bool branch_taken_0x203248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203248u;
        // 0x20324c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203248) {
            ctx->pc = 0x203268u;
            goto label_203268;
        }
    }
    ctx->pc = 0x203250u;
    // 0x203250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203254: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x203254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203258: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20325c: 0x8080cc0  j           func_203300
    ctx->pc = 0x20325Cu;
    ctx->pc = 0x203260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20325Cu;
    // 0x203260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203300u;
    goto label_203300;
    ctx->pc = 0x203264u;
    // 0x203264: 0x0  nop
    ctx->pc = 0x203264u;
    // NOP
label_203268:
    // 0x203268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20326c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20326cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203274: 0x3e00008  jr          $ra
    ctx->pc = 0x203274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203274u;
        // 0x203278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20327Cu;
    // 0x20327c: 0x0  nop
    ctx->pc = 0x20327cu;
    // NOP
    // 0x203280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20328c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20328cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x203290: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x203290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203294: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203294u;
    {
        const bool branch_taken_0x203294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x203298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203294u;
        // 0x203298: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203294) {
            ctx->pc = 0x2032A4u;
            goto label_2032a4;
        }
    }
    ctx->pc = 0x20329Cu;
    // 0x20329c: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20329Cu;
    {
        const bool branch_taken_0x20329c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x20329c) {
            ctx->pc = 0x2032B0u;
            goto label_2032b0;
        }
    }
    ctx->pc = 0x2032A4u;
label_2032a4:
    // 0x2032a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2032A4u;
    {
        const bool branch_taken_0x2032a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032A4u;
        // 0x2032a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032a4) {
            ctx->pc = 0x2032E8u;
            goto label_2032e8;
        }
    }
    ctx->pc = 0x2032ACu;
    // 0x2032ac: 0x0  nop
    ctx->pc = 0x2032acu;
    // NOP
label_2032b0:
    // 0x2032b0: 0xc080bb8  jal         func_202EE0
    ctx->pc = 0x2032B0u;
    SET_GPR_U32(ctx, 31, 0x2032B8u);
    ctx->pc = 0x202EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202EE0u, 0x2032B0u, 0x2032B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032B8u;
label_2032b8:
    // 0x2032b8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2032b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2032bc: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x2032bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2032c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2032c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2032c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032c8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2032C8u;
    {
        const bool branch_taken_0x2032c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2032CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032C8u;
        // 0x2032cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032c8) {
            ctx->pc = 0x2032E8u;
            goto label_2032e8;
        }
    }
    ctx->pc = 0x2032D0u;
    // 0x2032d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2032d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2032d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2032d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2032d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2032d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2032dc: 0x8080cc0  j           func_203300
    ctx->pc = 0x2032DCu;
    ctx->pc = 0x2032E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032DCu;
    // 0x2032e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203300u;
    goto label_203300;
    ctx->pc = 0x2032E4u;
    // 0x2032e4: 0x0  nop
    ctx->pc = 0x2032e4u;
    // NOP
label_2032e8:
    // 0x2032e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2032e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2032ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2032ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2032f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2032f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2032f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2032F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2032F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032F4u;
        // 0x2032f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2032F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2032FCu;
    // 0x2032fc: 0x0  nop
    ctx->pc = 0x2032fcu;
    // NOP
label_203300:
    // 0x203300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x203300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x203304: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203304u;
    {
        const bool branch_taken_0x203304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x203308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203304u;
        // 0x203308: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203304) {
            ctx->pc = 0x203314u;
            goto label_203314;
        }
    }
    ctx->pc = 0x20330Cu;
    // 0x20330c: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20330Cu;
    {
        const bool branch_taken_0x20330c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x20330c) {
            ctx->pc = 0x203310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20330Cu;
            // 0x203310: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203320u;
            goto label_203320;
        }
    }
    ctx->pc = 0x203314u;
label_203314:
    // 0x203314: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x203314u;
    {
        const bool branch_taken_0x203314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203314u;
        // 0x203318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203314) {
            ctx->pc = 0x203350u;
            goto label_203350;
        }
    }
    ctx->pc = 0x20331Cu;
    // 0x20331c: 0x0  nop
    ctx->pc = 0x20331cu;
    // NOP
label_203320:
    // 0x203320: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x203320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203324: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x203324u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203328: 0x80470001  lb          $a3, 0x1($v0)
    ctx->pc = 0x203328u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x20332c: 0x80480002  lb          $t0, 0x2($v0)
    ctx->pc = 0x20332cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x203330: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x203330u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x203334: 0xa3a70001  sb          $a3, 0x1($sp)
    ctx->pc = 0x203334u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x203338: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x203338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20333c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x20333cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x203340: 0xc080cd8  jal         func_203360
    ctx->pc = 0x203340u;
    SET_GPR_U32(ctx, 31, 0x203348u);
    ctx->pc = 0x203344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203340u;
    // 0x203344: 0xa3a80002  sb          $t0, 0x2($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203360u, 0x203340u, 0x203348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203348u;
label_203348:
    // 0x203348: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x203348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20334c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20334cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_203350:
    // 0x203350: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203354: 0x3e00008  jr          $ra
    ctx->pc = 0x203354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203354u;
        // 0x203358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20335Cu;
    // 0x20335c: 0x0  nop
    ctx->pc = 0x20335cu;
    // NOP
    if (ctx->pc == 0x20335cu) { ctx->pc = 0x203360u; }
}
