#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B48C8
// Address: 0x1b48c8 - 0x1b4a30
void sub_001B48C8_0x1b48c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B48C8_0x1b48c8");
#endif

    switch (ctx->pc) {
        case 0x1b48c8u: goto label_1b48c8;
        case 0x1b48ccu: goto label_1b48cc;
        case 0x1b48d0u: goto label_1b48d0;
        case 0x1b48d4u: goto label_1b48d4;
        case 0x1b48d8u: goto label_1b48d8;
        case 0x1b48dcu: goto label_1b48dc;
        case 0x1b48e0u: goto label_1b48e0;
        case 0x1b48e4u: goto label_1b48e4;
        case 0x1b48e8u: goto label_1b48e8;
        case 0x1b48ecu: goto label_1b48ec;
        case 0x1b48f0u: goto label_1b48f0;
        case 0x1b48f4u: goto label_1b48f4;
        case 0x1b48f8u: goto label_1b48f8;
        case 0x1b48fcu: goto label_1b48fc;
        case 0x1b4900u: goto label_1b4900;
        case 0x1b4904u: goto label_1b4904;
        case 0x1b4908u: goto label_1b4908;
        case 0x1b490cu: goto label_1b490c;
        case 0x1b4910u: goto label_1b4910;
        case 0x1b4914u: goto label_1b4914;
        case 0x1b4918u: goto label_1b4918;
        case 0x1b491cu: goto label_1b491c;
        case 0x1b4920u: goto label_1b4920;
        case 0x1b4924u: goto label_1b4924;
        case 0x1b4928u: goto label_1b4928;
        case 0x1b492cu: goto label_1b492c;
        case 0x1b4930u: goto label_1b4930;
        case 0x1b4934u: goto label_1b4934;
        case 0x1b4938u: goto label_1b4938;
        case 0x1b493cu: goto label_1b493c;
        case 0x1b4940u: goto label_1b4940;
        case 0x1b4944u: goto label_1b4944;
        case 0x1b4948u: goto label_1b4948;
        case 0x1b494cu: goto label_1b494c;
        case 0x1b4950u: goto label_1b4950;
        case 0x1b4954u: goto label_1b4954;
        case 0x1b4958u: goto label_1b4958;
        case 0x1b495cu: goto label_1b495c;
        case 0x1b4960u: goto label_1b4960;
        case 0x1b4964u: goto label_1b4964;
        case 0x1b4968u: goto label_1b4968;
        case 0x1b496cu: goto label_1b496c;
        case 0x1b4970u: goto label_1b4970;
        case 0x1b4974u: goto label_1b4974;
        case 0x1b4978u: goto label_1b4978;
        case 0x1b497cu: goto label_1b497c;
        case 0x1b4980u: goto label_1b4980;
        case 0x1b4984u: goto label_1b4984;
        case 0x1b4988u: goto label_1b4988;
        case 0x1b498cu: goto label_1b498c;
        case 0x1b4990u: goto label_1b4990;
        case 0x1b4994u: goto label_1b4994;
        case 0x1b4998u: goto label_1b4998;
        case 0x1b499cu: goto label_1b499c;
        case 0x1b49a0u: goto label_1b49a0;
        case 0x1b49a4u: goto label_1b49a4;
        case 0x1b49a8u: goto label_1b49a8;
        case 0x1b49acu: goto label_1b49ac;
        case 0x1b49b0u: goto label_1b49b0;
        case 0x1b49b4u: goto label_1b49b4;
        case 0x1b49b8u: goto label_1b49b8;
        case 0x1b49bcu: goto label_1b49bc;
        case 0x1b49c0u: goto label_1b49c0;
        case 0x1b49c4u: goto label_1b49c4;
        case 0x1b49c8u: goto label_1b49c8;
        case 0x1b49ccu: goto label_1b49cc;
        case 0x1b49d0u: goto label_1b49d0;
        case 0x1b49d4u: goto label_1b49d4;
        case 0x1b49d8u: goto label_1b49d8;
        case 0x1b49dcu: goto label_1b49dc;
        case 0x1b49e0u: goto label_1b49e0;
        case 0x1b49e4u: goto label_1b49e4;
        case 0x1b49e8u: goto label_1b49e8;
        case 0x1b49ecu: goto label_1b49ec;
        case 0x1b49f0u: goto label_1b49f0;
        case 0x1b49f4u: goto label_1b49f4;
        case 0x1b49f8u: goto label_1b49f8;
        case 0x1b49fcu: goto label_1b49fc;
        case 0x1b4a00u: goto label_1b4a00;
        case 0x1b4a04u: goto label_1b4a04;
        case 0x1b4a08u: goto label_1b4a08;
        case 0x1b4a0cu: goto label_1b4a0c;
        case 0x1b4a10u: goto label_1b4a10;
        case 0x1b4a14u: goto label_1b4a14;
        case 0x1b4a18u: goto label_1b4a18;
        case 0x1b4a1cu: goto label_1b4a1c;
        case 0x1b4a20u: goto label_1b4a20;
        case 0x1b4a24u: goto label_1b4a24;
        case 0x1b4a28u: goto label_1b4a28;
        case 0x1b4a2cu: goto label_1b4a2c;
        default: break;
    }

    ctx->pc = 0x1b48c8u;

