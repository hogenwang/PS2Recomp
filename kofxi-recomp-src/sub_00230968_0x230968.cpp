#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00230968
// Address: 0x230968 - 0x230a10
void sub_00230968_0x230968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230968_0x230968");
#endif

    switch (ctx->pc) {
        case 0x230990u: goto label_230990;
        case 0x2309a0u: goto label_2309a0;
        case 0x2309f4u: goto label_2309f4;
        default: break;
    }

    ctx->pc = 0x230968u;

    // 0x230968: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x230968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23096c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23096cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230974: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x230974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x230978: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x230978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23097c: 0x26110080  addiu       $s1, $s0, 0x80
    ctx->pc = 0x23097cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x230980: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x230980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x230984: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x230984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230988: 0xc08c284  jal         func_230A10
    ctx->pc = 0x230988u;
    SET_GPR_U32(ctx, 31, 0x230990u);
    ctx->pc = 0x23098Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230988u;
            // 0x23098c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230A10u;
    if (runtime->hasFunction(0x230A10u)) {
        auto targetFn = runtime->lookupFunction(0x230A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230990u; }
        if (ctx->pc != 0x230990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230A10_0x230a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230990u; }
        if (ctx->pc != 0x230990u) { return; }
    }
    ctx->pc = 0x230990u;
label_230990:
    // 0x230990: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x230990u;
    {
        const bool branch_taken_0x230990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230990u;
            // 0x230994: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230990) {
            ctx->pc = 0x2309F4u;
            goto label_2309f4;
        }
    }
    ctx->pc = 0x230998u;
    // 0x230998: 0xc08c284  jal         func_230A10
    ctx->pc = 0x230998u;
    SET_GPR_U32(ctx, 31, 0x2309A0u);
    ctx->pc = 0x23099Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230998u;
            // 0x23099c: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230A10u;
    if (runtime->hasFunction(0x230A10u)) {
        auto targetFn = runtime->lookupFunction(0x230A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2309A0u; }
        if (ctx->pc != 0x2309A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230A10_0x230a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2309A0u; }
        if (ctx->pc != 0x2309A0u) { return; }
    }
    ctx->pc = 0x2309A0u;
label_2309a0:
    // 0x2309a0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2309A0u;
    {
        const bool branch_taken_0x2309a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2309a0) {
            ctx->pc = 0x2309ECu;
            goto label_2309ec;
        }
    }
    ctx->pc = 0x2309A8u;
    // 0x2309a8: 0xde020068  ld          $v0, 0x68($s0)
    ctx->pc = 0x2309a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2309ac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2309ACu;
    {
        const bool branch_taken_0x2309ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2309ac) {
            ctx->pc = 0x2309B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2309ACu;
            // 0x2309b0: 0xde0300a0  ld          $v1, 0xA0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2309C0u;
            goto label_2309c0;
        }
    }
    ctx->pc = 0x2309B4u;
    // 0x2309b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2309b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2309b8: 0xfe020068  sd          $v0, 0x68($s0)
    ctx->pc = 0x2309b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 2));
    // 0x2309bc: 0xde0300a0  ld          $v1, 0xA0($s0)
    ctx->pc = 0x2309bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 160)));
label_2309c0:
    // 0x2309c0: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2309C0u;
    {
        const bool branch_taken_0x2309c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2309c0) {
            ctx->pc = 0x2309C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2309C0u;
            // 0x2309c4: 0xde040088  ld          $a0, 0x88($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2309D8u;
            goto label_2309d8;
        }
    }
    ctx->pc = 0x2309C8u;
    // 0x2309c8: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x2309c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2309cc: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2309ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2309d0: 0xfe0200a0  sd          $v0, 0xA0($s0)
    ctx->pc = 0x2309d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 160), GPR_U64(ctx, 2));
    // 0x2309d4: 0xde040088  ld          $a0, 0x88($s0)
    ctx->pc = 0x2309d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 136)));
label_2309d8:
    // 0x2309d8: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2309d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2309dc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2309DCu;
    {
        const bool branch_taken_0x2309dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2309dc) {
            ctx->pc = 0x2309E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2309DCu;
            // 0x2309e0: 0xfe0400a0  sd          $a0, 0xA0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 160), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2309E4u;
            goto label_2309e4;
        }
    }
    ctx->pc = 0x2309E4u;
label_2309e4:
    // 0x2309e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2309E4u;
    {
        const bool branch_taken_0x2309e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2309E4u;
            // 0x2309e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309e4) {
            ctx->pc = 0x2309F8u;
            goto label_2309f8;
        }
    }
    ctx->pc = 0x2309ECu;
label_2309ec:
    // 0x2309ec: 0xc08c29c  jal         func_230A70
    ctx->pc = 0x2309ECu;
    SET_GPR_U32(ctx, 31, 0x2309F4u);
    ctx->pc = 0x2309F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2309ECu;
            // 0x2309f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230A70u;
    if (runtime->hasFunction(0x230A70u)) {
        auto targetFn = runtime->lookupFunction(0x230A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2309F4u; }
        if (ctx->pc != 0x2309F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230A70_0x230a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2309F4u; }
        if (ctx->pc != 0x2309F4u) { return; }
    }
    ctx->pc = 0x2309F4u;
label_2309f4:
    // 0x2309f4: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x2309f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_2309f8:
    // 0x2309f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2309f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2309fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2309fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230a00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x230a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230a08: 0x3e00008  jr          $ra
    ctx->pc = 0x230A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A08u;
            // 0x230a0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x230A10u;
    ctx->pc = 0x230a10u;
}
