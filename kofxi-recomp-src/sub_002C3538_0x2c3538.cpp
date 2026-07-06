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

// Function: sub_002C3538
// Address: 0x2c3538 - 0x2c37b0
void sub_002C3538_0x2c3538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3538_0x2c3538");
#endif

    switch (ctx->pc) {
        case 0x2c3594u: goto label_2c3594;
        case 0x2c35a8u: goto label_2c35a8;
        case 0x2c35c0u: goto label_2c35c0;
        case 0x2c35d0u: goto label_2c35d0;
        case 0x2c35e0u: goto label_2c35e0;
        case 0x2c35f0u: goto label_2c35f0;
        case 0x2c3604u: goto label_2c3604;
        case 0x2c3634u: goto label_2c3634;
        case 0x2c3664u: goto label_2c3664;
        case 0x2c3678u: goto label_2c3678;
        case 0x2c368cu: goto label_2c368c;
        case 0x2c36b4u: goto label_2c36b4;
        case 0x2c36d0u: goto label_2c36d0;
        case 0x2c36dcu: goto label_2c36dc;
        case 0x2c36e8u: goto label_2c36e8;
        case 0x2c36f4u: goto label_2c36f4;
        case 0x2c3708u: goto label_2c3708;
        case 0x2c3734u: goto label_2c3734;
        case 0x2c3760u: goto label_2c3760;
        case 0x2c377cu: goto label_2c377c;
        default: break;
    }

    ctx->pc = 0x2c3538u;

    // 0x2c3538: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c3538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c353c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2c353cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2c3540: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2c3540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2c3544: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c3544u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3548: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2c3548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c354c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c354cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3550: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2c3550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c3554: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c3554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3558: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c3558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c355c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c355cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3560: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c3560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c3564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c3564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3568: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2c3568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2c356c: 0x12000086  beqz        $s0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2C356Cu;
    {
        const bool branch_taken_0x2c356c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C356Cu;
        // 0x2c3570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c356c) {
            ctx->pc = 0x2C3788u;
            goto label_2c3788;
        }
    }
    ctx->pc = 0x2C3574u;
    // 0x2c3574: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2c3574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c3578: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c3578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c357c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C357Cu;
    {
        const bool branch_taken_0x2c357c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C357Cu;
        // 0x2c3580: 0x3c07002c  lui         $a3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c357c) {
            ctx->pc = 0x2C3594u;
            goto label_2c3594;
        }
    }
    ctx->pc = 0x2C3584u;
    // 0x2c3584: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c3584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c3588: 0x24e742a0  addiu       $a3, $a3, 0x42A0
    ctx->pc = 0x2c3588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17056));
    // 0x2c358c: 0xc04a168  jal         func_1285A0
    ctx->pc = 0x2C358Cu;
    SET_GPR_U32(ctx, 31, 0x2C3594u);
    ctx->pc = 0x2C3590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C358Cu;
    // 0x2c3590: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1285A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1285A0u, 0x2C358Cu, 0x2C3594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3594u;
label_2c3594:
    // 0x2c3594: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c3594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c3598: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C3598u;
    {
        const bool branch_taken_0x2c3598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3598) {
            ctx->pc = 0x2C359Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3598u;
            // 0x2c359c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C35C8u;
            goto label_2c35c8;
        }
    }
    ctx->pc = 0x2C35A0u;
    // 0x2c35a0: 0xc0a0144  jal         func_280510
    ctx->pc = 0x2C35A0u;
    SET_GPR_U32(ctx, 31, 0x2C35A8u);
    ctx->pc = 0x280510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280510u, 0x2C35A0u, 0x2C35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35A8u;
label_2c35a8:
    // 0x2c35a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c35a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c35ac: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C35ACu;
    {
        const bool branch_taken_0x2c35ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c35ac) {
            ctx->pc = 0x2C35B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C35ACu;
            // 0x2c35b0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C35C8u;
            goto label_2c35c8;
        }
    }
    ctx->pc = 0x2C35B4u;
    // 0x2c35b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c35b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c35b8: 0xc0a004a  jal         func_280128
    ctx->pc = 0x2C35B8u;
    SET_GPR_U32(ctx, 31, 0x2C35C0u);
    ctx->pc = 0x2C35BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C35B8u;
    // 0x2c35bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280128u, 0x2C35B8u, 0x2C35C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35C0u;
