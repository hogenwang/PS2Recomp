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

// Function: sub_0027F508
// Address: 0x27f508 - 0x27f700
void sub_0027F508_0x27f508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F508_0x27f508");
#endif

    switch (ctx->pc) {
        case 0x27f558u: goto label_27f558;
        case 0x27f5d8u: goto label_27f5d8;
        case 0x27f5fcu: goto label_27f5fc;
        case 0x27f620u: goto label_27f620;
        case 0x27f63cu: goto label_27f63c;
        case 0x27f674u: goto label_27f674;
        case 0x27f6b4u: goto label_27f6b4;
        case 0x27f6d8u: goto label_27f6d8;
        default: break;
    }

    ctx->pc = 0x27f508u;

    // 0x27f508: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27f508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27f50c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x27f50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x27f510: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x27f510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x27f514: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x27f514u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f518: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x27f518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x27f51c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27f51cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f520: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x27f520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x27f524: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x27f524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x27f528: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x27f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27f52c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27f52cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f530: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27f530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x27f534: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x27f534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f538: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f53c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x27f53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f540: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x27f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27f544: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x27f544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x27f548: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x27f548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f54c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27f54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f550: 0xc0a0554  jal         func_281550
    ctx->pc = 0x27F550u;
    SET_GPR_U32(ctx, 31, 0x27F558u);
    ctx->pc = 0x27F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F550u;
    // 0x27f554: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281550u, 0x27F550u, 0x27F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F558u;
label_27f558:
    // 0x27f558: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x27f558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x27f55c: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x27F55Cu;
    {
        const bool branch_taken_0x27f55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F55Cu;
        // 0x27f560: 0x24060065  addiu       $a2, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f55c) {
            ctx->pc = 0x27F6A0u;
            goto label_27f6a0;
        }
    }
    ctx->pc = 0x27F564u;
    // 0x27f564: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27f564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f568: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x27f568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27f56c: 0xdfa60008  ld          $a2, 0x8($sp)
    ctx->pc = 0x27f56cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27f570: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27f570u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f574: 0x202102f  dsubu       $v0, $s0, $v0
    ctx->pc = 0x27f574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
    // 0x27f578: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x27f578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x27f57c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F57Cu;
    {
        const bool branch_taken_0x27f57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F57Cu;
        // 0x27f580: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f57c) {
            ctx->pc = 0x27F58Cu;
            goto label_27f58c;
        }
    }
    ctx->pc = 0x27F584u;
    // 0x27f584: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x27F584u;
    {
        const bool branch_taken_0x27f584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F584u;
        // 0x27f588: 0x24060065  addiu       $a2, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f584) {
            ctx->pc = 0x27F6A0u;
            goto label_27f6a0;
        }
    }
    ctx->pc = 0x27F58Cu;
label_27f58c:
    // 0x27f58c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x27f58cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x27f590: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F590u;
    {
        const bool branch_taken_0x27f590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F590u;
        // 0x27f594: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f590) {
            ctx->pc = 0x27F5A0u;
            goto label_27f5a0;
        }
    }
    ctx->pc = 0x27F598u;
    // 0x27f598: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x27F598u;
    {
        const bool branch_taken_0x27f598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F598u;
        // 0x27f59c: 0x24060087  addiu       $a2, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f598) {
            ctx->pc = 0x27F6A0u;
            goto label_27f6a0;
        }
    }
    ctx->pc = 0x27F5A0u;
label_27f5a0:
    // 0x27f5a0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x27f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x27f5a4: 0x24423578  addiu       $v0, $v0, 0x3578
    ctx->pc = 0x27f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13688));
    // 0x27f5a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27f5ac: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x27f5acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27f5b0: 0x2831824  and         $v1, $s4, $v1
    ctx->pc = 0x27f5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x27f5b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F5B4u;
    {
        const bool branch_taken_0x27f5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5B4u;
        // 0x27f5b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5b4) {
            ctx->pc = 0x27F5C4u;
            goto label_27f5c4;
        }
    }
    ctx->pc = 0x27F5BCu;
    // 0x27f5bc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x27F5BCu;
    {
        const bool branch_taken_0x27f5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5BCu;
        // 0x27f5c0: 0x24060096  addiu       $a2, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5bc) {
            ctx->pc = 0x27F6A0u;
            goto label_27f6a0;
        }
    }
    ctx->pc = 0x27F5C4u;
