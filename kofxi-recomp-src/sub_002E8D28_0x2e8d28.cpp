#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E8D28
// Address: 0x2e8d28 - 0x2e8ec8
void sub_002E8D28_0x2e8d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8D28_0x2e8d28");
#endif

    switch (ctx->pc) {
        case 0x2e8d54u: goto label_2e8d54;
        case 0x2e8d6cu: goto label_2e8d6c;
        case 0x2e8d84u: goto label_2e8d84;
        case 0x2e8d9cu: goto label_2e8d9c;
        case 0x2e8db8u: goto label_2e8db8;
        case 0x2e8dccu: goto label_2e8dcc;
        case 0x2e8ddcu: goto label_2e8ddc;
        case 0x2e8dfcu: goto label_2e8dfc;
        case 0x2e8e64u: goto label_2e8e64;
        case 0x2e8e8cu: goto label_2e8e8c;
        case 0x2e8e94u: goto label_2e8e94;
        case 0x2e8e9cu: goto label_2e8e9c;
        case 0x2e8eb0u: goto label_2e8eb0;
        default: break;
    }

    ctx->pc = 0x2e8d28u;

    // 0x2e8d28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e8d2c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2e8d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2e8d30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e8d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e8d34: 0x24c6fd90  addiu       $a2, $a2, -0x270
    ctx->pc = 0x2e8d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966672));
    // 0x2e8d38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e8d3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e8d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e8d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e8d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e8d48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d4c: 0xc0ba2ca  jal         func_2E8B28
    ctx->pc = 0x2E8D4Cu;
    SET_GPR_U32(ctx, 31, 0x2E8D54u);
    ctx->pc = 0x2E8D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8D4Cu;
            // 0x2e8d50: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8B28u;
    if (runtime->hasFunction(0x2E8B28u)) {
        auto targetFn = runtime->lookupFunction(0x2E8B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D54u; }
        if (ctx->pc != 0x2E8D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8B28_0x2e8b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D54u; }
        if (ctx->pc != 0x2E8D54u) { return; }
    }
    ctx->pc = 0x2E8D54u;
label_2e8d54:
    // 0x2e8d54: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2e8d54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2e8d58: 0xae027d48  sw          $v0, 0x7D48($s0)
    ctx->pc = 0x2e8d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32072), GPR_U32(ctx, 2));
    // 0x2e8d5c: 0x24c6fda8  addiu       $a2, $a2, -0x258
    ctx->pc = 0x2e8d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966696));
    // 0x2e8d60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d64: 0xc0ba2ca  jal         func_2E8B28
    ctx->pc = 0x2E8D64u;
    SET_GPR_U32(ctx, 31, 0x2E8D6Cu);
    ctx->pc = 0x2E8D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8D64u;
            // 0x2e8d68: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8B28u;
    if (runtime->hasFunction(0x2E8B28u)) {
        auto targetFn = runtime->lookupFunction(0x2E8B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D6Cu; }
        if (ctx->pc != 0x2E8D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8B28_0x2e8b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D6Cu; }
        if (ctx->pc != 0x2E8D6Cu) { return; }
    }
    ctx->pc = 0x2E8D6Cu;
label_2e8d6c:
    // 0x2e8d6c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2e8d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2e8d70: 0xae027d4c  sw          $v0, 0x7D4C($s0)
    ctx->pc = 0x2e8d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32076), GPR_U32(ctx, 2));
    // 0x2e8d74: 0x24c6fdc0  addiu       $a2, $a2, -0x240
    ctx->pc = 0x2e8d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966720));
    // 0x2e8d78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d7c: 0xc0ba2ca  jal         func_2E8B28
    ctx->pc = 0x2E8D7Cu;
    SET_GPR_U32(ctx, 31, 0x2E8D84u);
    ctx->pc = 0x2E8D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8D7Cu;
            // 0x2e8d80: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8B28u;
    if (runtime->hasFunction(0x2E8B28u)) {
        auto targetFn = runtime->lookupFunction(0x2E8B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D84u; }
        if (ctx->pc != 0x2E8D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8B28_0x2e8b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D84u; }
        if (ctx->pc != 0x2E8D84u) { return; }
    }
    ctx->pc = 0x2E8D84u;
