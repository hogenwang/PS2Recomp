#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00349F60
// Address: 0x349f60 - 0x34a040
void sub_00349F60_0x349f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349F60_0x349f60");
#endif

    switch (ctx->pc) {
        case 0x349f70u: goto label_349f70;
        case 0x349fccu: goto label_349fcc;
        case 0x34a000u: goto label_34a000;
        case 0x34a028u: goto label_34a028;
        default: break;
    }

    ctx->pc = 0x349f60u;

    // 0x349f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349f68: 0xc0d2810  jal         func_34A040
    ctx->pc = 0x349F68u;
    SET_GPR_U32(ctx, 31, 0x349F70u);
    ctx->pc = 0x349F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349F68u;
            // 0x349f6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34A040u;
    if (runtime->hasFunction(0x34A040u)) {
        auto targetFn = runtime->lookupFunction(0x34A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F70u; }
        if (ctx->pc != 0x349F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034A040_0x34a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349F70u; }
        if (ctx->pc != 0x349F70u) { return; }
    }
    ctx->pc = 0x349F70u;
label_349f70:
    // 0x349f70: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349f74: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x349f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x349f78: 0x9445be96  lhu         $a1, -0x416A($v0)
    ctx->pc = 0x349f78u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950550)));
    // 0x349f7c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x349f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x349f80: 0x8c44be88  lw          $a0, -0x4178($v0)
    ctx->pc = 0x349f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950536)));
    // 0x349f84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x349f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x349f88: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x349F88u;
    {
        const bool branch_taken_0x349f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x349F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349F88u;
            // 0x349f8c: 0xac654378  sw          $a1, 0x4378($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f88) {
            ctx->pc = 0x349FD4u;
            goto label_349fd4;
        }
    }
    ctx->pc = 0x349F90u;
    // 0x349f90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349f94: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349F94u;
    {
        const bool branch_taken_0x349f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x349f94) {
            ctx->pc = 0x349F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349F94u;
            // 0x349f98: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x349FA4u;
            goto label_349fa4;
        }
    }
    ctx->pc = 0x349F9Cu;
    // 0x349f9c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x349F9Cu;
    {
        const bool branch_taken_0x349f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349F9Cu;
            // 0x349fa0: 0x3c0201de  lui         $v0, 0x1DE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f9c) {
            ctx->pc = 0x34A008u;
            goto label_34a008;
        }
    }
    ctx->pc = 0x349FA4u;
label_349fa4:
    // 0x349fa4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x349fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x349fa8: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x349fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x349fac: 0x2463ef90  addiu       $v1, $v1, -0x1070
    ctx->pc = 0x349facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963088));
    // 0x349fb0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x349fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x349fb4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x349fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x349fb8: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x349fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x349fbc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x349fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x349fc0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x349fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x349fc4: 0xc049c48  jal         func_127120
    ctx->pc = 0x349FC4u;
    SET_GPR_U32(ctx, 31, 0x349FCCu);
    ctx->pc = 0x349FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349FC4u;
            // 0x349fc8: 0x24450220  addiu       $a1, $v0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349FCCu; }
        if (ctx->pc != 0x349FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349FCCu; }
        if (ctx->pc != 0x349FCCu) { return; }
    }
    ctx->pc = 0x349FCCu;
label_349fcc:
    // 0x349fcc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x349FCCu;
    {
        const bool branch_taken_0x349fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349fcc) {
            ctx->pc = 0x34A01Cu;
            goto label_34a01c;
        }
    }
    ctx->pc = 0x349FD4u;
label_349fd4:
    // 0x349fd4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x349fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x349fd8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x349fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x349fdc: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x349fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x349fe0: 0x2463ece0  addiu       $v1, $v1, -0x1320
    ctx->pc = 0x349fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962400));
    // 0x349fe4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x349fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x349fe8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x349fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x349fec: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x349fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
    // 0x349ff0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x349ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x349ff4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x349ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x349ff8: 0xc049c48  jal         func_127120
    ctx->pc = 0x349FF8u;
    SET_GPR_U32(ctx, 31, 0x34A000u);
    ctx->pc = 0x349FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349FF8u;
            // 0x349ffc: 0x24450220  addiu       $a1, $v0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A000u; }
        if (ctx->pc != 0x34A000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A000u; }
        if (ctx->pc != 0x34A000u) { return; }
    }
    ctx->pc = 0x34A000u;
label_34a000:
    // 0x34a000: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34A000u;
    {
        const bool branch_taken_0x34a000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a000) {
            ctx->pc = 0x34A01Cu;
            goto label_34a01c;
        }
    }
    ctx->pc = 0x34A008u;
label_34a008:
    // 0x34a008: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34a008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34a00c: 0xac404378  sw          $zero, 0x4378($v0)
    ctx->pc = 0x34a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 0));
    // 0x34a010: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34a010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34a014: 0xac60be80  sw          $zero, -0x4180($v1)
    ctx->pc = 0x34a014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950528), GPR_U32(ctx, 0));
    // 0x34a018: 0xac40be88  sw          $zero, -0x4178($v0)
    ctx->pc = 0x34a018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950536), GPR_U32(ctx, 0));
label_34a01c:
    // 0x34a01c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34a01cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34a020: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34A020u;
    SET_GPR_U32(ctx, 31, 0x34A028u);
    ctx->pc = 0x34A024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A020u;
            // 0x34a024: 0x24849970  addiu       $a0, $a0, -0x6690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A028u; }
        if (ctx->pc != 0x34A028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A028u; }
        if (ctx->pc != 0x34A028u) { return; }
    }
    ctx->pc = 0x34A028u;
label_34a028:
    // 0x34a028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34a028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a02c: 0x3e00008  jr          $ra
    ctx->pc = 0x34A02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A02Cu;
            // 0x34a030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34A034u;
    // 0x34a034: 0x0  nop
    ctx->pc = 0x34a034u;
    // NOP
    // 0x34a038: 0x0  nop
    ctx->pc = 0x34a038u;
    // NOP
    // 0x34a03c: 0x0  nop
    ctx->pc = 0x34a03cu;
    // NOP
    ctx->pc = 0x34a040u;
}