label_2c35c0:
    // 0x2c35c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c35c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c35c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2c35c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c35c8:
    // 0x2c35c8: 0xc0b093c  jal         func_2C24F0
    ctx->pc = 0x2C35C8u;
    SET_GPR_U32(ctx, 31, 0x2C35D0u);
    ctx->pc = 0x2C35CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C35C8u;
    // 0x2c35cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C24F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C24F0u, 0x2C35C8u, 0x2C35D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35D0u;
label_2c35d0:
    // 0x2c35d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2c35d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c35d4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2c35d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c35d8: 0xc0a07f8  jal         func_281FE0
    ctx->pc = 0x2C35D8u;
    SET_GPR_U32(ctx, 31, 0x2C35E0u);
    ctx->pc = 0x2C35DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C35D8u;
    // 0x2c35dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281FE0u, 0x2C35D8u, 0x2C35E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35E0u;
label_2c35e0:
    // 0x2c35e0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2c35e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c35e4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2c35e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c35e8: 0xc0a045a  jal         func_281168
    ctx->pc = 0x2C35E8u;
    SET_GPR_U32(ctx, 31, 0x2C35F0u);
    ctx->pc = 0x2C35ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C35E8u;
    // 0x2c35ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281168u, 0x2C35E8u, 0x2C35F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35F0u;
label_2c35f0:
    // 0x2c35f0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2c35f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c35f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C35F4u;
    {
        const bool branch_taken_0x2c35f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C35F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C35F4u;
        // 0x2c35f8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c35f4) {
            ctx->pc = 0x2C3608u;
            goto label_2c3608;
        }
    }
    ctx->pc = 0x2C35FCu;
    // 0x2c35fc: 0xc0a045a  jal         func_281168
    ctx->pc = 0x2C35FCu;
    SET_GPR_U32(ctx, 31, 0x2C3604u);
    ctx->pc = 0x2C3600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C35FCu;
    // 0x2c3600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281168u, 0x2C35FCu, 0x2C3604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3604u;
label_2c3604:
    // 0x2c3604: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2c3604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c3608:
    // 0x2c3608: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2c3608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c360c: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C360Cu;
    {
        const bool branch_taken_0x2c360c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c360c) {
            ctx->pc = 0x2C3610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C360Cu;
            // 0x2c3610: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C363Cu;
            goto label_2c363c;
        }
    }
    ctx->pc = 0x2C3614u;
    // 0x2c3614: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c3614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3618: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3618u;
    {
        const bool branch_taken_0x2c3618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3618u;
        // 0x2c361c: 0x3c06002c  lui         $a2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3618) {
            ctx->pc = 0x2C3638u;
            goto label_2c3638;
        }
    }
    ctx->pc = 0x2C3620u;
    // 0x2c3620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c3620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3624: 0x24c63200  addiu       $a2, $a2, 0x3200
    ctx->pc = 0x2c3624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12800));
    // 0x2c3628: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c3628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c362c: 0xc0a09b8  jal         func_2826E0
    ctx->pc = 0x2C362Cu;
    SET_GPR_U32(ctx, 31, 0x2C3634u);
    ctx->pc = 0x2C3630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C362Cu;
    // 0x2c3630: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2826E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2826E0u, 0x2C362Cu, 0x2C3634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3634u;
label_2c3634:
    // 0x2c3634: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2c3634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c3638:
    // 0x2c3638: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2c3638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2c363c:
    // 0x2c363c: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C363Cu;
    {
        const bool branch_taken_0x2c363c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c363c) {
            ctx->pc = 0x2C3640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C363Cu;
            // 0x2c3640: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3680u;
            goto label_2c3680;
        }
    }
    ctx->pc = 0x2C3644u;
    // 0x2c3644: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c3644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3648: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C3648u;
    {
        const bool branch_taken_0x2c3648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3648u;
        // 0x2c364c: 0x3c06002c  lui         $a2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3648) {
            ctx->pc = 0x2C367Cu;
            goto label_2c367c;
        }
    }
    ctx->pc = 0x2C3650u;
    // 0x2c3650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c3650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3654: 0x24c642b8  addiu       $a2, $a2, 0x42B8
    ctx->pc = 0x2c3654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17080));
    // 0x2c3658: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c3658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c365c: 0xc0a09b8  jal         func_2826E0
    ctx->pc = 0x2C365Cu;
    SET_GPR_U32(ctx, 31, 0x2C3664u);
    ctx->pc = 0x2C3660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C365Cu;
    // 0x2c3660: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2826E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2826E0u, 0x2C365Cu, 0x2C3664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3664u;