label_27f5c4:
    // 0x27f5c4: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F5C4u;
    {
        const bool branch_taken_0x27f5c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x27F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5C4u;
        // 0x27f5c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5c4) {
            ctx->pc = 0x27F5E0u;
            goto label_27f5e0;
        }
    }
    ctx->pc = 0x27F5CCu;
    // 0x27f5cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27f5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5d0: 0xc09fc76  jal         func_27F1D8
    ctx->pc = 0x27F5D0u;
    SET_GPR_U32(ctx, 31, 0x27F5D8u);
    ctx->pc = 0x27F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F5D0u;
    // 0x27f5d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F1D8u, 0x27F5D0u, 0x27F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5D8u;
label_27f5d8:
    // 0x27f5d8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x27F5D8u;
    {
        const bool branch_taken_0x27f5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5D8u;
        // 0x27f5dc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5d8) {
            ctx->pc = 0x27F6E0u;
            goto label_27f6e0;
        }
    }
    ctx->pc = 0x27F5E0u;
label_27f5e0:
    // 0x27f5e0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F5E0u;
    {
        const bool branch_taken_0x27f5e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f5e0) {
            ctx->pc = 0x27F5F4u;
            goto label_27f5f4;
        }
    }
    ctx->pc = 0x27F5E8u;
    // 0x27f5e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27f5ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F5ECu;
    {
        const bool branch_taken_0x27f5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5ECu;
        // 0x27f5f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5ec) {
            ctx->pc = 0x27F610u;
            goto label_27f610;
        }
    }
    ctx->pc = 0x27F5F4u;
label_27f5f4:
    // 0x27f5f4: 0xc0a06ea  jal         func_281BA8
    ctx->pc = 0x27F5F4u;
    SET_GPR_U32(ctx, 31, 0x27F5FCu);
    ctx->pc = 0x281BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281BA8u, 0x27F5F4u, 0x27F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5FCu;
label_27f5fc:
    // 0x27f5fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27f5fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f600: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F600u;
    {
        const bool branch_taken_0x27f600 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F600u;
        // 0x27f604: 0xdfa60008  ld          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f600) {
            ctx->pc = 0x27F610u;
            goto label_27f610;
        }
    }
    ctx->pc = 0x27F608u;
    // 0x27f608: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x27F608u;
    {
        const bool branch_taken_0x27f608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F608u;
        // 0x27f60c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f608) {
            ctx->pc = 0x27F6DCu;
            goto label_27f6dc;
        }
    }
    ctx->pc = 0x27F610u;
label_27f610:
    // 0x27f610: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x27F610u;
    {
        const bool branch_taken_0x27f610 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F610u;
        // 0x27f614: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f610) {
            ctx->pc = 0x27F65Cu;
            goto label_27f65c;
        }
    }
    ctx->pc = 0x27F618u;
    // 0x27f618: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x27F618u;
    SET_GPR_U32(ctx, 31, 0x27F620u);
    ctx->pc = 0x27F61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F618u;
    // 0x27f61c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x27F618u, 0x27F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F620u;
label_27f620:
    // 0x27f620: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27f620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f624: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x27F624u;
    {
        const bool branch_taken_0x27f624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F624u;
        // 0x27f628: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f624) {
            ctx->pc = 0x27F6A0u;
            goto label_27f6a0;
        }
    }
    ctx->pc = 0x27F62Cu;
    // 0x27f62c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x27f62cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27f630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f634: 0xc049c48  jal         func_127120
    ctx->pc = 0x27F634u;
    SET_GPR_U32(ctx, 31, 0x27F63Cu);
    ctx->pc = 0x27F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F634u;
    // 0x27f638: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x27F634u, 0x27F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F63Cu;
