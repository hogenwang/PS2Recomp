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

// Function: sub_002EB4D8
// Address: 0x2eb4d8 - 0x2eb798
void sub_002EB4D8_0x2eb4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB4D8_0x2eb4d8");
#endif

    switch (ctx->pc) {
        case 0x2eb4dcu: goto label_2eb4dc;
        case 0x2eb4fcu: goto label_2eb4fc;
        case 0x2eb50cu: goto label_2eb50c;
        case 0x2eb520u: goto label_2eb520;
        case 0x2eb534u: goto label_2eb534;
        case 0x2eb54cu: goto label_2eb54c;
        case 0x2eb5dcu: goto label_2eb5dc;
        case 0x2eb5e4u: goto label_2eb5e4;
        case 0x2eb5f8u: goto label_2eb5f8;
        case 0x2eb600u: goto label_2eb600;
        case 0x2eb63cu: goto label_2eb63c;
        case 0x2eb654u: goto label_2eb654;
        case 0x2eb658u: goto label_2eb658;
        case 0x2eb694u: goto label_2eb694;
        case 0x2eb6c4u: goto label_2eb6c4;
        case 0x2eb6ccu: goto label_2eb6cc;
        case 0x2eb6dcu: goto label_2eb6dc;
        case 0x2eb6ecu: goto label_2eb6ec;
        case 0x2eb6f8u: goto label_2eb6f8;
        case 0x2eb708u: goto label_2eb708;
        case 0x2eb718u: goto label_2eb718;
        case 0x2eb728u: goto label_2eb728;
        case 0x2eb738u: goto label_2eb738;
        case 0x2eb748u: goto label_2eb748;
        case 0x2eb754u: goto label_2eb754;
        case 0x2eb764u: goto label_2eb764;
        default: break;
    }

    ctx->pc = 0x2eb4d8u;

    // 0x2eb4d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eb4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2eb4dc:
    // 0x2eb4dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eb4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2eb4e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eb4e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2eb4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2eb4e8: 0x3c1101cb  lui         $s1, 0x1CB
    ctx->pc = 0x2eb4e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)459 << 16));
    // 0x2eb4ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2eb4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2eb4f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eb4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb4f4: 0x26320648  addiu       $s2, $s1, 0x648
    ctx->pc = 0x2eb4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1608));
    // 0x2eb4f8: 0x3c050a31  lui         $a1, 0xA31
    ctx->pc = 0x2eb4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2609 << 16));
label_2eb4fc:
    // 0x2eb4fc: 0x26240648  addiu       $a0, $s1, 0x648
    ctx->pc = 0x2eb4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1608));
    // 0x2eb500: 0x34a5108e  ori         $a1, $a1, 0x108E
    ctx->pc = 0x2eb500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4238);
    // 0x2eb504: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x2EB504u;
    SET_GPR_U32(ctx, 31, 0x2EB50Cu);
    ctx->pc = 0x2EB508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB504u;
    // 0x2eb508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B50u, 0x2EB504u, 0x2EB50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB50Cu;
label_2eb50c:
    // 0x2eb50c: 0x443000b  bgezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EB50Cu;
    {
        const bool branch_taken_0x2eb50c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2eb50c) {
            ctx->pc = 0x2EB510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB50Cu;
            // 0x2eb510: 0x8e4f0024  lw          $t7, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB53Cu;
            goto label_2eb53c;
        }
    }
    ctx->pc = 0x2EB514u;
    // 0x2eb514: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb518: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2EB518u;
    SET_GPR_U32(ctx, 31, 0x2EB520u);
    ctx->pc = 0x2EB51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB518u;
    // 0x2eb51c: 0x24840270  addiu       $a0, $a0, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2EB518u, 0x2EB520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB520u;
label_2eb520:
    // 0x2eb520: 0x0  nop
    ctx->pc = 0x2eb520u;
    // NOP
    // 0x2eb524: 0x0  nop
    ctx->pc = 0x2eb524u;
    // NOP
    // 0x2eb528: 0x0  nop
    ctx->pc = 0x2eb528u;
    // NOP
    // 0x2eb52c: 0x0  nop
    ctx->pc = 0x2eb52cu;
    // NOP
    // 0x2eb530: 0x0  nop
    ctx->pc = 0x2eb530u;
    // NOP
