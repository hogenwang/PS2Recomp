#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024A130
// Address: 0x24a130 - 0x24a248
void sub_0024A130_0x24a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A130_0x24a130");
#endif

    switch (ctx->pc) {
        case 0x24a154u: goto label_24a154;
        case 0x24a1b8u: goto label_24a1b8;
        case 0x24a1f8u: goto label_24a1f8;
        case 0x24a21cu: goto label_24a21c;
        case 0x24a234u: goto label_24a234;
        default: break;
    }

    ctx->pc = 0x24a130u;

    // 0x24a130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24a130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24a134: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24a134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24a138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a13c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24a13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24a144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24a148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a14c: 0xc0929a4  jal         func_24A690
    ctx->pc = 0x24A14Cu;
    SET_GPR_U32(ctx, 31, 0x24A154u);
    ctx->pc = 0x24A150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A14Cu;
            // 0x24a150: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A690u;
    if (runtime->hasFunction(0x24A690u)) {
        auto targetFn = runtime->lookupFunction(0x24A690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A154u; }
        if (ctx->pc != 0x24A154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A690_0x24a690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A154u; }
        if (ctx->pc != 0x24A154u) { return; }
    }
    ctx->pc = 0x24A154u;
label_24a154:
    // 0x24a154: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x24a154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x24a158: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A158u;
    {
        const bool branch_taken_0x24a158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a158) {
            ctx->pc = 0x24A15Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24A158u;
            // 0x24a15c: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24A170u;
            goto label_24a170;
        }
    }
    ctx->pc = 0x24A160u;
    // 0x24a160: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x24a160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x24a164: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x24a164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x24a168: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x24a168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x24a16c: 0x0  nop
    ctx->pc = 0x24a16cu;
    // NOP
label_24a170:
    // 0x24a170: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x24a170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x24a174: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24a174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x24a178: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x24a178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24a17c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A17Cu;
    {
        const bool branch_taken_0x24a17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A17Cu;
            // 0x24a180: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a17c) {
            ctx->pc = 0x24A190u;
            goto label_24a190;
        }
    }
    ctx->pc = 0x24A184u;
    // 0x24a184: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24A184u;
    {
        const bool branch_taken_0x24a184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A184u;
            // 0x24a188: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a184) {
            ctx->pc = 0x24A194u;
            goto label_24a194;
        }
    }
    ctx->pc = 0x24A18Cu;
    // 0x24a18c: 0x0  nop
    ctx->pc = 0x24a18cu;
    // NOP
label_24a190:
    // 0x24a190: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x24a190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_24a194:
    // 0x24a194: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x24a194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24a198: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x24a198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24a19c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x24a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x24a1a0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x24a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x24a1a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24a1a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A1A8u;
    {
        const bool branch_taken_0x24a1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A1A8u;
            // 0x24a1ac: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1a8) {
            ctx->pc = 0x24A1B8u;
            goto label_24a1b8;
        }
    }
    ctx->pc = 0x24A1B0u;
    // 0x24a1b0: 0xc090c82  jal         func_243208
    ctx->pc = 0x24A1B0u;
    SET_GPR_U32(ctx, 31, 0x24A1B8u);
    ctx->pc = 0x24A1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A1B0u;
            // 0x24a1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243208u;
    if (runtime->hasFunction(0x243208u)) {
        auto targetFn = runtime->lookupFunction(0x243208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A1B8u; }
        if (ctx->pc != 0x24A1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243208_0x243208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A1B8u; }
        if (ctx->pc != 0x24A1B8u) { return; }
    }
    ctx->pc = 0x24A1B8u;
label_24a1b8:
    // 0x24a1b8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x24a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x24a1bc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A1BCu;
    {
        const bool branch_taken_0x24a1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a1bc) {
            ctx->pc = 0x24A1C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24A1BCu;
            // 0x24a1c0: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24A1D0u;
            goto label_24a1d0;
        }
    }
    ctx->pc = 0x24A1C4u;
    // 0x24a1c4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x24a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x24a1c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24A1C8u;
    {
        const bool branch_taken_0x24a1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A1C8u;
            // 0x24a1cc: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1c8) {
            ctx->pc = 0x24A1D8u;
            goto label_24a1d8;
        }
    }
    ctx->pc = 0x24A1D0u;
