#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CD78
// Address: 0x21cd78 - 0x21cfc0
void sub_0021CD78_0x21cd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CD78_0x21cd78");
#endif

    switch (ctx->pc) {
        case 0x21cd94u: goto label_21cd94;
        case 0x21cda4u: goto label_21cda4;
        case 0x21cdb4u: goto label_21cdb4;
        case 0x21cdc4u: goto label_21cdc4;
        case 0x21cdd4u: goto label_21cdd4;
        case 0x21cde4u: goto label_21cde4;
        case 0x21ce08u: goto label_21ce08;
        case 0x21ce4cu: goto label_21ce4c;
        case 0x21ce60u: goto label_21ce60;
        case 0x21ce74u: goto label_21ce74;
        case 0x21ce88u: goto label_21ce88;
        case 0x21ce9cu: goto label_21ce9c;
        case 0x21ceb0u: goto label_21ceb0;
        case 0x21cec0u: goto label_21cec0;
        case 0x21cee8u: goto label_21cee8;
        case 0x21cf2cu: goto label_21cf2c;
        case 0x21cf40u: goto label_21cf40;
        case 0x21cf54u: goto label_21cf54;
        case 0x21cf68u: goto label_21cf68;
        case 0x21cf7cu: goto label_21cf7c;
        case 0x21cf90u: goto label_21cf90;
        case 0x21cf98u: goto label_21cf98;
        default: break;
    }

    ctx->pc = 0x21cd78u;

label_21cd78:
    // 0x21cd78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21cd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21cd7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21cd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21cd80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21cd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21cd84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21cd84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd88: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21cd8c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21CD8Cu;
    SET_GPR_U32(ctx, 31, 0x21CD94u);
    ctx->pc = 0x21CD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD8Cu;
            // 0x21cd90: 0x248417e8  addiu       $a0, $a0, 0x17E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD94u; }
        if (ctx->pc != 0x21CD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD94u; }
        if (ctx->pc != 0x21CD94u) { return; }
    }
    ctx->pc = 0x21CD94u;
label_21cd94:
    // 0x21cd94: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21cd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21cd98: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21cd9c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21CD9Cu;
    SET_GPR_U32(ctx, 31, 0x21CDA4u);
    ctx->pc = 0x21CDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD9Cu;
            // 0x21cda0: 0x24841808  addiu       $a0, $a0, 0x1808 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDA4u; }
        if (ctx->pc != 0x21CDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDA4u; }
        if (ctx->pc != 0x21CDA4u) { return; }
    }
    ctx->pc = 0x21CDA4u;
label_21cda4:
    // 0x21cda4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21cda4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21cda8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21cdac: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21CDACu;
    SET_GPR_U32(ctx, 31, 0x21CDB4u);
    ctx->pc = 0x21CDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDACu;
            // 0x21cdb0: 0x24841818  addiu       $a0, $a0, 0x1818 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDB4u; }
        if (ctx->pc != 0x21CDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDB4u; }
        if (ctx->pc != 0x21CDB4u) { return; }
    }
    ctx->pc = 0x21CDB4u;
label_21cdb4:
    // 0x21cdb4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21cdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21cdb8: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x21cdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21cdbc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21CDBCu;
    SET_GPR_U32(ctx, 31, 0x21CDC4u);
    ctx->pc = 0x21CDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDBCu;
            // 0x21cdc0: 0x24841828  addiu       $a0, $a0, 0x1828 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDC4u; }
        if (ctx->pc != 0x21CDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDC4u; }
        if (ctx->pc != 0x21CDC4u) { return; }
    }
    ctx->pc = 0x21CDC4u;
label_21cdc4:
    // 0x21cdc4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21cdc8: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x21cdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x21cdcc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21CDCCu;
    SET_GPR_U32(ctx, 31, 0x21CDD4u);
    ctx->pc = 0x21CDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDCCu;
            // 0x21cdd0: 0x24841838  addiu       $a0, $a0, 0x1838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDD4u; }
        if (ctx->pc != 0x21CDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDD4u; }
        if (ctx->pc != 0x21CDD4u) { return; }
    }
    ctx->pc = 0x21CDD4u;
label_21cdd4:
    // 0x21cdd4: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x21cdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x21cdd8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21cdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21cddc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21CDDCu;
    SET_GPR_U32(ctx, 31, 0x21CDE4u);
    ctx->pc = 0x21CDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDDCu;
            // 0x21cde0: 0x24841848  addiu       $a0, $a0, 0x1848 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDE4u; }
        if (ctx->pc != 0x21CDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDE4u; }
        if (ctx->pc != 0x21CDE4u) { return; }
    }
    ctx->pc = 0x21CDE4u;