label_2eb534:
    // 0x2eb534: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x2EB534u;
    {
        const bool branch_taken_0x2eb534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb534) {
            ctx->pc = 0x2EB534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eb534;
        }
    }
    ctx->pc = 0x2EB53Cu;
label_2eb53c:
    // 0x2eb53c: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x2EB53Cu;
    {
        const bool branch_taken_0x2eb53c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB53Cu;
        // 0x2eb540: 0x3c0f0001  lui         $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb53c) {
            ctx->pc = 0x2EB570u;
            goto label_2eb570;
        }
    }
    ctx->pc = 0x2EB544u;
    // 0x2eb544: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x2eb544u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eb548: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x2eb548u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_2eb54c:
    // 0x2eb54c: 0x0  nop
    ctx->pc = 0x2eb54cu;
    // NOP
    // 0x2eb550: 0x0  nop
    ctx->pc = 0x2eb550u;
    // NOP
    // 0x2eb554: 0x0  nop
    ctx->pc = 0x2eb554u;
    // NOP
    // 0x2eb558: 0x0  nop
    ctx->pc = 0x2eb558u;
    // NOP
    // 0x2eb55c: 0x0  nop
    ctx->pc = 0x2eb55cu;
    // NOP
    // 0x2eb560: 0x15eefffa  bne         $t7, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EB560u;
    {
        const bool branch_taken_0x2eb560 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x2EB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB560u;
        // 0x2eb564: 0x25efffff  addiu       $t7, $t7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb560) {
            ctx->pc = 0x2EB54Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eb54c;
        }
    }
    ctx->pc = 0x2EB568u;
    // 0x2eb568: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x2EB568u;
    {
        const bool branch_taken_0x2eb568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB568u;
        // 0x2eb56c: 0x3c050a31  lui         $a1, 0xA31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2609 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb568) {
            ctx->pc = 0x2EB4FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eb4fc;
        }
    }
    ctx->pc = 0x2EB570u;
label_2eb570:
    // 0x2eb570: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2eb570u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2eb574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eb574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eb578: 0xadf0eca0  sw          $s0, -0x1360($t7)
    ctx->pc = 0x2eb578u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294962336), GPR_U32(ctx, 16));
    // 0x2eb57c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eb57cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb580: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2eb580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb588: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2eb588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eb58c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB58Cu;
        // 0x2eb590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB594u;
    // 0x2eb594: 0x0  nop
    ctx->pc = 0x2eb594u;
    // NOP
    // 0x2eb598: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2eb598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2eb59c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2eb59cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2eb5a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2eb5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2eb5a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2eb5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2eb5a8: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2eb5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2eb5ac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2eb5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2eb5b0: 0x8e2feca0  lw          $t7, -0x1360($s1)
    ctx->pc = 0x2eb5b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962336)));
    // 0x2eb5b4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2eb5b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5b8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2eb5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2eb5bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2eb5bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5c0: 0xade40000  sw          $a0, 0x0($t7)
    ctx->pc = 0x2eb5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 4));
    // 0x2eb5c4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2eb5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2eb5c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2eb5c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5cc: 0x8e24eca0  lw          $a0, -0x1360($s1)
    ctx->pc = 0x2eb5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962336)));
    // 0x2eb5d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2eb5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2eb5d4: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x2EB5D4u;
    SET_GPR_U32(ctx, 31, 0x2EB5DCu);
    ctx->pc = 0x2EB5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5D4u;
    // 0x2eb5d8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x2EB5D4u, 0x2EB5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5DCu;
label_2eb5dc:
    // 0x2eb5dc: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2EB5DCu;
    SET_GPR_U32(ctx, 31, 0x2EB5E4u);
    ctx->pc = 0x2EB5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5DCu;
    // 0x2eb5e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2EB5DCu, 0x2EB5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5E4u;
