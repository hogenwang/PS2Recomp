#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00270CC0
// Address: 0x270cc0 - 0x270e38
void sub_00270CC0_0x270cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270CC0_0x270cc0");
#endif

    switch (ctx->pc) {
        case 0x270d18u: goto label_270d18;
        case 0x270d2cu: goto label_270d2c;
        case 0x270d54u: goto label_270d54;
        case 0x270d78u: goto label_270d78;
        case 0x270da8u: goto label_270da8;
        case 0x270dd8u: goto label_270dd8;
        case 0x270de8u: goto label_270de8;
        case 0x270df8u: goto label_270df8;
        case 0x270e00u: goto label_270e00;
        default: break;
    }

    ctx->pc = 0x270cc0u;

    // 0x270cc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x270cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x270cc4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x270cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x270cc8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x270cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x270ccc: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x270cccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270cd0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x270cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x270cd4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x270cd4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270cd8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x270cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x270cdc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x270cdcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270ce0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x270ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x270ce4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x270ce4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270ce8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x270ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x270cec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x270cecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270cf0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x270cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x270cf4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x270cf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270cf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x270cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x270cfc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x270cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d00: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x270d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x270d04: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x270d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d08: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x270D08u;
    {
        const bool branch_taken_0x270d08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D08u;
        // 0x270d0c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d08) {
            ctx->pc = 0x270DC8u;
            goto label_270dc8;
        }
    }
    ctx->pc = 0x270D10u;
    // 0x270d10: 0xc09c2b8  jal         func_270AE0
    ctx->pc = 0x270D10u;
    SET_GPR_U32(ctx, 31, 0x270D18u);
    ctx->pc = 0x270D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D10u;
    // 0x270d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270AE0u, 0x270D10u, 0x270D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D18u;
label_270d18:
    // 0x270d18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x270d18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d1c: 0x640002a  bltz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x270D1Cu;
    {
        const bool branch_taken_0x270d1c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x270d1c) {
            ctx->pc = 0x270DC8u;
            goto label_270dc8;
        }
    }
    ctx->pc = 0x270D24u;
    // 0x270d24: 0xc098552  jal         func_261548
    ctx->pc = 0x270D24u;
    SET_GPR_U32(ctx, 31, 0x270D2Cu);
    ctx->pc = 0x270D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D24u;
    // 0x270d28: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x270D24u, 0x270D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D2Cu;
label_270d2c:
    // 0x270d2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x270d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d30: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x270D30u;
    {
        const bool branch_taken_0x270d30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x270D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D30u;
        // 0x270d34: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d30) {
            ctx->pc = 0x270D44u;
            goto label_270d44;
        }
    }
    ctx->pc = 0x270D38u;
    // 0x270d38: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x270d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x270d3c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x270D3Cu;
    {
        const bool branch_taken_0x270d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D3Cu;
        // 0x270d40: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d3c) {
            ctx->pc = 0x270DBCu;
            goto label_270dbc;
        }
    }
    ctx->pc = 0x270D44u;
label_270d44:
    // 0x270d44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x270d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d48: 0x24c69d18  addiu       $a2, $a2, -0x62E8
    ctx->pc = 0x270d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941976));
    // 0x270d4c: 0xc0985b8  jal         func_2616E0
    ctx->pc = 0x270D4Cu;
    SET_GPR_U32(ctx, 31, 0x270D54u);
    ctx->pc = 0x270D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D4Cu;
    // 0x270d50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2616E0u, 0x270D4Cu, 0x270D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D54u;
label_270d54:
    // 0x270d54: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x270d54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d58: 0x6810004  bgez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x270D58u;
    {
        const bool branch_taken_0x270d58 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x270D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D58u;
        // 0x270d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d58) {
            ctx->pc = 0x270D6Cu;
            goto label_270d6c;
        }
    }
    ctx->pc = 0x270D60u;
    // 0x270d60: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x270d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x270d64: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x270D64u;
    {
        const bool branch_taken_0x270d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D64u;
        // 0x270d68: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d64) {
            ctx->pc = 0x270DBCu;
            goto label_270dbc;
        }
    }
    ctx->pc = 0x270D6Cu;
