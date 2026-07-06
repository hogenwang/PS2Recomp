#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178470
// Address: 0x178470 - 0x178560
void sub_00178470_0x178470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178470_0x178470");
#endif

    switch (ctx->pc) {
        case 0x178490u: goto label_178490;
        case 0x1784b4u: goto label_1784b4;
        case 0x17850cu: goto label_17850c;
        default: break;
    }

    ctx->pc = 0x178470u;

    // 0x178470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17847c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17847cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178484: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x178484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178488: 0xc05da94  jal         func_176A50
    ctx->pc = 0x178488u;
    SET_GPR_U32(ctx, 31, 0x178490u);
    ctx->pc = 0x17848Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178488u;
            // 0x17848c: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x176A50u;
    if (runtime->hasFunction(0x176A50u)) {
        auto targetFn = runtime->lookupFunction(0x176A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178490u; }
        if (ctx->pc != 0x178490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176A50_0x176a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178490u; }
        if (ctx->pc != 0x178490u) { return; }
    }
    ctx->pc = 0x178490u;
label_178490:
    // 0x178490: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x178490u;
    {
        const bool branch_taken_0x178490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178490) {
            ctx->pc = 0x178494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178490u;
            // 0x178494: 0x111e3c  dsll32      $v1, $s1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1784FCu;
            goto label_1784fc;
        }
    }
    ctx->pc = 0x178498u;
    // 0x178498: 0x11263c  dsll32      $a0, $s1, 24
    ctx->pc = 0x178498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 24));
    // 0x17849c: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x17849cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x1784a0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1784a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1784a4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1784a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1784a8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1784a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1784ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1784acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784b0: 0x24a5d770  addiu       $a1, $a1, -0x2890
    ctx->pc = 0x1784b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956912));
label_1784b4:
    // 0x1784b4: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x1784b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1784b8: 0x5482000b  bnel        $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1784B8u;
    {
        const bool branch_taken_0x1784b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1784b8) {
            ctx->pc = 0x1784BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1784B8u;
            // 0x1784bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1784E8u;
            goto label_1784e8;
        }
    }
    ctx->pc = 0x1784C0u;
    // 0x1784c0: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x1784c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x1784c4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1784C4u;
    {
        const bool branch_taken_0x1784c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1784c4) {
            ctx->pc = 0x1784E4u;
            goto label_1784e4;
        }
    }
    ctx->pc = 0x1784CCu;
    // 0x1784cc: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x1784ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x1784d0: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1784d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1784d4: 0x2442d770  addiu       $v0, $v0, -0x2890
    ctx->pc = 0x1784d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956912));
    // 0x1784d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1784d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1784dc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1784DCu;
    {
        const bool branch_taken_0x1784dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1784E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1784DCu;
            // 0x1784e0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784dc) {
            ctx->pc = 0x178544u;
            goto label_178544;
        }
    }
    ctx->pc = 0x1784E4u;
label_1784e4:
    // 0x1784e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1784e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1784e8:
    // 0x1784e8: 0x2cc2000f  sltiu       $v0, $a2, 0xF
    ctx->pc = 0x1784e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1784ec: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1784ECu;
    {
        const bool branch_taken_0x1784ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1784F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1784ECu;
            // 0x1784f0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784ec) {
            ctx->pc = 0x1784B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1784b4;
        }
    }
    ctx->pc = 0x1784F4u;
    // 0x1784f4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1784F4u;
    {
        const bool branch_taken_0x1784f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1784f4) {
            ctx->pc = 0x178540u;
            goto label_178540;
        }
    }
    ctx->pc = 0x1784FCu;
label_1784fc:
    // 0x1784fc: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1784fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x178500: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x178500u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x178504: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x178504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178508: 0x24a5d770  addiu       $a1, $a1, -0x2890
    ctx->pc = 0x178508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956912));
label_17850c:
    // 0x17850c: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x17850cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x178510: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x178510u;
    {
        const bool branch_taken_0x178510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x178510) {
            ctx->pc = 0x178514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178510u;
            // 0x178514: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178530u;
            goto label_178530;
        }
    }
    ctx->pc = 0x178518u;
    // 0x178518: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x178518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x17851c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x17851cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x178520: 0x2442d770  addiu       $v0, $v0, -0x2890
    ctx->pc = 0x178520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956912));
    // 0x178524: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178528: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x178528u;
    {
        const bool branch_taken_0x178528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17852Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178528u;
            // 0x17852c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178528) {
            ctx->pc = 0x178544u;
            goto label_178544;
        }
    }
    ctx->pc = 0x178530u;
label_178530:
    // 0x178530: 0x2c82000f  sltiu       $v0, $a0, 0xF
    ctx->pc = 0x178530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x178534: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x178534u;
    {
        const bool branch_taken_0x178534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178534u;
            // 0x178538: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178534) {
            ctx->pc = 0x17850Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17850c;
        }
    }
    ctx->pc = 0x17853Cu;
    // 0x17853c: 0x0  nop
    ctx->pc = 0x17853cu;
    // NOP
label_178540:
    // 0x178540: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x178540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178544:
    // 0x178544: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17854c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17854cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178550: 0x3e00008  jr          $ra
    ctx->pc = 0x178550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178550u;
            // 0x178554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178558u;
    // 0x178558: 0x0  nop
    ctx->pc = 0x178558u;
    // NOP
    // 0x17855c: 0x0  nop
    ctx->pc = 0x17855cu;
    // NOP
    ctx->pc = 0x178560u;
}
