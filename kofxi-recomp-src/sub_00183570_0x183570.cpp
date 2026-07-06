#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00183570
// Address: 0x183570 - 0x183600
void sub_00183570_0x183570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183570_0x183570");
#endif

    switch (ctx->pc) {
        case 0x1835acu: goto label_1835ac;
        case 0x1835c4u: goto label_1835c4;
        default: break;
    }

    ctx->pc = 0x183570u;

    // 0x183570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x183570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x183574: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x183574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x183578: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x183578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18357c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18357cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x183580: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x183580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x183584: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x183584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x183588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18358c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18358cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x183590: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x183590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x183594: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183598: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x183598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x18359c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18359cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1835a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1835a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1835a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835a8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1835a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1835ac:
    // 0x1835ac: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x1835acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1835b0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1835B0u;
    {
        const bool branch_taken_0x1835b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1835b0) {
            ctx->pc = 0x1835B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1835B0u;
            // 0x1835b4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1835D8u;
            goto label_1835d8;
        }
    }
    ctx->pc = 0x1835B8u;
    // 0x1835b8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1835b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1835bc: 0xc060cd0  jal         func_183340
    ctx->pc = 0x1835BCu;
    SET_GPR_U32(ctx, 31, 0x1835C4u);
    ctx->pc = 0x1835C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1835BCu;
            // 0x1835c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183340u;
    if (runtime->hasFunction(0x183340u)) {
        auto targetFn = runtime->lookupFunction(0x183340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835C4u; }
        if (ctx->pc != 0x1835C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183340_0x183340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835C4u; }
        if (ctx->pc != 0x1835C4u) { return; }
    }
    ctx->pc = 0x1835C4u;
label_1835c4:
    // 0x1835c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1835C4u;
    {
        const bool branch_taken_0x1835c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1835c4) {
            ctx->pc = 0x1835D4u;
            goto label_1835d4;
        }
    }
    ctx->pc = 0x1835CCu;
    // 0x1835cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1835CCu;
    {
        const bool branch_taken_0x1835cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1835D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1835CCu;
            // 0x1835d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1835cc) {
            ctx->pc = 0x1835E8u;
            goto label_1835e8;
        }
    }
    ctx->pc = 0x1835D4u;
label_1835d4:
    // 0x1835d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1835d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1835d8:
    // 0x1835d8: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1835d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1835dc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1835DCu;
    {
        const bool branch_taken_0x1835dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1835E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1835DCu;
            // 0x1835e0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1835dc) {
            ctx->pc = 0x1835ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1835ac;
        }
    }
    ctx->pc = 0x1835E4u;
    // 0x1835e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1835e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1835e8:
    // 0x1835e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1835e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1835ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1835ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1835f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1835f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1835f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1835f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1835f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1835F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1835FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1835F8u;
            // 0x1835fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183600u;
    ctx->pc = 0x183600u;
}
