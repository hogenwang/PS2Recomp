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

// Function: sub_001DD538
// Address: 0x1dd538 - 0x1dd6a0
void sub_001DD538_0x1dd538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD538_0x1dd538");
#endif

    switch (ctx->pc) {
        case 0x1dd57cu: goto label_1dd57c;
        case 0x1dd600u: goto label_1dd600;
        case 0x1dd650u: goto label_1dd650;
        case 0x1dd65cu: goto label_1dd65c;
        default: break;
    }

    ctx->pc = 0x1dd538u;

    // 0x1dd538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dd53c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dd53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dd540: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1dd540u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd544: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1dd544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1dd548: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1dd548u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd54c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1dd54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1dd550: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1dd550u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd558: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd55c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd560: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dd560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dd564: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1dd564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1dd568: 0x8cb10008  lw          $s1, 0x8($a1)
    ctx->pc = 0x1dd568u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1dd56c: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x1dd56cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1dd570: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1dd570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1dd574: 0xc077444  jal         func_1DD110
    ctx->pc = 0x1DD574u;
    SET_GPR_U32(ctx, 31, 0x1DD57Cu);
    ctx->pc = 0x1DD578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD574u;
    // 0x1dd578: 0x8cb30010  lw          $s3, 0x10($a1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD110u, 0x1DD574u, 0x1DD57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD57Cu;
label_1dd57c:
    // 0x1dd57c: 0x2626000f  addiu       $a2, $s1, 0xF
    ctx->pc = 0x1dd57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x1dd580: 0x2a240000  slti        $a0, $s1, 0x0
    ctx->pc = 0x1dd580u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dd584: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x1dd584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dd588: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x1dd588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x1dd58c: 0xc4880b  movn        $s1, $a2, $a0
    ctx->pc = 0x1dd58cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
    // 0x1dd590: 0xa3800b  movn        $s0, $a1, $v1
    ctx->pc = 0x1dd590u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x1dd594: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1dd594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dd598: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x1dd598u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
    // 0x1dd59c: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD59Cu;
    {
        const bool branch_taken_0x1dd59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1DD5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD59Cu;
        // 0x1dd5a0: 0x101903  sra         $v1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd59c) {
            ctx->pc = 0x1DD5B0u;
            goto label_1dd5b0;
        }
    }
    ctx->pc = 0x1DD5A4u;
    // 0x1dd5a4: 0x2231018  mult        $v0, $s1, $v1
    ctx->pc = 0x1dd5a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1dd5a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD5A8u;
    {
        const bool branch_taken_0x1dd5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5A8u;
        // 0x1dd5ac: 0x21280  sll         $v0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5a8) {
            ctx->pc = 0x1DD5C0u;
            goto label_1dd5c0;
        }
    }
    ctx->pc = 0x1DD5B0u;
label_1dd5b0:
    // 0x1dd5b0: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1dd5b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1dd5b4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dd5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dd5b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd5bc: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1dd5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1dd5c0:
    // 0x1dd5c0: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x1dd5c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1dd5c4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1dd5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1dd5c8: 0x8c43ec08  lw          $v1, -0x13F8($v0)
    ctx->pc = 0x1dd5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962184)));
    // 0x1dd5cc: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DD5CCu;
    {
        const bool branch_taken_0x1dd5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5CCu;
        // 0x1dd5d0: 0x26620002  addiu       $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5cc) {
            ctx->pc = 0x1DD638u;
            goto label_1dd638;
        }
    }
    ctx->pc = 0x1DD5D4u;
    // 0x1dd5d4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1dd5d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1dd5d8: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1DD5D8u;
    {
        const bool branch_taken_0x1dd5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd5d8) {
            ctx->pc = 0x1DD5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD5D8u;
            // 0x1dd5dc: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD670u;
            goto label_1dd670;
        }
    }
    ctx->pc = 0x1DD5E0u;
    // 0x1dd5e0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1dd5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1dd5e4: 0x8c62ec0c  lw          $v0, -0x13F4($v1)
    ctx->pc = 0x1dd5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962188)));
    // 0x1dd5e8: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1dd5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1dd5ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DD5ECu;
    {
        const bool branch_taken_0x1dd5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5ECu;
        // 0x1dd5f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5ec) {
            ctx->pc = 0x1DD620u;
            goto label_1dd620;
        }
    }
    ctx->pc = 0x1DD5F4u;
    // 0x1dd5f4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1DD5F4u;
    {
        const bool branch_taken_0x1dd5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5F4u;
        // 0x1dd5f8: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5f4) {
            ctx->pc = 0x1DD670u;
            goto label_1dd670;
        }
    }
    ctx->pc = 0x1DD5FCu;
    // 0x1dd5fc: 0x0  nop
    ctx->pc = 0x1dd5fcu;
    // NOP