label_2e8d84:
    // 0x2e8d84: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2e8d84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2e8d88: 0xae027d50  sw          $v0, 0x7D50($s0)
    ctx->pc = 0x2e8d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32080), GPR_U32(ctx, 2));
    // 0x2e8d8c: 0x24c6fde0  addiu       $a2, $a2, -0x220
    ctx->pc = 0x2e8d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966752));
    // 0x2e8d90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d94: 0xc0ba2ca  jal         func_2E8B28
    ctx->pc = 0x2E8D94u;
    SET_GPR_U32(ctx, 31, 0x2E8D9Cu);
    ctx->pc = 0x2E8D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8D94u;
            // 0x2e8d98: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8B28u;
    if (runtime->hasFunction(0x2E8B28u)) {
        auto targetFn = runtime->lookupFunction(0x2E8B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D9Cu; }
        if (ctx->pc != 0x2E8D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8B28_0x2e8b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D9Cu; }
        if (ctx->pc != 0x2E8D9Cu) { return; }
    }
    ctx->pc = 0x2E8D9Cu;
label_2e8d9c:
    // 0x2e8d9c: 0xae117cc0  sw          $s1, 0x7CC0($s0)
    ctx->pc = 0x2e8d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31936), GPR_U32(ctx, 17));
    // 0x2e8da0: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2e8da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2e8da4: 0xae027d58  sw          $v0, 0x7D58($s0)
    ctx->pc = 0x2e8da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32088), GPR_U32(ctx, 2));
    // 0x2e8da8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e8da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8dac: 0x24a59340  addiu       $a1, $a1, -0x6CC0
    ctx->pc = 0x2e8dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939456));
    // 0x2e8db0: 0xc098a5e  jal         func_262978
    ctx->pc = 0x2E8DB0u;
    SET_GPR_U32(ctx, 31, 0x2E8DB8u);
    ctx->pc = 0x2E8DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8DB0u;
            // 0x2e8db4: 0x8e2400a4  lw          $a0, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262978u;
    if (runtime->hasFunction(0x262978u)) {
        auto targetFn = runtime->lookupFunction(0x262978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8DB8u; }
        if (ctx->pc != 0x2E8DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262978_0x262978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8DB8u; }
        if (ctx->pc != 0x2E8DB8u) { return; }
    }
    ctx->pc = 0x2E8DB8u;
label_2e8db8:
    // 0x2e8db8: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x2e8db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x2e8dbc: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2e8dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2e8dc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e8dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8dc4: 0xc098a5e  jal         func_262978
    ctx->pc = 0x2E8DC4u;
    SET_GPR_U32(ctx, 31, 0x2E8DCCu);
    ctx->pc = 0x2E8DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8DC4u;
            // 0x2e8dc8: 0x24a592e8  addiu       $a1, $a1, -0x6D18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262978u;
    if (runtime->hasFunction(0x262978u)) {
        auto targetFn = runtime->lookupFunction(0x262978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8DCCu; }
        if (ctx->pc != 0x2E8DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262978_0x262978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8DCCu; }
        if (ctx->pc != 0x2E8DCCu) { return; }
    }
    ctx->pc = 0x2E8DCCu;
label_2e8dcc:
    // 0x2e8dcc: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x2e8dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2e8dd0: 0x26047cc4  addiu       $a0, $s0, 0x7CC4
    ctx->pc = 0x2e8dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31940));
    // 0x2e8dd4: 0xc098af4  jal         func_262BD0
    ctx->pc = 0x2E8DD4u;
    SET_GPR_U32(ctx, 31, 0x2E8DDCu);
    ctx->pc = 0x2E8DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8DD4u;
            // 0x2e8dd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262BD0u;
    if (runtime->hasFunction(0x262BD0u)) {
        auto targetFn = runtime->lookupFunction(0x262BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8DDCu; }
        if (ctx->pc != 0x2E8DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262BD0_0x262bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8DDCu; }
        if (ctx->pc != 0x2E8DDCu) { return; }
    }
    ctx->pc = 0x2E8DDCu;