label_24a1d0:
    // 0x24a1d0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24a1d4: 0xac4311a4  sw          $v1, 0x11A4($v0)
    ctx->pc = 0x24a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4516), GPR_U32(ctx, 3));
label_24a1d8:
    // 0x24a1d8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x24a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x24a1dc: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x24a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x24a1e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x24a1e4: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x24a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x24a1e8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A1E8u;
    {
        const bool branch_taken_0x24a1e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a1e8) {
            ctx->pc = 0x24A1ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24A1E8u;
            // 0x24a1ec: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24A1FCu;
            goto label_24a1fc;
        }
    }
    ctx->pc = 0x24A1F0u;
    // 0x24a1f0: 0xc092c44  jal         func_24B110
    ctx->pc = 0x24A1F0u;
    SET_GPR_U32(ctx, 31, 0x24A1F8u);
    ctx->pc = 0x24B110u;
    if (runtime->hasFunction(0x24B110u)) {
        auto targetFn = runtime->lookupFunction(0x24B110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A1F8u; }
        if (ctx->pc != 0x24A1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024B110_0x24b110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A1F8u; }
        if (ctx->pc != 0x24A1F8u) { return; }
    }
    ctx->pc = 0x24A1F8u;
label_24a1f8:
    // 0x24a1f8: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x24a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_24a1fc:
    // 0x24a1fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A1FCu;
    {
        const bool branch_taken_0x24a1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A1FCu;
            // 0x24a200: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1fc) {
            ctx->pc = 0x24A21Cu;
            goto label_24a21c;
        }
    }
    ctx->pc = 0x24A204u;
    // 0x24a204: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x24a204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x24a208: 0x244243b0  addiu       $v0, $v0, 0x43B0
    ctx->pc = 0x24a208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17328));
    // 0x24a20c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A20Cu;
    {
        const bool branch_taken_0x24a20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a20c) {
            ctx->pc = 0x24A210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24A20Cu;
            // 0x24a210: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24A220u;
            goto label_24a220;
        }
    }
    ctx->pc = 0x24A214u;
    // 0x24a214: 0xc092b0c  jal         func_24AC30
    ctx->pc = 0x24A214u;
    SET_GPR_U32(ctx, 31, 0x24A21Cu);
    ctx->pc = 0x24A218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A214u;
            // 0x24a218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24AC30u;
    if (runtime->hasFunction(0x24AC30u)) {
        auto targetFn = runtime->lookupFunction(0x24AC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A21Cu; }
        if (ctx->pc != 0x24A21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024AC30_0x24ac30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A21Cu; }
        if (ctx->pc != 0x24A21Cu) { return; }
    }
    ctx->pc = 0x24A21Cu;
label_24a21c:
    // 0x24a21c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x24a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_24a220:
    // 0x24a220: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24a220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24a224: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A224u;
    {
        const bool branch_taken_0x24a224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A224u;
            // 0x24a228: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a224) {
            ctx->pc = 0x24A234u;
            goto label_24a234;
        }
    }
    ctx->pc = 0x24A22Cu;
    // 0x24a22c: 0xc090c82  jal         func_243208
    ctx->pc = 0x24A22Cu;
    SET_GPR_U32(ctx, 31, 0x24A234u);
    ctx->pc = 0x24A230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A22Cu;
            // 0x24a230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243208u;
    if (runtime->hasFunction(0x243208u)) {
        auto targetFn = runtime->lookupFunction(0x243208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A234u; }
        if (ctx->pc != 0x24A234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243208_0x243208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A234u; }
        if (ctx->pc != 0x24A234u) { return; }
    }
    ctx->pc = 0x24A234u;
label_24a234:
    // 0x24a234: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24a234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a238: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24a238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a23c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a23cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a240: 0x8092590  j           func_249640
    ctx->pc = 0x24A240u;
    ctx->pc = 0x24A244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A240u;
            // 0x24a244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249640u;
    if (runtime->hasFunction(0x249640u)) {
        auto targetFn = runtime->lookupFunction(0x249640u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00249640_0x249640(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x24A248u;
    ctx->pc = 0x24a248u;
}