label_1dd600:
    // 0x1dd600: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dd600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dd604: 0x3c0401c0  lui         $a0, 0x1C0
    ctx->pc = 0x1dd604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)448 << 16));
    // 0x1dd608: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1dd608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dd60c: 0x8c84b950  lw          $a0, -0x46B0($a0)
    ctx->pc = 0x1dd60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949200)));
    // 0x1dd610: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1dd610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1dd614: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1dd614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd618: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dd618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1dd61c: 0x64a00a  movz        $s4, $v1, $a0
    ctx->pc = 0x1dd61cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_1dd620:
    // 0x1dd620: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1dd620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1dd624: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DD624u;
    {
        const bool branch_taken_0x1dd624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd624) {
            ctx->pc = 0x1DD628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD624u;
            // 0x1dd628: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dd600;
        }
    }
    ctx->pc = 0x1DD62Cu;
    // 0x1dd62c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DD62Cu;
    {
        const bool branch_taken_0x1dd62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD62Cu;
        // 0x1dd630: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd62c) {
            ctx->pc = 0x1DD674u;
            goto label_1dd674;
        }
    }
    ctx->pc = 0x1DD634u;
    // 0x1dd634: 0x0  nop
    ctx->pc = 0x1dd634u;
    // NOP
label_1dd638:
    // 0x1dd638: 0x1a60000e  blez        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x1DD638u;
    {
        const bool branch_taken_0x1dd638 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1DD63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD638u;
        // 0x1dd63c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd638) {
            ctx->pc = 0x1DD674u;
            goto label_1dd674;
        }
    }
    ctx->pc = 0x1DD640u;
    // 0x1dd640: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1dd640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd644: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1dd644u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd648: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1dd648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd64c: 0x0  nop
    ctx->pc = 0x1dd64cu;
    // NOP
label_1dd650:
    // 0x1dd650: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1dd650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd654: 0xc077b34  jal         func_1DECD0
    ctx->pc = 0x1DD654u;
    SET_GPR_U32(ctx, 31, 0x1DD65Cu);
    ctx->pc = 0x1DD658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD654u;
    // 0x1dd658: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DECD0u, 0x1DD654u, 0x1DD65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD65Cu;
label_1dd65c:
    // 0x1dd65c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1dd65cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1dd660: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1dd660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1dd664: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1dd664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1dd668: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DD668u;
    {
        const bool branch_taken_0x1dd668 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD668u;
        // 0x1dd66c: 0x262a00a  movz        $s4, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd668) {
            ctx->pc = 0x1DD650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dd650;
        }
    }
    ctx->pc = 0x1DD670u;
label_1dd670:
    // 0x1dd670: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1dd670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dd674:
    // 0x1dd674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd678: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd67c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd67cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd680: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dd680u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd684: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dd684u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd688: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1dd688u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dd68c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1dd68cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd690: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1dd690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dd694: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD694u;
        // 0x1dd698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD69Cu;
    // 0x1dd69c: 0x0  nop
    ctx->pc = 0x1dd69cu;
    // NOP
    if (ctx->pc == 0x1dd69cu) { ctx->pc = 0x1dd6a0u; }
}
