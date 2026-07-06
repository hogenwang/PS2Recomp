#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B730
// Address: 0x14b730 - 0x14b8a0
void sub_0014B730_0x14b730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B730_0x14b730");
#endif

    switch (ctx->pc) {
        case 0x14b774u: goto label_14b774;
        case 0x14b7f8u: goto label_14b7f8;
        case 0x14b820u: goto label_14b820;
        case 0x14b850u: goto label_14b850;
        case 0x14b87cu: goto label_14b87c;
        default: break;
    }

    ctx->pc = 0x14b730u;

    // 0x14b730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14b730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14b734: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14b734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14b738: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14b738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14b73c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14b73cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b740: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14b740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14b744: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x14b744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x14b748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b74c: 0x3053003f  andi        $s3, $v0, 0x3F
    ctx->pc = 0x14b74cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x14b750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b754: 0x2a620030  slti        $v0, $s3, 0x30
    ctx->pc = 0x14b754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x14b758: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14b758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b75c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B75Cu;
    {
        const bool branch_taken_0x14b75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B75Cu;
            // 0x14b760: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b75c) {
            ctx->pc = 0x14B778u;
            goto label_14b778;
        }
    }
    ctx->pc = 0x14B764u;
    // 0x14b764: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b768: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14b768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b76c: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B76Cu;
    SET_GPR_U32(ctx, 31, 0x14B774u);
    ctx->pc = 0x14B770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B76Cu;
            // 0x14b770: 0x2484ce00  addiu       $a0, $a0, -0x3200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B774u; }
        if (ctx->pc != 0x14B774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B774u; }
        if (ctx->pc != 0x14B774u) { return; }
    }
    ctx->pc = 0x14B774u;
label_14b774:
    // 0x14b774: 0x64130030  daddiu      $s3, $zero, 0x30
    ctx->pc = 0x14b774u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)48);
label_14b778:
    // 0x14b778: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x14b778u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x14b77c: 0x52200003  beql        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B77Cu;
    {
        const bool branch_taken_0x14b77c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b77c) {
            ctx->pc = 0x14B780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B77Cu;
            // 0x14b780: 0x3270ffff  andi        $s0, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B78Cu;
            goto label_14b78c;
        }
    }
    ctx->pc = 0x14B784u;
    // 0x14b784: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x14B784u;
    {
        const bool branch_taken_0x14b784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B784u;
            // 0x14b788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b784) {
            ctx->pc = 0x14B880u;
            goto label_14b880;
        }
    }
    ctx->pc = 0x14B78Cu;
label_14b78c:
    // 0x14b78c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14b790: 0x2463e180  addiu       $v1, $v1, -0x1E80
    ctx->pc = 0x14b790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959488));
    // 0x14b794: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x14b794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14b798: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b79c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14b79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14b7a0: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x14b7a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b7a4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B7A4u;
    {
        const bool branch_taken_0x14b7a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14b7a4) {
            ctx->pc = 0x14B7B4u;
            goto label_14b7b4;
        }
    }
    ctx->pc = 0x14B7ACu;
    // 0x14b7ac: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x14B7ACu;
    {
        const bool branch_taken_0x14b7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B7ACu;
            // 0x14b7b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b7ac) {
            ctx->pc = 0x14B880u;
            goto label_14b880;
        }
    }
    ctx->pc = 0x14B7B4u;
label_14b7b4:
    // 0x14b7b4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14b7b8: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x14b7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x14b7bc: 0x8c425d08  lw          $v0, 0x5D08($v0)
    ctx->pc = 0x14b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23816)));
    // 0x14b7c0: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x14b7c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14b7c4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14b7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14b7c8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14B7C8u;
    {
        const bool branch_taken_0x14b7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B7C8u;
            // 0x14b7cc: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b7c8) {
            ctx->pc = 0x14B828u;
            goto label_14b828;
        }
    }
    ctx->pc = 0x14B7D0u;
    // 0x14b7d0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x14b7d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14b7d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x14b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x14b7d8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x14b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14b7dc: 0x2442b2c0  addiu       $v0, $v0, -0x4D40
    ctx->pc = 0x14b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x14b7e0: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x14b7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14b7e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14b7e8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14b7ec: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x14b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x14b7f0: 0xc052b2c  jal         func_14ACB0
    ctx->pc = 0x14B7F0u;
    SET_GPR_U32(ctx, 31, 0x14B7F8u);
    ctx->pc = 0x14B7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B7F0u;
            // 0x14b7f4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ACB0u;
    if (runtime->hasFunction(0x14ACB0u)) {
        auto targetFn = runtime->lookupFunction(0x14ACB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7F8u; }
        if (ctx->pc != 0x14B7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014ACB0_0x14acb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7F8u; }
        if (ctx->pc != 0x14B7F8u) { return; }
    }
    ctx->pc = 0x14B7F8u;
