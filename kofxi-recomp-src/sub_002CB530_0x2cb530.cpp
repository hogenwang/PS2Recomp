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

// Function: sub_002CB530
// Address: 0x2cb530 - 0x2cb650
void sub_002CB530_0x2cb530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB530_0x2cb530");
#endif

    switch (ctx->pc) {
        case 0x2cb568u: goto label_2cb568;
        case 0x2cb584u: goto label_2cb584;
        case 0x2cb61cu: goto label_2cb61c;
        case 0x2cb638u: goto label_2cb638;
        default: break;
    }

    ctx->pc = 0x2cb530u;

    // 0x2cb530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cb530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cb534: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cb534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb538: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2cb538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2cb53c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2cb53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb540: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2cb540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2cb544: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cb544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb548: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2cb548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2cb54c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cb54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb550: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2cb550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2cb554: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2cb554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cb558: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2CB558u;
    {
        const bool branch_taken_0x2cb558 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB558u;
        // 0x2cb55c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb558) {
            ctx->pc = 0x2CB584u;
            goto label_2cb584;
        }
    }
    ctx->pc = 0x2CB560u;
    // 0x2cb560: 0xc0b2f92  jal         func_2CBE48
    ctx->pc = 0x2CB560u;
    SET_GPR_U32(ctx, 31, 0x2CB568u);
    ctx->pc = 0x2CB564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB560u;
    // 0x2cb564: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBE48u, 0x2CB560u, 0x2CB568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB568u;
label_2cb568:
    // 0x2cb568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cb568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb56c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cb56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb570: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cb570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb574: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB574u;
    {
        const bool branch_taken_0x2cb574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB574u;
        // 0x2cb578: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb574) {
            ctx->pc = 0x2CB584u;
            goto label_2cb584;
        }
    }
    ctx->pc = 0x2CB57Cu;
    // 0x2cb57c: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CB57Cu;
    SET_GPR_U32(ctx, 31, 0x2CB584u);
    ctx->pc = 0x2CB580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB57Cu;
    // 0x2cb580: 0x8fa80020  lw          $t0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C99B8u, 0x2CB57Cu, 0x2CB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB584u;
label_2cb584:
    // 0x2cb584: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2cb584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb588: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2cb588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cb58c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2cb58cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb590: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2cb590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb594: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB594u;
        // 0x2cb598: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB59Cu;
    // 0x2cb59c: 0x0  nop
    ctx->pc = 0x2cb59cu;
    // NOP
    // 0x2cb5a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cb5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cb5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb5a8: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x2cb5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2cb5ac: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB5ACu;
    {
        const bool branch_taken_0x2cb5ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5ACu;
        // 0x2cb5b0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb5ac) {
            ctx->pc = 0x2CB5C0u;
            goto label_2cb5c0;
        }
    }
    ctx->pc = 0x2CB5B4u;
    // 0x2cb5b4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2cb5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cb5b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB5B8u;
    {
        const bool branch_taken_0x2cb5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5B8u;
        // 0x2cb5bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb5b8) {
            ctx->pc = 0x2CB5D0u;
            goto label_2cb5d0;
        }
    }
    ctx->pc = 0x2CB5C0u;
label_2cb5c0:
    // 0x2cb5c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb5c4: 0x24020804  addiu       $v0, $zero, 0x804
    ctx->pc = 0x2cb5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
    // 0x2cb5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5C8u;
        // 0x2cb5cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB5D0u;
label_2cb5d0:
    // 0x2cb5d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb5d4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2cb5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5d8: 0x80b3276  j           func_2CC9D8
    ctx->pc = 0x2CB5D8u;
    ctx->pc = 0x2CB5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB5D8u;
    // 0x2cb5dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC9D8u, 0x2CB5D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CB5E0u;
    // 0x2cb5e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cb5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cb5e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cb5e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2cb5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2cb5ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5f0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2cb5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2cb5f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cb5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5f8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2cb5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2cb5fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cb5fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb600: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2cb600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2cb604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cb604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb608: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2cb608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cb60c: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2CB60Cu;
    {
        const bool branch_taken_0x2cb60c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB60Cu;
        // 0x2cb610: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb60c) {
            ctx->pc = 0x2CB638u;
            goto label_2cb638;
        }
    }
    ctx->pc = 0x2CB614u;
    // 0x2cb614: 0xc0b31b2  jal         func_2CC6C8
    ctx->pc = 0x2CB614u;
    SET_GPR_U32(ctx, 31, 0x2CB61Cu);
    ctx->pc = 0x2CC6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC6C8u, 0x2CB614u, 0x2CB61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB61Cu;
label_2cb61c:
    // 0x2cb61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb620: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2cb620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb624: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB624u;
    {
        const bool branch_taken_0x2cb624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB624u;
        // 0x2cb628: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb624) {
            ctx->pc = 0x2CB638u;
            goto label_2cb638;
        }
    }
    ctx->pc = 0x2CB62Cu;
    // 0x2cb62c: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x2cb62cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb630: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CB630u;
    SET_GPR_U32(ctx, 31, 0x2CB638u);
    ctx->pc = 0x2CB634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB630u;
    // 0x2cb634: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C99B8u, 0x2CB630u, 0x2CB638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB638u;
label_2cb638:
    // 0x2cb638: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2cb638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb63c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2cb63cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cb640: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2cb640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb644: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2cb644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb648: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB648u;
        // 0x2cb64c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB650u;
}