label_2eb5e4:
    // 0x2eb5e4: 0x8e24eca0  lw          $a0, -0x1360($s1)
    ctx->pc = 0x2eb5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962336)));
    // 0x2eb5e8: 0x24500005  addiu       $s0, $v0, 0x5
    ctx->pc = 0x2eb5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x2eb5ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eb5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5f0: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x2EB5F0u;
    SET_GPR_U32(ctx, 31, 0x2EB5F8u);
    ctx->pc = 0x2EB5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5F0u;
    // 0x2eb5f4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x2EB5F0u, 0x2EB5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5F8u;
label_2eb5f8:
    // 0x2eb5f8: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2EB5F8u;
    SET_GPR_U32(ctx, 31, 0x2EB600u);
    ctx->pc = 0x2EB5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5F8u;
    // 0x2eb5fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2EB5F8u, 0x2EB600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB600u;
label_2eb600:
    // 0x2eb600: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2eb600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2eb604: 0x8e27eca0  lw          $a3, -0x1360($s1)
    ctx->pc = 0x2eb604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962336)));
    // 0x2eb608: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2eb608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2eb60c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2eb60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2eb610: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x2eb610u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2eb614: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2eb614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2eb618: 0x20f8024  and         $s0, $s0, $t7
    ctx->pc = 0x2eb618u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 15));
    // 0x2eb61c: 0x24840648  addiu       $a0, $a0, 0x648
    ctx->pc = 0x2eb61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1608));
    // 0x2eb620: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2eb620u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb624: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eb624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb628: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb62c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2eb62cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb630: 0x240a1350  addiu       $t2, $zero, 0x1350
    ctx->pc = 0x2eb630u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4944));
    // 0x2eb634: 0xc04434c  jal         func_110D30
    ctx->pc = 0x2EB634u;
    SET_GPR_U32(ctx, 31, 0x2EB63Cu);
    ctx->pc = 0x2EB638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB634u;
    // 0x2eb638: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x2EB634u, 0x2EB63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB63Cu;
label_2eb63c:
    // 0x2eb63c: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EB63Cu;
    {
        const bool branch_taken_0x2eb63c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB63Cu;
        // 0x2eb640: 0x8e2ceca0  lw          $t4, -0x1360($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb63c) {
            ctx->pc = 0x2EB678u;
            goto label_2eb678;
        }
    }
    ctx->pc = 0x2EB644u;
    // 0x2eb644: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb648: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eb648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb64c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2EB64Cu;
    SET_GPR_U32(ctx, 31, 0x2EB654u);
    ctx->pc = 0x2EB650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB64Cu;
    // 0x2eb650: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2EB64Cu, 0x2EB654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB654u;
label_2eb654:
    // 0x2eb654: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2eb654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2eb658:
    // 0x2eb658: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2eb658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb65c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2eb65cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eb660: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2eb660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb664: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2eb664u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2eb668: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2eb668u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eb66c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2eb66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2eb670: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB670u;
        // 0x2eb674: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB678u;