label_27f63c:
    // 0x27f63c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x27f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27f640: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x27f640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x27f644: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x27f644u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f648: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27f648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f64c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x27f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27f650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f654: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27F654u;
    {
        const bool branch_taken_0x27f654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F654u;
        // 0x27f658: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f654) {
            ctx->pc = 0x27F660u;
            goto label_27f660;
        }
    }
    ctx->pc = 0x27F65Cu;
label_27f65c:
    // 0x27f65c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27f65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f660:
    // 0x27f660: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x27f660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x27f664: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F664u;
    {
        const bool branch_taken_0x27f664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F664u;
        // 0x27f668: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f664) {
            ctx->pc = 0x27F678u;
            goto label_27f678;
        }
    }
    ctx->pc = 0x27F66Cu;
    // 0x27f66c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x27F66Cu;
    SET_GPR_U32(ctx, 31, 0x27F674u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x27F66Cu, 0x27F674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F674u;
label_27f674:
    // 0x27f674: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x27f674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_27f678:
    // 0x27f678: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x27f678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x27f67c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x27f67cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x27f680: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27f680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f684: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27F684u;
    {
        const bool branch_taken_0x27f684 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F684u;
        // 0x27f688: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f684) {
            ctx->pc = 0x27F690u;
            goto label_27f690;
        }
    }
    ctx->pc = 0x27F68Cu;
    // 0x27f68c: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x27f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_27f690:
    // 0x27f690: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27f690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f694: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x27f694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f698: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27F698u;
    {
        const bool branch_taken_0x27f698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F698u;
        // 0x27f69c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f698) {
            ctx->pc = 0x27F6DCu;
            goto label_27f6dc;
        }
    }
    ctx->pc = 0x27F6A0u;
label_27f6a0:
    // 0x27f6a0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x27f6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27f6a4: 0x24050086  addiu       $a1, $zero, 0x86
    ctx->pc = 0x27f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x27f6a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27f6a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6ac: 0xc0a5648  jal         func_295920
    ctx->pc = 0x27F6ACu;
    SET_GPR_U32(ctx, 31, 0x27F6B4u);
    ctx->pc = 0x27F6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F6ACu;
    // 0x27f6b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x27F6ACu, 0x27F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6B4u;
label_27f6b4:
    // 0x27f6b4: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x27F6B4u;
    {
        const bool branch_taken_0x27f6b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6B4u;
        // 0x27f6b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6b4) {
            ctx->pc = 0x27F6DCu;
            goto label_27f6dc;
        }
    }
    ctx->pc = 0x27F6BCu;
    // 0x27f6bc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F6BCu;
    {
        const bool branch_taken_0x27f6bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f6bc) {
            ctx->pc = 0x27F6D0u;
            goto label_27f6d0;
        }
    }
    ctx->pc = 0x27F6C4u;
    // 0x27f6c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27f6c8: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F6C8u;
    {
        const bool branch_taken_0x27f6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x27F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6C8u;
        // 0x27f6cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6c8) {
            ctx->pc = 0x27F6DCu;
            goto label_27f6dc;
        }
    }
    ctx->pc = 0x27F6D0u;
label_27f6d0:
    // 0x27f6d0: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x27F6D0u;
    SET_GPR_U32(ctx, 31, 0x27F6D8u);
    ctx->pc = 0x27F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F6D0u;
    // 0x27f6d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x27F6D0u, 0x27F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6D8u;
label_27f6d8:
    // 0x27f6d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27f6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f6dc:
    // 0x27f6dc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27f6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_27f6e0:
    // 0x27f6e0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x27f6e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f6e4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x27f6e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f6e8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x27f6e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f6ec: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x27f6ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f6f0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x27f6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x27F6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6F4u;
        // 0x27f6f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F6FCu;
    // 0x27f6fc: 0x0  nop
    ctx->pc = 0x27f6fcu;
    // NOP
}
