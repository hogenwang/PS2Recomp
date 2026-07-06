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

// Function: sub_0020FCB0
// Address: 0x20fcb0 - 0x20fe58
void sub_0020FCB0_0x20fcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FCB0_0x20fcb0");
#endif

    switch (ctx->pc) {
        case 0x20fcf0u: goto label_20fcf0;
        case 0x20fd84u: goto label_20fd84;
        case 0x20fd9cu: goto label_20fd9c;
        case 0x20fdbcu: goto label_20fdbc;
        case 0x20fdc0u: goto label_20fdc0;
        case 0x20fe10u: goto label_20fe10;
        case 0x20fe1cu: goto label_20fe1c;
        case 0x20fe4cu: goto label_20fe4c;
        default: break;
    }

    ctx->pc = 0x20fcb0u;

    // 0x20fcb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20fcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20fcb4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x20fcb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20fcb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20fcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20fcbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20fcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20fcc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20fcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20fcc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20fcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20fcc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20fcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20fccc: 0x8c8e0024  lw          $t6, 0x24($a0)
    ctx->pc = 0x20fcccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x20fcd0: 0x11cf0010  beq         $t6, $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x20FCD0u;
    {
        const bool branch_taken_0x20fcd0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x20FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCD0u;
        // 0x20fcd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fcd0) {
            ctx->pc = 0x20FD14u;
            goto label_20fd14;
        }
    }
    ctx->pc = 0x20FCD8u;
    // 0x20fcd8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20fcdc: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20fcdcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20fce0: 0x2484fde8  addiu       $a0, $a0, -0x218
    ctx->pc = 0x20fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966760));
    // 0x20fce4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20fce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fce8: 0x2529fc70  addiu       $t1, $t1, -0x390
    ctx->pc = 0x20fce8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966384));
    // 0x20fcec: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x20fcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20fcf0:
    // 0x20fcf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20fcf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fcf4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20fcf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fcf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20fcf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20fcfc: 0x2408d8ee  addiu       $t0, $zero, -0x2712
    ctx->pc = 0x20fcfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
    // 0x20fd00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20fd00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fd04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20fd04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20fd08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20fd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fd0c: 0x8084408  j           func_211020
    ctx->pc = 0x20FD0Cu;
    ctx->pc = 0x20FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FD0Cu;
    // 0x20fd10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211020u, 0x20FD0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x20FD14u;
label_20fd14:
    // 0x20fd14: 0x8093002a  lb          $s3, 0x2A($a0)
    ctx->pc = 0x20fd14u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x20fd18: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x20fd18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fd1c: 0x126f0007  beq         $s3, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x20FD1Cu;
    {
        const bool branch_taken_0x20fd1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        ctx->pc = 0x20FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD1Cu;
        // 0x20fd20: 0x3c09003f  lui         $t1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd1c) {
            ctx->pc = 0x20FD3Cu;
            goto label_20fd3c;
        }
    }
    ctx->pc = 0x20FD24u;
    // 0x20fd24: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20fd28: 0x2484fde8  addiu       $a0, $a0, -0x218
    ctx->pc = 0x20fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966760));
    // 0x20fd2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20fd2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd30: 0x2529fe00  addiu       $t1, $t1, -0x200
    ctx->pc = 0x20fd30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966784));
    // 0x20fd34: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x20FD34u;
    {
        const bool branch_taken_0x20fd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD34u;
        // 0x20fd38: 0x240501c2  addiu       $a1, $zero, 0x1C2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd34) {
            ctx->pc = 0x20FCF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20fcf0;
        }
    }
    ctx->pc = 0x20FD3Cu;
label_20fd3c:
    // 0x20fd3c: 0x908f0028  lbu         $t7, 0x28($a0)
    ctx->pc = 0x20fd3cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x20fd40: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x20fd40u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20fd44: 0x55e00008  bnel        $t7, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20FD44u;
    {
        const bool branch_taken_0x20fd44 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fd44) {
            ctx->pc = 0x20FD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FD44u;
            // 0x20fd48: 0x8c8e0064  lw          $t6, 0x64($a0) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FD68u;
            goto label_20fd68;
        }
    }
    ctx->pc = 0x20FD4Cu;
    // 0x20fd4c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20fd50: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20fd50u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20fd54: 0x2484fde8  addiu       $a0, $a0, -0x218
    ctx->pc = 0x20fd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966760));
    // 0x20fd58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20fd58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd5c: 0x2529fca8  addiu       $t1, $t1, -0x358
    ctx->pc = 0x20fd5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966440));
    // 0x20fd60: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x20FD60u;
    {
        const bool branch_taken_0x20fd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD60u;
        // 0x20fd64: 0x240501c4  addiu       $a1, $zero, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd60) {
            ctx->pc = 0x20FCF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20fcf0;
        }
    }
    ctx->pc = 0x20FD68u;
label_20fd68:
    // 0x20fd68: 0x8c8f0060  lw          $t7, 0x60($a0)
    ctx->pc = 0x20fd68u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x20fd6c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x20fd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20fd70: 0x1ee8023  subu        $s0, $t7, $t6
    ctx->pc = 0x20fd70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x20fd74: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x20fd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20fd78: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x20fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x20fd7c: 0xc089056  jal         func_224158
    ctx->pc = 0x20FD7Cu;
    SET_GPR_U32(ctx, 31, 0x20FD84u);
    ctx->pc = 0x20FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FD7Cu;
    // 0x20fd80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224158u, 0x20FD7Cu, 0x20FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD84u;