label_2eb678:
    // 0x2eb678: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x2eb678u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb67c: 0x258e0004  addiu       $t6, $t4, 0x4
    ctx->pc = 0x2eb67cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2eb680: 0x1d27825  or          $t7, $t6, $s2
    ctx->pc = 0x2eb680u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | GPR_U64(ctx, 18));
    // 0x2eb684: 0x31ef0007  andi        $t7, $t7, 0x7
    ctx->pc = 0x2eb684u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)7);
    // 0x2eb688: 0x11e00036  beqz        $t7, . + 4 + (0x36 << 2)
    ctx->pc = 0x2EB688u;
    {
        const bool branch_taken_0x2eb688 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB688u;
        // 0x2eb68c: 0x258b1344  addiu       $t3, $t4, 0x1344 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4932));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb688) {
            ctx->pc = 0x2EB764u;
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB690u;
    // 0x2eb690: 0x160782d  daddu       $t7, $t3, $zero
    ctx->pc = 0x2eb690u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2eb694:
    // 0x2eb694: 0x69c90007  ldl         $t1, 0x7($t6)
    ctx->pc = 0x2eb694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2eb698: 0x6dc90000  ldr         $t1, 0x0($t6)
    ctx->pc = 0x2eb698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2eb69c: 0x69ca000f  ldl         $t2, 0xF($t6)
    ctx->pc = 0x2eb69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2eb6a0: 0x6dca0008  ldr         $t2, 0x8($t6)
    ctx->pc = 0x2eb6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2eb6a4: 0xb1a90007  sdl         $t1, 0x7($t5)
    ctx->pc = 0x2eb6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb6a8: 0xb5a90000  sdr         $t1, 0x0($t5)
    ctx->pc = 0x2eb6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb6ac: 0xb1aa000f  sdl         $t2, 0xF($t5)
    ctx->pc = 0x2eb6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb6b0: 0xb5aa0008  sdr         $t2, 0x8($t5)
    ctx->pc = 0x2eb6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb6b4: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x2eb6b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x2eb6b8: 0x15cffff6  bne         $t6, $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x2EB6B8u;
    {
        const bool branch_taken_0x2eb6b8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6B8u;
        // 0x2eb6bc: 0x25ad0010  addiu       $t5, $t5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6b8) {
            ctx->pc = 0x2EB694u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eb694;
        }
    }
    ctx->pc = 0x2EB6C0u;
    // 0x2eb6c0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2eb6c4:
    // 0x2eb6c4: 0xc04a160  jal         func_128580
    ctx->pc = 0x2EB6C4u;
    SET_GPR_U32(ctx, 31, 0x2EB6CCu);
    ctx->pc = 0x2EB6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB6C4u;
    // 0x2eb6c8: 0x248402d0  addiu       $a0, $a0, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128580u, 0x2EB6C4u, 0x2EB6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB6CCu;
label_2eb6cc:
    // 0x2eb6cc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb6d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2eb6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb6d4: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x2EB6D4u;
    SET_GPR_U32(ctx, 31, 0x2EB6DCu);
    ctx->pc = 0x2EB6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB6D4u;
    // 0x2eb6d8: 0x248402f0  addiu       $a0, $a0, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x2EB6D4u, 0x2EB6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB6DCu;
label_2eb6dc:
    // 0x2eb6dc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb6e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eb6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb6e4: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x2EB6E4u;
    SET_GPR_U32(ctx, 31, 0x2EB6ECu);
    ctx->pc = 0x2EB6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB6E4u;
    // 0x2eb6e8: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x2EB6E4u, 0x2EB6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB6ECu;
label_2eb6ec:
    // 0x2eb6ec: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb6f0: 0xc04a160  jal         func_128580
    ctx->pc = 0x2EB6F0u;
    SET_GPR_U32(ctx, 31, 0x2EB6F8u);
    ctx->pc = 0x2EB6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB6F0u;
    // 0x2eb6f4: 0x24840310  addiu       $a0, $a0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128580u, 0x2EB6F0u, 0x2EB6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB6F8u;
label_2eb6f8:
    // 0x2eb6f8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb6fc: 0x24051340  addiu       $a1, $zero, 0x1340
    ctx->pc = 0x2eb6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
    // 0x2eb700: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x2EB700u;
    SET_GPR_U32(ctx, 31, 0x2EB708u);
    ctx->pc = 0x2EB704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB700u;
    // 0x2eb704: 0x24840330  addiu       $a0, $a0, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x2EB700u, 0x2EB708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB708u;
label_2eb708:
    // 0x2eb708: 0x8e451300  lw          $a1, 0x1300($s2)
    ctx->pc = 0x2eb708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4864)));
    // 0x2eb70c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb710: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x2EB710u;
    SET_GPR_U32(ctx, 31, 0x2EB718u);
    ctx->pc = 0x2EB714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB710u;
    // 0x2eb714: 0x24840340  addiu       $a0, $a0, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x2EB710u, 0x2EB718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB718u;
label_2eb718:
    // 0x2eb718: 0x8e45130c  lw          $a1, 0x130C($s2)
    ctx->pc = 0x2eb718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4876)));
    // 0x2eb71c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb71cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb720: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x2EB720u;
    SET_GPR_U32(ctx, 31, 0x2EB728u);
    ctx->pc = 0x2EB724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB720u;
    // 0x2eb724: 0x24840350  addiu       $a0, $a0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x2EB720u, 0x2EB728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB728u;