label_2c3664:
    // 0x2c3664: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c3664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3668: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c3668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c366c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c366cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3670: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x2C3670u;
    SET_GPR_U32(ctx, 31, 0x2C3678u);
    ctx->pc = 0x2C3674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3670u;
    // 0x2c3674: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x2C3670u, 0x2C3678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3678u;
label_2c3678:
    // 0x2c3678: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2c3678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c367c:
    // 0x2c367c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3680:
    // 0x2c3680: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c3680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3684: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x2C3684u;
    SET_GPR_U32(ctx, 31, 0x2C368Cu);
    ctx->pc = 0x2C3688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3684u;
    // 0x2c3688: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x2C3684u, 0x2C368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C368Cu;
label_2c368c:
    // 0x2c368c: 0x1240003e  beqz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C368Cu;
    {
        const bool branch_taken_0x2c368c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C368Cu;
        // 0x2c3690: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c368c) {
            ctx->pc = 0x2C3788u;
            goto label_2c3788;
        }
    }
    ctx->pc = 0x2C3694u;
    // 0x2c3694: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c3694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c3698: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c3698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c369c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c369cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c36a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c36a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c36a4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c36a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2c36a8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c36a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c36ac: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x2C36ACu;
    SET_GPR_U32(ctx, 31, 0x2C36B4u);
    ctx->pc = 0x2C36B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C36ACu;
    // 0x2c36b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x2C36ACu, 0x2C36B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36B4u;
label_2c36b4:
    // 0x2c36b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c36b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c36b8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C36B8u;
    {
        const bool branch_taken_0x2c36b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c36b8) {
            ctx->pc = 0x2C36BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C36B8u;
            // 0x2c36bc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C36D4u;
            goto label_2c36d4;
        }
    }
    ctx->pc = 0x2C36C0u;
    // 0x2c36c0: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C36C0u;
    {
        const bool branch_taken_0x2c36c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c36c0) {
            ctx->pc = 0x2C36C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C36C0u;
            // 0x2c36c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C36D4u;
            goto label_2c36d4;
        }
    }
    ctx->pc = 0x2C36C8u;
    // 0x2c36c8: 0xc0a004a  jal         func_280128
    ctx->pc = 0x2C36C8u;
    SET_GPR_U32(ctx, 31, 0x2C36D0u);
    ctx->pc = 0x2C36CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C36C8u;
    // 0x2c36cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280128u, 0x2C36C8u, 0x2C36D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36D0u;
label_2c36d0:
    // 0x2c36d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2c36d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c36d4:
    // 0x2c36d4: 0xc0b093c  jal         func_2C24F0
    ctx->pc = 0x2C36D4u;
    SET_GPR_U32(ctx, 31, 0x2C36DCu);
    ctx->pc = 0x2C36D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C36D4u;
    // 0x2c36d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C24F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C24F0u, 0x2C36D4u, 0x2C36DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36DCu;
label_2c36dc:
    // 0x2c36dc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2c36dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c36e0: 0xc0a07f8  jal         func_281FE0
    ctx->pc = 0x2C36E0u;
    SET_GPR_U32(ctx, 31, 0x2C36E8u);
    ctx->pc = 0x2C36E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C36E0u;
    // 0x2c36e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281FE0u, 0x2C36E0u, 0x2C36E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36E8u;
label_2c36e8:
    // 0x2c36e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2c36e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c36ec: 0xc0a045a  jal         func_281168
    ctx->pc = 0x2C36ECu;
    SET_GPR_U32(ctx, 31, 0x2C36F4u);
    ctx->pc = 0x2C36F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C36ECu;
    // 0x2c36f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281168u, 0x2C36ECu, 0x2C36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36F4u;