label_2e8ddc:
    // 0x2e8ddc: 0x8e084e34  lw          $t0, 0x4E34($s0)
    ctx->pc = 0x2e8ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20020)));
    // 0x2e8de0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2e8de0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2e8de4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2e8de4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2e8de8: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x2e8de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2e8dec: 0x24c6fdf8  addiu       $a2, $a2, -0x208
    ctx->pc = 0x2e8decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966776));
    // 0x2e8df0: 0x24e7fe00  addiu       $a3, $a3, -0x200
    ctx->pc = 0x2e8df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966784));
    // 0x2e8df4: 0xc043e24  jal         func_10F890
    ctx->pc = 0x2E8DF4u;
    SET_GPR_U32(ctx, 31, 0x2E8DFCu);
    ctx->pc = 0x2E8DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8DF4u;
            // 0x2e8df8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (runtime->hasFunction(0x10F890u)) {
        auto targetFn = runtime->lookupFunction(0x10F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8DFCu; }
        if (ctx->pc != 0x2E8DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F890_0x10f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8DFCu; }
        if (ctx->pc != 0x2E8DFCu) { return; }
    }
    ctx->pc = 0x2E8DFCu;
label_2e8dfc:
    // 0x2e8dfc: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2e8dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2e8e00: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2e8e00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x2e8e04: 0x24a58f40  addiu       $a1, $a1, -0x70C0
    ctx->pc = 0x2e8e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938432));
    // 0x2e8e08: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x2e8e08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x2e8e0c: 0x3c08002f  lui         $t0, 0x2F
    ctx->pc = 0x2e8e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47 << 16));
    // 0x2e8e10: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x2e8e10u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
    // 0x2e8e14: 0x3c0a002f  lui         $t2, 0x2F
    ctx->pc = 0x2e8e14u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)47 << 16));
    // 0x2e8e18: 0xae0500cc  sw          $a1, 0xCC($s0)
    ctx->pc = 0x2e8e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 5));
    // 0x2e8e1c: 0x24c69208  addiu       $a2, $a2, -0x6DF8
    ctx->pc = 0x2e8e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939144));
    // 0x2e8e20: 0x24e79ae8  addiu       $a3, $a3, -0x6518
    ctx->pc = 0x2e8e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941416));
    // 0x2e8e24: 0x25089b00  addiu       $t0, $t0, -0x6500
    ctx->pc = 0x2e8e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941440));
    // 0x2e8e28: 0x25299b58  addiu       $t1, $t1, -0x64A8
    ctx->pc = 0x2e8e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941528));
    // 0x2e8e2c: 0x254a9bb8  addiu       $t2, $t2, -0x6448
    ctx->pc = 0x2e8e2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941624));
    // 0x2e8e30: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x2e8e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x2e8e34: 0x24028010  addiu       $v0, $zero, -0x7FF0
    ctx->pc = 0x2e8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934544));
    // 0x2e8e38: 0x240305dc  addiu       $v1, $zero, 0x5DC
    ctx->pc = 0x2e8e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x2e8e3c: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x2e8e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e8e40: 0x26047f5c  addiu       $a0, $s0, 0x7F5C
    ctx->pc = 0x2e8e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32604));
    // 0x2e8e44: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x2e8e44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x2e8e48: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2e8e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e8e4c: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x2e8e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
    // 0x2e8e50: 0xae074e18  sw          $a3, 0x4E18($s0)
    ctx->pc = 0x2e8e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 19992), GPR_U32(ctx, 7));
    // 0x2e8e54: 0xae084e1c  sw          $t0, 0x4E1C($s0)
    ctx->pc = 0x2e8e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 19996), GPR_U32(ctx, 8));
    // 0x2e8e58: 0xae094e20  sw          $t1, 0x4E20($s0)
    ctx->pc = 0x2e8e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20000), GPR_U32(ctx, 9));
    // 0x2e8e5c: 0xc048c96  jal         func_123258
    ctx->pc = 0x2E8E5Cu;
    SET_GPR_U32(ctx, 31, 0x2E8E64u);
    ctx->pc = 0x2E8E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E5Cu;
            // 0x2e8e60: 0xae0a4e24  sw          $t2, 0x4E24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20004), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8E64u; }
        if (ctx->pc != 0x2E8E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8E64u; }
        if (ctx->pc != 0x2E8E64u) { return; }
    }
    ctx->pc = 0x2E8E64u;