label_2eb728:
    // 0x2eb728: 0x92451320  lbu         $a1, 0x1320($s2)
    ctx->pc = 0x2eb728u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4896)));
    // 0x2eb72c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb72cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb730: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x2EB730u;
    SET_GPR_U32(ctx, 31, 0x2EB738u);
    ctx->pc = 0x2EB734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB730u;
    // 0x2eb734: 0x24840360  addiu       $a0, $a0, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x2EB730u, 0x2EB738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB738u;
label_2eb738:
    // 0x2eb738: 0x92451325  lbu         $a1, 0x1325($s2)
    ctx->pc = 0x2eb738u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4901)));
    // 0x2eb73c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb740: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x2EB740u;
    SET_GPR_U32(ctx, 31, 0x2EB748u);
    ctx->pc = 0x2EB744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB740u;
    // 0x2eb744: 0x24840370  addiu       $a0, $a0, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x2EB740u, 0x2EB748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB748u;
label_2eb748:
    // 0x2eb748: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb74c: 0xc04a160  jal         func_128580
    ctx->pc = 0x2EB74Cu;
    SET_GPR_U32(ctx, 31, 0x2EB754u);
    ctx->pc = 0x2EB750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB74Cu;
    // 0x2eb750: 0x24840380  addiu       $a0, $a0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128580u, 0x2EB74Cu, 0x2EB754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB754u;
label_2eb754:
    // 0x2eb754: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2eb754u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2eb758: 0x8deeeca0  lw          $t6, -0x1360($t7)
    ctx->pc = 0x2eb758u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962336)));
    // 0x2eb75c: 0x1000ffbe  b           . + 4 + (-0x42 << 2)
    ctx->pc = 0x2EB75Cu;
    {
        const bool branch_taken_0x2eb75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB75Cu;
        // 0x2eb760: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb75c) {
            ctx->pc = 0x2EB658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eb658;
        }
    }
    ctx->pc = 0x2EB764u;
label_2eb764:
    // 0x2eb764: 0xddcf0000  ld          $t7, 0x0($t6)
    ctx->pc = 0x2eb764u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2eb768: 0xddc90008  ld          $t1, 0x8($t6)
    ctx->pc = 0x2eb768u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x2eb76c: 0xddca0010  ld          $t2, 0x10($t6)
    ctx->pc = 0x2eb76cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x2eb770: 0xddcc0018  ld          $t4, 0x18($t6)
    ctx->pc = 0x2eb770u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x2eb774: 0xfdaf0000  sd          $t7, 0x0($t5)
    ctx->pc = 0x2eb774u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 15));
    // 0x2eb778: 0xfda90008  sd          $t1, 0x8($t5)
    ctx->pc = 0x2eb778u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 9));
    // 0x2eb77c: 0xfdaa0010  sd          $t2, 0x10($t5)
    ctx->pc = 0x2eb77cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 16), GPR_U64(ctx, 10));
    // 0x2eb780: 0xfdac0018  sd          $t4, 0x18($t5)
    ctx->pc = 0x2eb780u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 24), GPR_U64(ctx, 12));
    // 0x2eb784: 0x25ce0020  addiu       $t6, $t6, 0x20
    ctx->pc = 0x2eb784u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x2eb788: 0x15cbfff6  bne         $t6, $t3, . + 4 + (-0xA << 2)
    ctx->pc = 0x2EB788u;
    {
        const bool branch_taken_0x2eb788 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 11));
        ctx->pc = 0x2EB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB788u;
        // 0x2eb78c: 0x25ad0020  addiu       $t5, $t5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb788) {
            ctx->pc = 0x2EB764u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eb764;
        }
    }
    ctx->pc = 0x2EB790u;
    // 0x2eb790: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x2EB790u;
    {
        const bool branch_taken_0x2eb790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB790u;
        // 0x2eb794: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb790) {
            ctx->pc = 0x2EB6C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eb6c4;
        }
    }
    ctx->pc = 0x2EB798u;
}