label_21cde4:
    // 0x21cde4: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x21cde4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x21cde8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21cde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cdec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21cdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21cdf0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21cdf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cdf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cdf8: 0x24841858  addiu       $a0, $a0, 0x1858
    ctx->pc = 0x21cdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6232));
    // 0x21cdfc: 0x8043e52  j           func_10F948
    ctx->pc = 0x21CDFCu;
    ctx->pc = 0x21CE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDFCu;
            // 0x21ce00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21CE04u;
    // 0x21ce04: 0x0  nop
    ctx->pc = 0x21ce04u;
    // NOP
label_21ce08:
    // 0x21ce08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21ce08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ce0c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21ce0cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21ce10: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21ce10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21ce14: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21ce18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ce1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ce1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21ce20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21ce20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21ce24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21ce24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21ce28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21ce2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21ce2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21ce30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21ce34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21ce34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce38: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21ce38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce3c: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x21ce3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21ce40: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21ce40u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21ce44: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21CE44u;
    SET_GPR_U32(ctx, 31, 0x21CE4Cu);
    ctx->pc = 0x21CE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE44u;
            // 0x21ce48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE4Cu; }
        if (ctx->pc != 0x21CE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE4Cu; }
        if (ctx->pc != 0x21CE4Cu) { return; }
    }
    ctx->pc = 0x21CE4Cu;
label_21ce4c:
    // 0x21ce4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ce4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21ce50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce54: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21ce54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce58: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21CE58u;
    SET_GPR_U32(ctx, 31, 0x21CE60u);
    ctx->pc = 0x21CE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE58u;
            // 0x21ce5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE60u; }
        if (ctx->pc != 0x21CE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE60u; }
        if (ctx->pc != 0x21CE60u) { return; }
    }
    ctx->pc = 0x21CE60u;
label_21ce60:
    // 0x21ce60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ce60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21ce64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce68: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21ce68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce6c: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21CE6Cu;
    SET_GPR_U32(ctx, 31, 0x21CE74u);
    ctx->pc = 0x21CE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE6Cu;
            // 0x21ce70: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE74u; }
        if (ctx->pc != 0x21CE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE74u; }
        if (ctx->pc != 0x21CE74u) { return; }
    }
    ctx->pc = 0x21CE74u;
label_21ce74:
    // 0x21ce74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ce74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21ce78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce7c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21ce7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce80: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21CE80u;
    SET_GPR_U32(ctx, 31, 0x21CE88u);
    ctx->pc = 0x21CE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE80u;
            // 0x21ce84: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE88u; }
        if (ctx->pc != 0x21CE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE88u; }
        if (ctx->pc != 0x21CE88u) { return; }
    }
    ctx->pc = 0x21CE88u;
label_21ce88:
    // 0x21ce88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ce88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21ce8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21ce90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce94: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21CE94u;
    SET_GPR_U32(ctx, 31, 0x21CE9Cu);
    ctx->pc = 0x21CE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE94u;
            // 0x21ce98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE9Cu; }
        if (ctx->pc != 0x21CE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE9Cu; }
        if (ctx->pc != 0x21CE9Cu) { return; }
    }
    ctx->pc = 0x21CE9Cu;
label_21ce9c:
    // 0x21ce9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21ce9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cea0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21cea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cea4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21cea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cea8: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21CEA8u;
    SET_GPR_U32(ctx, 31, 0x21CEB0u);
    ctx->pc = 0x21CEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CEA8u;
            // 0x21ceac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CEB0u; }
        if (ctx->pc != 0x21CEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CEB0u; }
        if (ctx->pc != 0x21CEB0u) { return; }
    }
    ctx->pc = 0x21CEB0u;
label_21ceb0:
    // 0x21ceb0: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21ceb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ceb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21ceb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ceb8: 0xc08735e  jal         func_21CD78
    ctx->pc = 0x21CEB8u;
    SET_GPR_U32(ctx, 31, 0x21CEC0u);
    ctx->pc = 0x21CEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CEB8u;
            // 0x21cebc: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CD78u;
    goto label_21cd78;
    ctx->pc = 0x21CEC0u;