label_2e8e64:
    // 0x2e8e64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e8e68: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x2e8e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x2e8e6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e8e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e8e70: 0xae007f7c  sw          $zero, 0x7F7C($s0)
    ctx->pc = 0x2e8e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32636), GPR_U32(ctx, 0));
    // 0x2e8e74: 0xae005c5c  sw          $zero, 0x5C5C($s0)
    ctx->pc = 0x2e8e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23644), GPR_U32(ctx, 0));
    // 0x2e8e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e7c: 0xae005c60  sw          $zero, 0x5C60($s0)
    ctx->pc = 0x2e8e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23648), GPR_U32(ctx, 0));
    // 0x2e8e80: 0xae027f5c  sw          $v0, 0x7F5C($s0)
    ctx->pc = 0x2e8e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32604), GPR_U32(ctx, 2));
    // 0x2e8e84: 0xc0ba618  jal         func_2E9860
    ctx->pc = 0x2E8E84u;
    SET_GPR_U32(ctx, 31, 0x2E8E8Cu);
    ctx->pc = 0x2E8E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E84u;
            // 0x2e8e88: 0xae037f68  sw          $v1, 0x7F68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9860u;
    if (runtime->hasFunction(0x2E9860u)) {
        auto targetFn = runtime->lookupFunction(0x2E9860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8E8Cu; }
        if (ctx->pc != 0x2E8E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E9860_0x2e9860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8E8Cu; }
        if (ctx->pc != 0x2E8E8Cu) { return; }
    }
    ctx->pc = 0x2E8E8Cu;
label_2e8e8c:
    // 0x2e8e8c: 0xc08d10e  jal         func_234438
    ctx->pc = 0x2E8E8Cu;
    SET_GPR_U32(ctx, 31, 0x2E8E94u);
    ctx->pc = 0x2E8E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E8Cu;
            // 0x2e8e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234438u;
    if (runtime->hasFunction(0x234438u)) {
        auto targetFn = runtime->lookupFunction(0x234438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8E94u; }
        if (ctx->pc != 0x2E8E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234438_0x234438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8E94u; }
        if (ctx->pc != 0x2E8E94u) { return; }
    }
    ctx->pc = 0x2E8E94u;
label_2e8e94:
    // 0x2e8e94: 0xc08e6f2  jal         func_239BC8
    ctx->pc = 0x2E8E94u;
    SET_GPR_U32(ctx, 31, 0x2E8E9Cu);
    ctx->pc = 0x2E8E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E94u;
            // 0x2e8e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239BC8u;
    if (runtime->hasFunction(0x239BC8u)) {
        auto targetFn = runtime->lookupFunction(0x239BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8E9Cu; }
        if (ctx->pc != 0x2E8E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239BC8_0x239bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8E9Cu; }
        if (ctx->pc != 0x2E8E9Cu) { return; }
    }
    ctx->pc = 0x2E8E9Cu;
label_2e8e9c:
    // 0x2e8e9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e8e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ea0: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x2e8ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2e8ea4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2e8ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e8ea8: 0xc08ce36  jal         func_2338D8
    ctx->pc = 0x2E8EA8u;
    SET_GPR_U32(ctx, 31, 0x2E8EB0u);
    ctx->pc = 0x2E8EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8EA8u;
            // 0x2e8eac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2338D8u;
    if (runtime->hasFunction(0x2338D8u)) {
        auto targetFn = runtime->lookupFunction(0x2338D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8EB0u; }
        if (ctx->pc != 0x2E8EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002338D8_0x2338d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8EB0u; }
        if (ctx->pc != 0x2E8EB0u) { return; }
    }
    ctx->pc = 0x2E8EB0u;
label_2e8eb0:
    // 0x2e8eb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e8eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8eb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8eb8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e8eb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8EC0u;
            // 0x2e8ec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8EC8u;
    ctx->pc = 0x2e8ec8u;
}