label_270d6c:
    // 0x270d6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x270d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d70: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x270D70u;
    SET_GPR_U32(ctx, 31, 0x270D78u);
    ctx->pc = 0x270D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D70u;
    // 0x270d74: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x270D70u, 0x270D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D78u;
label_270d78:
    // 0x270d78: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x270d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x270d7c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x270d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x270d80: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x270d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x270d84: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x270d84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x270d88: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x270d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
    // 0x270d8c: 0x24840af0  addiu       $a0, $a0, 0xAF0
    ctx->pc = 0x270d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2800));
    // 0x270d90: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x270d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d94: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x270d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d98: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x270d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d9c: 0x25299d38  addiu       $t1, $t1, -0x62C8
    ctx->pc = 0x270d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942008));
    // 0x270da0: 0xc0985d0  jal         func_261740
    ctx->pc = 0x270DA0u;
    SET_GPR_U32(ctx, 31, 0x270DA8u);
    ctx->pc = 0x270DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270DA0u;
    // 0x270da4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261740u, 0x270DA0u, 0x270DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DA8u;
label_270da8:
    // 0x270da8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x270da8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270dac: 0x6a10015  bgez        $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x270DACu;
    {
        const bool branch_taken_0x270dac = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x270DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DACu;
        // 0x270db0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270dac) {
            ctx->pc = 0x270E04u;
            goto label_270e04;
        }
    }
    ctx->pc = 0x270DB4u;
    // 0x270db4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x270db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x270db8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x270db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_270dbc:
    // 0x270dbc: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x270dbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x270dc0: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x270dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x270dc4: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x270dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_270dc8:
    // 0x270dc8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x270DC8u;
    {
        const bool branch_taken_0x270dc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x270dc8) {
            ctx->pc = 0x270DD8u;
            goto label_270dd8;
        }
    }
    ctx->pc = 0x270DD0u;
    // 0x270dd0: 0xc098560  jal         func_261580
    ctx->pc = 0x270DD0u;
    SET_GPR_U32(ctx, 31, 0x270DD8u);
    ctx->pc = 0x270DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270DD0u;
    // 0x270dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x270DD0u, 0x270DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DD8u;
label_270dd8:
    // 0x270dd8: 0x6800003  bltz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x270DD8u;
    {
        const bool branch_taken_0x270dd8 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x270dd8) {
            ctx->pc = 0x270DE8u;
            goto label_270de8;
        }
    }
    ctx->pc = 0x270DE0u;
    // 0x270de0: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x270DE0u;
    SET_GPR_U32(ctx, 31, 0x270DE8u);
    ctx->pc = 0x270DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270DE0u;
    // 0x270de4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x270DE0u, 0x270DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DE8u;
label_270de8:
    // 0x270de8: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x270DE8u;
    {
        const bool branch_taken_0x270de8 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x270DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DE8u;
        // 0x270dec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270de8) {
            ctx->pc = 0x270E04u;
            goto label_270e04;
        }
    }
    ctx->pc = 0x270DF0u;
    // 0x270df0: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x270DF0u;
    SET_GPR_U32(ctx, 31, 0x270DF8u);
    ctx->pc = 0x270DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270DF0u;
    // 0x270df4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x270DF0u, 0x270DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DF8u;
label_270df8:
    // 0x270df8: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x270DF8u;
    SET_GPR_U32(ctx, 31, 0x270E00u);
    ctx->pc = 0x270DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270DF8u;
    // 0x270dfc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x270DF8u, 0x270E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E00u;
label_270e00:
    // 0x270e00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x270e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270e04:
    // 0x270e04: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x270e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x270e08: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x270e08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x270e0c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x270e0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x270e10: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x270e10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x270e14: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x270e14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x270e18: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x270e18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270e1c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x270e1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270e20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x270e20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270e24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x270e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270e28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x270e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x270E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E2Cu;
        // 0x270e30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270E34u;
    // 0x270e34: 0x0  nop
    ctx->pc = 0x270e34u;
    // NOP
    if (ctx->pc == 0x270e34u) { ctx->pc = 0x270e38u; }
}
