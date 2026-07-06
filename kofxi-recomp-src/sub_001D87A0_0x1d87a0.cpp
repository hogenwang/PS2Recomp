#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D87A0
// Address: 0x1d87a0 - 0x1d8838
void sub_001D87A0_0x1d87a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D87A0_0x1d87a0");
#endif

    switch (ctx->pc) {
        case 0x1d87d0u: goto label_1d87d0;
        case 0x1d87e0u: goto label_1d87e0;
        case 0x1d8808u: goto label_1d8808;
        case 0x1d8818u: goto label_1d8818;
        default: break;
    }

    ctx->pc = 0x1d87a0u;

    // 0x1d87a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d87a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d87a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d87a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d87a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d87a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d87acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d87b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d87b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d87b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d87b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d87b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87bc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D87BCu;
    {
        const bool branch_taken_0x1d87bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D87C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87BCu;
            // 0x1d87c0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d87bc) {
            ctx->pc = 0x1D87D8u;
            goto label_1d87d8;
        }
    }
    ctx->pc = 0x1D87C4u;
    // 0x1d87c4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d87c8: 0xc07620e  jal         func_1D8838
    ctx->pc = 0x1D87C8u;
    SET_GPR_U32(ctx, 31, 0x1D87D0u);
    ctx->pc = 0x1D87CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87C8u;
            // 0x1d87cc: 0x8c44e6a8  lw          $a0, -0x1958($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960808)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8838u;
    if (runtime->hasFunction(0x1D8838u)) {
        auto targetFn = runtime->lookupFunction(0x1D8838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D87D0u; }
        if (ctx->pc != 0x1D87D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8838_0x1d8838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D87D0u; }
        if (ctx->pc != 0x1D87D0u) { return; }
    }
    ctx->pc = 0x1D87D0u;
label_1d87d0:
    // 0x1d87d0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D87D0u;
    {
        const bool branch_taken_0x1d87d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D87D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87D0u;
            // 0x1d87d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d87d0) {
            ctx->pc = 0x1D881Cu;
            goto label_1d881c;
        }
    }
    ctx->pc = 0x1D87D8u;
label_1d87d8:
    // 0x1d87d8: 0xc07623a  jal         func_1D88E8
    ctx->pc = 0x1D87D8u;
    SET_GPR_U32(ctx, 31, 0x1D87E0u);
    ctx->pc = 0x1D88E8u;
    if (runtime->hasFunction(0x1D88E8u)) {
        auto targetFn = runtime->lookupFunction(0x1D88E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D87E0u; }
        if (ctx->pc != 0x1D87E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D88E8_0x1d88e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D87E0u; }
        if (ctx->pc != 0x1D87E0u) { return; }
    }
    ctx->pc = 0x1D87E0u;
label_1d87e0:
    // 0x1d87e0: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1d87e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x1d87e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D87E4u;
    {
        const bool branch_taken_0x1d87e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D87E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87E4u;
            // 0x1d87e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d87e4) {
            ctx->pc = 0x1D8808u;
            goto label_1d8808;
        }
    }
    ctx->pc = 0x1D87ECu;
    // 0x1d87ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d87ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d87f0: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x1d87f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x1d87f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d87f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d87f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d87f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d87fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d87fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d8800: 0x80761c6  j           func_1D8718
    ctx->pc = 0x1D8800u;
    ctx->pc = 0x1D8804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8800u;
            // 0x1d8804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8718u;
    {
        auto targetFn = runtime->lookupFunction(0x1D8718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1D8808u;
label_1d8808:
    // 0x1d8808: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1d8808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1d880c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d880cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8810: 0xc07620e  jal         func_1D8838
    ctx->pc = 0x1D8810u;
    SET_GPR_U32(ctx, 31, 0x1D8818u);
    ctx->pc = 0x1D8814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8810u;
            // 0x1d8814: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8838u;
    if (runtime->hasFunction(0x1D8838u)) {
        auto targetFn = runtime->lookupFunction(0x1D8838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8818u; }
        if (ctx->pc != 0x1D8818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8838_0x1d8838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8818u; }
        if (ctx->pc != 0x1D8818u) { return; }
    }
    ctx->pc = 0x1D8818u;
label_1d8818:
    // 0x1d8818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d881c:
    // 0x1d881c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d881cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8820: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8824: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d8824u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8828: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d8828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d882c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D882Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D882Cu;
            // 0x1d8830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8834u;
    // 0x1d8834: 0x0  nop
    ctx->pc = 0x1d8834u;
    // NOP
    ctx->pc = 0x1d8838u;
}
