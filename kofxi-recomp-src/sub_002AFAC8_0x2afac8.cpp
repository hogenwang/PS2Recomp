#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AFAC8
// Address: 0x2afac8 - 0x2afb78
void sub_002AFAC8_0x2afac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFAC8_0x2afac8");
#endif

    switch (ctx->pc) {
        case 0x2afb0cu: goto label_2afb0c;
        case 0x2afb28u: goto label_2afb28;
        case 0x2afb50u: goto label_2afb50;
        case 0x2afb60u: goto label_2afb60;
        default: break;
    }

    ctx->pc = 0x2afac8u;

    // 0x2afac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2afac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2afacc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2afaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2afad0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2afad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2afad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2afad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afad8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AFAD8u;
    {
        const bool branch_taken_0x2afad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFAD8u;
            // 0x2afadc: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afad8) {
            ctx->pc = 0x2AFAECu;
            goto label_2afaec;
        }
    }
    ctx->pc = 0x2AFAE0u;
    // 0x2afae0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2afae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2afae4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFAE4u;
    {
        const bool branch_taken_0x2afae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afae4) {
            ctx->pc = 0x2AFAE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFAE4u;
            // 0x2afae8: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AFAF4u;
            goto label_2afaf4;
        }
    }
    ctx->pc = 0x2AFAECu;
label_2afaec:
    // 0x2afaec: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2AFAECu;
    {
        const bool branch_taken_0x2afaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFAECu;
            // 0x2afaf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afaec) {
            ctx->pc = 0x2AFB64u;
            goto label_2afb64;
        }
    }
    ctx->pc = 0x2AFAF4u;
label_2afaf4:
    // 0x2afaf4: 0x8c460098  lw          $a2, 0x98($v0)
    ctx->pc = 0x2afaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2afaf8: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AFAF8u;
    {
        const bool branch_taken_0x2afaf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFAF8u;
            // 0x2afafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afaf8) {
            ctx->pc = 0x2AFB14u;
            goto label_2afb14;
        }
    }
    ctx->pc = 0x2AFB00u;
    // 0x2afb00: 0x8c47009c  lw          $a3, 0x9C($v0)
    ctx->pc = 0x2afb00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2afb04: 0xc0a3c96  jal         func_28F258
    ctx->pc = 0x2AFB04u;
    SET_GPR_U32(ctx, 31, 0x2AFB0Cu);
    ctx->pc = 0x2AFB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFB04u;
            // 0x2afb08: 0x260800e8  addiu       $t0, $s0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F258u;
    if (runtime->hasFunction(0x28F258u)) {
        auto targetFn = runtime->lookupFunction(0x28F258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB0Cu; }
        if (ctx->pc != 0x2AFB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F258_0x28f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB0Cu; }
        if (ctx->pc != 0x2AFB0Cu) { return; }
    }
    ctx->pc = 0x2AFB0Cu;
label_2afb0c:
    // 0x2afb0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AFB0Cu;
    {
        const bool branch_taken_0x2afb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFB0Cu;
            // 0x2afb10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb0c) {
            ctx->pc = 0x2AFB2Cu;
            goto label_2afb2c;
        }
    }
    ctx->pc = 0x2AFB14u;
label_2afb14:
    // 0x2afb14: 0x8c480094  lw          $t0, 0x94($v0)
    ctx->pc = 0x2afb14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2afb18: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x2afb18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2afb1c: 0x260900e8  addiu       $t1, $s0, 0xE8
    ctx->pc = 0x2afb1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    // 0x2afb20: 0xc0a3ca8  jal         func_28F2A0
    ctx->pc = 0x2AFB20u;
    SET_GPR_U32(ctx, 31, 0x2AFB28u);
    ctx->pc = 0x2AFB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFB20u;
            // 0x2afb24: 0x8c470090  lw          $a3, 0x90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F2A0u;
    if (runtime->hasFunction(0x28F2A0u)) {
        auto targetFn = runtime->lookupFunction(0x28F2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB28u; }
        if (ctx->pc != 0x2AFB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F2A0_0x28f2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB28u; }
        if (ctx->pc != 0x2AFB28u) { return; }
    }
    ctx->pc = 0x2AFB28u;
label_2afb28:
    // 0x2afb28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2afb28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2afb2c:
    // 0x2afb2c: 0xde0300e8  ld          $v1, 0xE8($s0)
    ctx->pc = 0x2afb2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2afb30: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2afb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2afb34: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AFB34u;
    {
        const bool branch_taken_0x2afb34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AFB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFB34u;
            // 0x2afb38: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb34) {
            ctx->pc = 0x2AFB50u;
            goto label_2afb50;
        }
    }
    ctx->pc = 0x2AFB3Cu;
    // 0x2afb3c: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x2afb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2afb40: 0x240600c2  addiu       $a2, $zero, 0xC2
    ctx->pc = 0x2afb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x2afb44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2afb44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afb48: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2AFB48u;
    SET_GPR_U32(ctx, 31, 0x2AFB50u);
    ctx->pc = 0x2AFB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFB48u;
            // 0x2afb4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB50u; }
        if (ctx->pc != 0x2AFB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB50u; }
        if (ctx->pc != 0x2AFB50u) { return; }
    }
    ctx->pc = 0x2AFB50u;
label_2afb50:
    // 0x2afb50: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AFB50u;
    {
        const bool branch_taken_0x2afb50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFB50u;
            // 0x2afb54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb50) {
            ctx->pc = 0x2AFB64u;
            goto label_2afb64;
        }
    }
    ctx->pc = 0x2AFB58u;
    // 0x2afb58: 0xc0a56b6  jal         func_295AD8
    ctx->pc = 0x2AFB58u;
    SET_GPR_U32(ctx, 31, 0x2AFB60u);
    ctx->pc = 0x295AD8u;
    if (runtime->hasFunction(0x295AD8u)) {
        auto targetFn = runtime->lookupFunction(0x295AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB60u; }
        if (ctx->pc != 0x2AFB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295AD8_0x295ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFB60u; }
        if (ctx->pc != 0x2AFB60u) { return; }
    }
    ctx->pc = 0x2AFB60u;
label_2afb60:
    // 0x2afb60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2afb60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2afb64:
    // 0x2afb64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2afb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2afb68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2afb68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afb6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2afb6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afb70: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFB70u;
            // 0x2afb74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AFB78u;
    ctx->pc = 0x2afb78u;
}