label_1b48c8:
    // 0x1b48c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b48c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b48cc:
    // 0x1b48cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b48ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b48d0:
    // 0x1b48d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b48d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b48d4:
    // 0x1b48d4: 0x8072184  j           func_1C8610
label_1b48d8:
    if (ctx->pc == 0x1B48D8u) {
        ctx->pc = 0x1B48D8u;
            // 0x1b48d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B48DCu;
        goto label_1b48dc;
    }
    ctx->pc = 0x1B48D4u;
    ctx->pc = 0x1B48D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B48D4u;
            // 0x1b48d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8610u;
    {
        auto targetFn = runtime->lookupFunction(0x1C8610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B48DCu;
label_1b48dc:
    // 0x1b48dc: 0x0  nop
    ctx->pc = 0x1b48dcu;
    // NOP
label_1b48e0:
    // 0x1b48e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b48e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b48e4:
    // 0x1b48e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b48e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b48e8:
    // 0x1b48e8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1b48e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b48ec:
    // 0x1b48ec: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1b48ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b48f0:
    // 0x1b48f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b48f4:
    // 0x1b48f4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b48f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1b48f8:
    // 0x1b48f8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b48f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b48fc:
    // 0x1b48fc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1b48fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b4900:
    // 0x1b4900: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x1b4900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1b4904:
    // 0x1b4904: 0x40f809  jalr        $v0
label_1b4908:
    if (ctx->pc == 0x1B4908u) {
        ctx->pc = 0x1B4908u;
            // 0x1b4908: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B490Cu;
        goto label_1b490c;
    }
    ctx->pc = 0x1B4904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B490Cu);
        ctx->pc = 0x1B4908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4904u;
            // 0x1b4908: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B490Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B490Cu; }
            if (ctx->pc != 0x1B490Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B490Cu;
label_1b490c:
    // 0x1b490c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b490cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4910:
    // 0x1b4910: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1b4910u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1b4914:
    // 0x1b4914: 0x3e00008  jr          $ra
label_1b4918:
    if (ctx->pc == 0x1B4918u) {
        ctx->pc = 0x1B4918u;
            // 0x1b4918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B491Cu;
        goto label_1b491c;
    }
    ctx->pc = 0x1B4914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4914u;
            // 0x1b4918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B491Cu;
label_1b491c:
    // 0x1b491c: 0x0  nop
    ctx->pc = 0x1b491cu;
    // NOP
label_1b4920:
    // 0x1b4920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b4924:
    // 0x1b4924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b4928:
    // 0x1b4928: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1b4928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b492c:
    // 0x1b492c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1b492cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b4930:
    // 0x1b4930: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b4930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b4934:
    // 0x1b4934: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b4934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1b4938:
    // 0x1b4938: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b4938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b493c:
    // 0x1b493c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1b493cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b4940:
    // 0x1b4940: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x1b4940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1b4944:
    // 0x1b4944: 0x40f809  jalr        $v0
label_1b4948:
    if (ctx->pc == 0x1B4948u) {
        ctx->pc = 0x1B4948u;
            // 0x1b4948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B494Cu;
        goto label_1b494c;
    }
    ctx->pc = 0x1B4944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B494Cu);
        ctx->pc = 0x1B4948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4944u;
            // 0x1b4948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B494Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B494Cu; }
            if (ctx->pc != 0x1B494Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B494Cu;
label_1b494c:
    // 0x1b494c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b494cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4950:
    // 0x1b4950: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1b4950u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1b4954:
    // 0x1b4954: 0x3e00008  jr          $ra
label_1b4958:
    if (ctx->pc == 0x1B4958u) {
        ctx->pc = 0x1B4958u;
            // 0x1b4958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B495Cu;
        goto label_1b495c;
    }
    ctx->pc = 0x1B4954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4954u;
            // 0x1b4958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B495Cu;
label_1b495c:
    // 0x1b495c: 0x0  nop
    ctx->pc = 0x1b495cu;
    // NOP
label_1b4960:
    // 0x1b4960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b4964:
    // 0x1b4964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b4968:
    // 0x1b4968: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1b4968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b496c:
    // 0x1b496c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1b496cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b4970:
    // 0x1b4970: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b4970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4974:
    // 0x1b4974: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b4974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b4978:
    // 0x1b4978: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b4978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1b497c:
    // 0x1b497c: 0xc0734fa  jal         func_1CD3E8
label_1b4980:
    if (ctx->pc == 0x1B4980u) {
        ctx->pc = 0x1B4980u;
            // 0x1b4980: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x1B4984u;
        goto label_1b4984;
    }
    ctx->pc = 0x1B497Cu;
    SET_GPR_U32(ctx, 31, 0x1B4984u);
    ctx->pc = 0x1B4980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B497Cu;
            // 0x1b4980: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD3E8u;
    if (runtime->hasFunction(0x1CD3E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CD3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4984u; }
        if (ctx->pc != 0x1B4984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD3E8_0x1cd3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4984u; }
        if (ctx->pc != 0x1B4984u) { return; }
    }
    ctx->pc = 0x1B4984u;
label_1b4984:
    // 0x1b4984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4988:
    // 0x1b4988: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1b4988u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1b498c:
    // 0x1b498c: 0x3e00008  jr          $ra
label_1b4990:
    if (ctx->pc == 0x1B4990u) {
        ctx->pc = 0x1B4990u;
            // 0x1b4990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B4994u;
        goto label_1b4994;
    }
    ctx->pc = 0x1B498Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B498Cu;
            // 0x1b4990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4994u;
label_1b4994:
    // 0x1b4994: 0x0  nop
    ctx->pc = 0x1b4994u;
    // NOP
label_1b4998:
    // 0x1b4998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b499c:
    // 0x1b499c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b499cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b49a0:
    // 0x1b49a0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1b49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b49a4:
    // 0x1b49a4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1b49a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b49a8:
    // 0x1b49a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b49a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b49ac:
    // 0x1b49ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b49acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b49b0:
    // 0x1b49b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b49b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1b49b4:
    // 0x1b49b4: 0xc0734fa  jal         func_1CD3E8
label_1b49b8:
    if (ctx->pc == 0x1B49B8u) {
        ctx->pc = 0x1B49B8u;
            // 0x1b49b8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x1B49BCu;
        goto label_1b49bc;
    }
    ctx->pc = 0x1B49B4u;
    SET_GPR_U32(ctx, 31, 0x1B49BCu);
    ctx->pc = 0x1B49B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49B4u;
            // 0x1b49b8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD3E8u;
    if (runtime->hasFunction(0x1CD3E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CD3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49BCu; }
        if (ctx->pc != 0x1B49BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD3E8_0x1cd3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49BCu; }
        if (ctx->pc != 0x1B49BCu) { return; }
    }
    ctx->pc = 0x1B49BCu;
label_1b49bc:
    // 0x1b49bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b49bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b49c0:
    // 0x1b49c0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1b49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1b49c4:
    // 0x1b49c4: 0x3e00008  jr          $ra
label_1b49c8:
    if (ctx->pc == 0x1B49C8u) {
        ctx->pc = 0x1B49C8u;
            // 0x1b49c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B49CCu;
        goto label_1b49cc;
    }
    ctx->pc = 0x1B49C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B49C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49C4u;
            // 0x1b49c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B49CCu;
label_1b49cc:
    // 0x1b49cc: 0x0  nop
    ctx->pc = 0x1b49ccu;
    // NOP
label_1b49d0:
    // 0x1b49d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b49d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b49d4:
    // 0x1b49d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b49d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b49d8:
    // 0x1b49d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b49d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b49dc:
    // 0x1b49dc: 0x8072460  j           func_1C9180
label_1b49e0:
    if (ctx->pc == 0x1B49E0u) {
        ctx->pc = 0x1B49E0u;
            // 0x1b49e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B49E4u;
        goto label_1b49e4;
    }
    ctx->pc = 0x1B49DCu;
    ctx->pc = 0x1B49E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49DCu;
            // 0x1b49e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9180u;
    {
        auto targetFn = runtime->lookupFunction(0x1C9180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B49E4u;
label_1b49e4:
    // 0x1b49e4: 0x0  nop
    ctx->pc = 0x1b49e4u;
    // NOP
label_1b49e8:
    // 0x1b49e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b49e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b49ec:
    // 0x1b49ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b49ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b49f0:
    // 0x1b49f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b49f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b49f4:
    // 0x1b49f4: 0x80724f8  j           func_1C93E0
label_1b49f8:
    if (ctx->pc == 0x1B49F8u) {
        ctx->pc = 0x1B49F8u;
            // 0x1b49f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B49FCu;
        goto label_1b49fc;
    }
    ctx->pc = 0x1B49F4u;
    ctx->pc = 0x1B49F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49F4u;
            // 0x1b49f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C93E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1C93E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B49FCu;
label_1b49fc:
    // 0x1b49fc: 0x0  nop
    ctx->pc = 0x1b49fcu;
    // NOP
label_1b4a00:
    // 0x1b4a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b4a04:
    // 0x1b4a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b4a08:
    // 0x1b4a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4a0c:
    // 0x1b4a0c: 0x807251a  j           func_1C9468
label_1b4a10:
    if (ctx->pc == 0x1B4A10u) {
        ctx->pc = 0x1B4A10u;
            // 0x1b4a10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B4A14u;
        goto label_1b4a14;
    }
    ctx->pc = 0x1B4A0Cu;
    ctx->pc = 0x1B4A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A0Cu;
            // 0x1b4a10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9468u;
    {
        auto targetFn = runtime->lookupFunction(0x1C9468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B4A14u;
label_1b4a14:
    // 0x1b4a14: 0x0  nop
    ctx->pc = 0x1b4a14u;
    // NOP
label_1b4a18:
    // 0x1b4a18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b4a1c:
    // 0x1b4a1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b4a20:
    // 0x1b4a20: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1b4a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b4a24:
    // 0x1b4a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4a28:
    // 0x1b4a28: 0x80724c2  j           func_1C9308
label_1b4a2c:
    if (ctx->pc == 0x1B4A2Cu) {
        ctx->pc = 0x1B4A2Cu;
            // 0x1b4a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B4A30u;
        goto label_fallthrough_0x1b4a28;
    }
    ctx->pc = 0x1B4A28u;
    ctx->pc = 0x1B4A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A28u;
            // 0x1b4a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9308u;
    {
        auto targetFn = runtime->lookupFunction(0x1C9308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
label_fallthrough_0x1b4a28:
    ctx->pc = 0x1B4A30u;
    ctx->pc = 0x1b4a30u;
}