label_2c36f4:
    // 0x2c36f4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2c36f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c36f8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C36F8u;
    {
        const bool branch_taken_0x2c36f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c36f8) {
            ctx->pc = 0x2C36FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C36F8u;
            // 0x2c36fc: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C370Cu;
            goto label_2c370c;
        }
    }
    ctx->pc = 0x2C3700u;
    // 0x2c3700: 0xc0a045a  jal         func_281168
    ctx->pc = 0x2C3700u;
    SET_GPR_U32(ctx, 31, 0x2C3708u);
    ctx->pc = 0x2C3704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3700u;
    // 0x2c3704: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281168u, 0x2C3700u, 0x2C3708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3708u;
label_2c3708:
    // 0x2c3708: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2c3708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2c370c:
    // 0x2c370c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2C370Cu;
    {
        const bool branch_taken_0x2c370c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c370c) {
            ctx->pc = 0x2C3710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C370Cu;
            // 0x2c3710: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3738u;
            goto label_2c3738;
        }
    }
    ctx->pc = 0x2C3714u;
    // 0x2c3714: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c3714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3718: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3718u;
    {
        const bool branch_taken_0x2c3718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3718u;
        // 0x2c371c: 0x3c06002c  lui         $a2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3718) {
            ctx->pc = 0x2C3734u;
            goto label_2c3734;
        }
    }
    ctx->pc = 0x2C3720u;
    // 0x2c3720: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c3720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3724: 0x24c63200  addiu       $a2, $a2, 0x3200
    ctx->pc = 0x2c3724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12800));
    // 0x2c3728: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c3728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c372c: 0xc0a09b8  jal         func_2826E0
    ctx->pc = 0x2C372Cu;
    SET_GPR_U32(ctx, 31, 0x2C3734u);
    ctx->pc = 0x2C3730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C372Cu;
    // 0x2c3730: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2826E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2826E0u, 0x2C372Cu, 0x2C3734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3734u;
label_2c3734:
    // 0x2c3734: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2c3734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2c3738:
    // 0x2c3738: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C3738u;
    {
        const bool branch_taken_0x2c3738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3738u;
        // 0x2c373c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3738) {
            ctx->pc = 0x2C3780u;
            goto label_2c3780;
        }
    }
    ctx->pc = 0x2C3740u;
    // 0x2c3740: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c3740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3744: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C3744u;
    {
        const bool branch_taken_0x2c3744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3744u;
        // 0x2c3748: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3744) {
            ctx->pc = 0x2C3780u;
            goto label_2c3780;
        }
    }
    ctx->pc = 0x2C374Cu;
    // 0x2c374c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c374cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3750: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c3750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3754: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c3754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3758: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x2C3758u;
    SET_GPR_U32(ctx, 31, 0x2C3760u);
    ctx->pc = 0x2C375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3758u;
    // 0x2c375c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x2C3758u, 0x2C3760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3760u;
label_2c3760:
    // 0x2c3760: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c3760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c3764: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2c3764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c3768: 0x24c642b8  addiu       $a2, $a2, 0x42B8
    ctx->pc = 0x2c3768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17080));
    // 0x2c376c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c376cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3770: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c3770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c3774: 0xc0a09b8  jal         func_2826E0
    ctx->pc = 0x2C3774u;
    SET_GPR_U32(ctx, 31, 0x2C377Cu);
    ctx->pc = 0x2C3778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3774u;
    // 0x2c3778: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2826E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2826E0u, 0x2C3774u, 0x2C377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C377Cu;
label_2c377c:
    // 0x2c377c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c377cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3780:
    // 0x2c3780: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2c3780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3784: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2c3784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2c3788:
    // 0x2c3788: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c3788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c378c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2c378cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c3790: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2c3790u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c3794: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2c3794u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3798: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2c3798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c379c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2c379cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c37a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c37a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c37a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C37A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C37A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37A4u;
        // 0x2c37a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C37A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C37ACu;
    // 0x2c37ac: 0x0  nop
    ctx->pc = 0x2c37acu;
    // NOP
}