label_14b7f8:
    // 0x14b7f8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x14b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x14b7fc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b800: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14b800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14b804: 0x24422090  addiu       $v0, $v0, 0x2090
    ctx->pc = 0x14b804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8336));
    // 0x14b808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b80c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14b80cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b810: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x14b810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b814: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14b814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b818: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B818u;
    SET_GPR_U32(ctx, 31, 0x14B820u);
    ctx->pc = 0x14B81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B818u;
            // 0x14b81c: 0x2484ce20  addiu       $a0, $a0, -0x31E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B820u; }
        if (ctx->pc != 0x14B820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B820u; }
        if (ctx->pc != 0x14B820u) { return; }
    }
    ctx->pc = 0x14B820u;
label_14b820:
    // 0x14b820: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14B820u;
    {
        const bool branch_taken_0x14b820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B820u;
            // 0x14b824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b820) {
            ctx->pc = 0x14B880u;
            goto label_14b880;
        }
    }
    ctx->pc = 0x14B828u;
label_14b828:
    // 0x14b828: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x14b828u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14b82c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x14b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x14b830: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x14b830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x14b834: 0x2442b2c0  addiu       $v0, $v0, -0x4D40
    ctx->pc = 0x14b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x14b838: 0x702823  subu        $a1, $v1, $s0
    ctx->pc = 0x14b838u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x14b83c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14b840: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14b840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14b844: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x14b844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x14b848: 0xc052b48  jal         func_14AD20
    ctx->pc = 0x14B848u;
    SET_GPR_U32(ctx, 31, 0x14B850u);
    ctx->pc = 0x14B84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B848u;
            // 0x14b84c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AD20u;
    if (runtime->hasFunction(0x14AD20u)) {
        auto targetFn = runtime->lookupFunction(0x14AD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B850u; }
        if (ctx->pc != 0x14B850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AD20_0x14ad20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B850u; }
        if (ctx->pc != 0x14B850u) { return; }
    }
    ctx->pc = 0x14B850u;
label_14b850:
    // 0x14b850: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B850u;
    {
        const bool branch_taken_0x14b850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b850) {
            ctx->pc = 0x14B860u;
            goto label_14b860;
        }
    }
    ctx->pc = 0x14B858u;
    // 0x14b858: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14B858u;
    {
        const bool branch_taken_0x14b858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B858u;
            // 0x14b85c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b858) {
            ctx->pc = 0x14B880u;
            goto label_14b880;
        }
    }
    ctx->pc = 0x14B860u;
label_14b860:
    // 0x14b860: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14b860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14b864: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b868: 0x24425d40  addiu       $v0, $v0, 0x5D40
    ctx->pc = 0x14b868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23872));
    // 0x14b86c: 0x2484ce38  addiu       $a0, $a0, -0x31C8
    ctx->pc = 0x14b86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954552));
    // 0x14b870: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14b870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14b874: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B874u;
    SET_GPR_U32(ctx, 31, 0x14B87Cu);
    ctx->pc = 0x14B878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B874u;
            // 0x14b878: 0xa0530000  sb          $s3, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B87Cu; }
        if (ctx->pc != 0x14B87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B87Cu; }
        if (ctx->pc != 0x14B87Cu) { return; }
    }
    ctx->pc = 0x14B87Cu;
label_14b87c:
    // 0x14b87c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b880:
    // 0x14b880: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14b880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b884: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14b884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14b888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b88c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b894: 0x3e00008  jr          $ra
    ctx->pc = 0x14B894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B894u;
            // 0x14b898: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B89Cu;
    // 0x14b89c: 0x0  nop
    ctx->pc = 0x14b89cu;
    // NOP
    ctx->pc = 0x14b8a0u;
}