label_21cec0:
    // 0x21cec0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21cec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cec8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21cec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21cecc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21ceccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ced0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21ced0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21ced4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21ced4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ced8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21ced8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21cedc: 0x3e00008  jr          $ra
    ctx->pc = 0x21CEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CEDCu;
            // 0x21cee0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CEE4u;
    // 0x21cee4: 0x0  nop
    ctx->pc = 0x21cee4u;
    // NOP
label_21cee8:
    // 0x21cee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21cee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ceec: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21ceecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21cef0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21cef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21cef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21cef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21cef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21cef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21cefc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21cefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21cf00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21cf00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21cf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21cf08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21cf08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21cf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21cf10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21cf10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf14: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21cf14u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21cf18: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21cf18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf1c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21cf1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21cf20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21cf20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cf24: 0xc084612  jal         func_211848
    ctx->pc = 0x21CF24u;
    SET_GPR_U32(ctx, 31, 0x21CF2Cu);
    ctx->pc = 0x21CF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF24u;
            // 0x21cf28: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF2Cu; }
        if (ctx->pc != 0x21CF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF2Cu; }
        if (ctx->pc != 0x21CF2Cu) { return; }
    }
    ctx->pc = 0x21CF2Cu;
label_21cf2c:
    // 0x21cf2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21cf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21cf30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf34: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21cf34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf38: 0xc084612  jal         func_211848
    ctx->pc = 0x21CF38u;
    SET_GPR_U32(ctx, 31, 0x21CF40u);
    ctx->pc = 0x21CF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF38u;
            // 0x21cf3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF40u; }
        if (ctx->pc != 0x21CF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF40u; }
        if (ctx->pc != 0x21CF40u) { return; }
    }
    ctx->pc = 0x21CF40u;
label_21cf40:
    // 0x21cf40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21cf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21cf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf48: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21cf48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf4c: 0xc084582  jal         func_211608
    ctx->pc = 0x21CF4Cu;
    SET_GPR_U32(ctx, 31, 0x21CF54u);
    ctx->pc = 0x21CF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF4Cu;
            // 0x21cf50: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF54u; }
        if (ctx->pc != 0x21CF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF54u; }
        if (ctx->pc != 0x21CF54u) { return; }
    }
    ctx->pc = 0x21CF54u;
label_21cf54:
    // 0x21cf54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21cf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21cf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf5c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21cf5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf60: 0xc084582  jal         func_211608
    ctx->pc = 0x21CF60u;
    SET_GPR_U32(ctx, 31, 0x21CF68u);
    ctx->pc = 0x21CF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF60u;
            // 0x21cf64: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF68u; }
        if (ctx->pc != 0x21CF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF68u; }
        if (ctx->pc != 0x21CF68u) { return; }
    }
    ctx->pc = 0x21CF68u;
label_21cf68:
    // 0x21cf68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21cf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21cf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21cf70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf74: 0xc084612  jal         func_211848
    ctx->pc = 0x21CF74u;
    SET_GPR_U32(ctx, 31, 0x21CF7Cu);
    ctx->pc = 0x21CF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF74u;
            // 0x21cf78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF7Cu; }
        if (ctx->pc != 0x21CF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF7Cu; }
        if (ctx->pc != 0x21CF7Cu) { return; }
    }
    ctx->pc = 0x21CF7Cu;
label_21cf7c:
    // 0x21cf7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21cf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf80: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21cf80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21cf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf88: 0xc084582  jal         func_211608
    ctx->pc = 0x21CF88u;
    SET_GPR_U32(ctx, 31, 0x21CF90u);
    ctx->pc = 0x21CF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF88u;
            // 0x21cf8c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF90u; }
        if (ctx->pc != 0x21CF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF90u; }
        if (ctx->pc != 0x21CF90u) { return; }
    }
    ctx->pc = 0x21CF90u;
label_21cf90:
    // 0x21cf90: 0xc08735e  jal         func_21CD78
    ctx->pc = 0x21CF90u;
    SET_GPR_U32(ctx, 31, 0x21CF98u);
    ctx->pc = 0x21CF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF90u;
            // 0x21cf94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CD78u;
    goto label_21cd78;
    ctx->pc = 0x21CF98u;
label_21cf98:
    // 0x21cf98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21cf9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21cf9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21cfa0: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21cfa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cfa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cfa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21cfa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cfac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21cfacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21cfb0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21cfb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cfb4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21cfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21cfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x21CFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CFB8u;
            // 0x21cfbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CFC0u;
    ctx->pc = 0x21cfc0u;
}