label_20fd84:
    // 0x20fd84: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x20fd84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fd88: 0x144f0014  bne         $v0, $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x20FD88u;
    {
        const bool branch_taken_0x20fd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x20FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD88u;
        // 0x20fd8c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd88) {
            ctx->pc = 0x20FDDCu;
            goto label_20fddc;
        }
    }
    ctx->pc = 0x20FD90u;
    // 0x20fd90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20fd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd94: 0xc083c8c  jal         func_20F230
    ctx->pc = 0x20FD94u;
    SET_GPR_U32(ctx, 31, 0x20FD9Cu);
    ctx->pc = 0x20FD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FD94u;
    // 0x20fd98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F230u, 0x20FD94u, 0x20FD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD9Cu;
label_20fd9c:
    // 0x20fd9c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20fd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20fda0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20fda0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20fda4: 0x2484fde8  addiu       $a0, $a0, -0x218
    ctx->pc = 0x20fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966760));
    // 0x20fda8: 0x24e7fe18  addiu       $a3, $a3, -0x1E8
    ctx->pc = 0x20fda8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966808));
    // 0x20fdac: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x20fdacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fdb0: 0x240501ce  addiu       $a1, $zero, 0x1CE
    ctx->pc = 0x20fdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 462));
    // 0x20fdb4: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20FDB4u;
    SET_GPR_U32(ctx, 31, 0x20FDBCu);
    ctx->pc = 0x20FDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FDB4u;
    // 0x20fdb8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20FDB4u, 0x20FDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FDBCu;
label_20fdbc:
    // 0x20fdbc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x20fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_20fdc0:
    // 0x20fdc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20fdc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fdc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20fdc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20fdc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20fdc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fdcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20fdccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20fdd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20fdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x20FDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDD4u;
        // 0x20fdd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FDDCu;
label_20fddc:
    // 0x20fddc: 0x8e2f0064  lw          $t7, 0x64($s1)
    ctx->pc = 0x20fddcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x20fde0: 0x8e280060  lw          $t0, 0x60($s1)
    ctx->pc = 0x20fde0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x20fde4: 0x1e27821  addu        $t7, $t7, $v0
    ctx->pc = 0x20fde4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x20fde8: 0x150f0018  bne         $t0, $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x20FDE8u;
    {
        const bool branch_taken_0x20fde8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 15));
        ctx->pc = 0x20FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDE8u;
        // 0x20fdec: 0xae2f0064  sw          $t7, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fde8) {
            ctx->pc = 0x20FE4Cu;
            goto label_20fe4c;
        }
    }
    ctx->pc = 0x20FDF0u;
    // 0x20fdf0: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x20fdf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x20fdf4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20fdf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20fdf8: 0x2610fde8  addiu       $s0, $s0, -0x218
    ctx->pc = 0x20fdf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966760));
    // 0x20fdfc: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x20fdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
    // 0x20fe00: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x20fe00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20fe04: 0x240501d7  addiu       $a1, $zero, 0x1D7
    ctx->pc = 0x20fe04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 471));
    // 0x20fe08: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20FE08u;
    SET_GPR_U32(ctx, 31, 0x20FE10u);
    ctx->pc = 0x20FE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE08u;
    // 0x20fe0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20FE08u, 0x20FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE10u;
label_20fe10:
    // 0x20fe10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20fe10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe14: 0xc083c8c  jal         func_20F230
    ctx->pc = 0x20FE14u;
    SET_GPR_U32(ctx, 31, 0x20FE1Cu);
    ctx->pc = 0x20FE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE14u;
    // 0x20fe18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F230u, 0x20FE14u, 0x20FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE1Cu;
label_20fe1c:
    // 0x20fe1c: 0x9629005e  lhu         $t1, 0x5E($s1)
    ctx->pc = 0x20fe1cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x20fe20: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20fe20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20fe24: 0xae330074  sw          $s3, 0x74($s1)
    ctx->pc = 0x20fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 19));
    // 0x20fe28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20fe28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe2c: 0xa220002a  sb          $zero, 0x2A($s1)
    ctx->pc = 0x20fe2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x20fe30: 0x2528ffff  addiu       $t0, $t1, -0x1
    ctx->pc = 0x20fe30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x20fe34: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x20fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x20fe38: 0x24e7fe40  addiu       $a3, $a3, -0x1C0
    ctx->pc = 0x20fe38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966848));
    // 0x20fe3c: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x20fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x20fe40: 0x240501df  addiu       $a1, $zero, 0x1DF
    ctx->pc = 0x20fe40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 479));
    // 0x20fe44: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20FE44u;
    SET_GPR_U32(ctx, 31, 0x20FE4Cu);
    ctx->pc = 0x20FE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE44u;
    // 0x20fe48: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20FE44u, 0x20FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE4Cu;
label_20fe4c:
    // 0x20fe4c: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x20FE4Cu;
    {
        const bool branch_taken_0x20fe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE4Cu;
        // 0x20fe50: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe4c) {
            ctx->pc = 0x20FDC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20fdc0;
        }
    }
    ctx->pc = 0x20FE54u;
    // 0x20fe54: 0x0  nop
    ctx->pc = 0x20fe54u;
    // NOP
}
