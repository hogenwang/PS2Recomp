#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00267790
// Address: 0x267790 - 0x267838
void sub_00267790_0x267790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267790_0x267790");
#endif

    switch (ctx->pc) {
        case 0x2677b8u: goto label_2677b8;
        case 0x2677c8u: goto label_2677c8;
        case 0x2677e0u: goto label_2677e0;
        case 0x267800u: goto label_267800;
        case 0x26781cu: goto label_26781c;
        default: break;
    }

    ctx->pc = 0x267790u;

    // 0x267790: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x267790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x267794: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x267794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x267798: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x267798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x26779c: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x26779cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x2677a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2677a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2677a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2677a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2677a8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2677a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2677ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2677acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2677b0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2677B0u;
    SET_GPR_U32(ctx, 31, 0x2677B8u);
    ctx->pc = 0x2677B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2677B0u;
            // 0x2677b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2677B8u; }
        if (ctx->pc != 0x2677B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2677B8u; }
        if (ctx->pc != 0x2677B8u) { return; }
    }
    ctx->pc = 0x2677B8u;
label_2677b8:
    // 0x2677b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2677b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2677bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2677bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2677c0: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2677C0u;
    SET_GPR_U32(ctx, 31, 0x2677C8u);
    ctx->pc = 0x2677C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2677C0u;
            // 0x2677c4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2677C8u; }
        if (ctx->pc != 0x2677C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2677C8u; }
        if (ctx->pc != 0x2677C8u) { return; }
    }
    ctx->pc = 0x2677C8u;
label_2677c8:
    // 0x2677c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2677c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2677cc: 0x3405c0a8  ori         $a1, $zero, 0xC0A8
    ctx->pc = 0x2677ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49320);
    // 0x2677d0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2677d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2677d4: 0x34a56978  ori         $a1, $a1, 0x6978
    ctx->pc = 0x2677d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27000);
    // 0x2677d8: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x2677D8u;
    SET_GPR_U32(ctx, 31, 0x2677E0u);
    ctx->pc = 0x2677DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2677D8u;
            // 0x2677dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2677E0u; }
        if (ctx->pc != 0x2677E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2677E0u; }
        if (ctx->pc != 0x2677E0u) { return; }
    }
    ctx->pc = 0x2677E0u;
label_2677e0:
    // 0x2677e0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2677E0u;
    {
        const bool branch_taken_0x2677e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2677e0) {
            ctx->pc = 0x2677E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2677E0u;
            // 0x2677e4: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2677F8u;
            goto label_2677f8;
        }
    }
    ctx->pc = 0x2677E8u;
    // 0x2677e8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2677e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2677ec: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2677ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2677f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2677F0u;
    {
        const bool branch_taken_0x2677f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2677F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2677F0u;
            // 0x2677f4: 0x24a57998  addiu       $a1, $a1, 0x7998 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677f0) {
            ctx->pc = 0x267814u;
            goto label_267814;
        }
    }
    ctx->pc = 0x2677F8u;
label_2677f8:
    // 0x2677f8: 0xc09a0b4  jal         func_2682D0
    ctx->pc = 0x2677F8u;
    SET_GPR_U32(ctx, 31, 0x267800u);
    ctx->pc = 0x2677FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2677F8u;
            // 0x2677fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2682D0u;
    if (runtime->hasFunction(0x2682D0u)) {
        auto targetFn = runtime->lookupFunction(0x2682D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267800u; }
        if (ctx->pc != 0x267800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002682D0_0x2682d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267800u; }
        if (ctx->pc != 0x267800u) { return; }
    }
    ctx->pc = 0x267800u;
label_267800:
    // 0x267800: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267800u;
    {
        const bool branch_taken_0x267800 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x267804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267800u;
            // 0x267804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267800) {
            ctx->pc = 0x267820u;
            goto label_267820;
        }
    }
    ctx->pc = 0x267808u;
    // 0x267808: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x267808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x26780c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26780cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x267810: 0x24a579e8  addiu       $a1, $a1, 0x79E8
    ctx->pc = 0x267810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31208));
label_267814:
    // 0x267814: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x267814u;
    SET_GPR_U32(ctx, 31, 0x26781Cu);
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26781Cu; }
        if (ctx->pc != 0x26781Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26781Cu; }
        if (ctx->pc != 0x26781Cu) { return; }
    }
    ctx->pc = 0x26781Cu;
label_26781c:
    // 0x26781c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_267820:
    // 0x267820: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x267820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x267824: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x267824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x267828: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x267828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26782c: 0x3e00008  jr          $ra
    ctx->pc = 0x26782Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26782Cu;
            // 0x267830: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267834u;
    // 0x267834: 0x0  nop
    ctx->pc = 0x267834u;
    // NOP
    ctx->pc = 0x267838u;
}
