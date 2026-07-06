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

// Function: sub_00285D20
// Address: 0x285d20 - 0x2863a8
void sub_00285D20_0x285d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285D20_0x285d20");
#endif

    switch (ctx->pc) {
        case 0x285d8cu: goto label_285d8c;
        case 0x285da8u: goto label_285da8;
        case 0x285dc0u: goto label_285dc0;
        case 0x285decu: goto label_285dec;
        case 0x285e20u: goto label_285e20;
        case 0x285e54u: goto label_285e54;
        case 0x285e78u: goto label_285e78;
        case 0x285e98u: goto label_285e98;
        case 0x285f1cu: goto label_285f1c;
        case 0x285f88u: goto label_285f88;
        case 0x285fa8u: goto label_285fa8;
        case 0x285fbcu: goto label_285fbc;
        case 0x286028u: goto label_286028;
        case 0x286080u: goto label_286080;
        case 0x2860a8u: goto label_2860a8;
        case 0x28610cu: goto label_28610c;
        case 0x28611cu: goto label_28611c;
        case 0x28612cu: goto label_28612c;
        case 0x286140u: goto label_286140;
        case 0x286194u: goto label_286194;
        case 0x2861a4u: goto label_2861a4;
        case 0x2861b4u: goto label_2861b4;
        case 0x2861c8u: goto label_2861c8;
        case 0x286240u: goto label_286240;
        case 0x286280u: goto label_286280;
        case 0x2862c0u: goto label_2862c0;
        case 0x2862e0u: goto label_2862e0;
        case 0x2862f4u: goto label_2862f4;
        case 0x2862f8u: goto label_2862f8;
        case 0x286348u: goto label_286348;
        case 0x286364u: goto label_286364;
        default: break;
    }

    ctx->pc = 0x285d20u;

    // 0x285d20: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x285d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x285d24: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x285d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x285d28: 0xffb100b0  sd          $s1, 0xB0($sp)
    ctx->pc = 0x285d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
    // 0x285d2c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x285d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d30: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x285d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x285d34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x285d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d38: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x285d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x285d3c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x285d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d40: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x285d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x285d44: 0xffb70110  sd          $s7, 0x110($sp)
    ctx->pc = 0x285d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 23));
    // 0x285d48: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x285d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x285d4c: 0xffb500f0  sd          $s5, 0xF0($sp)
    ctx->pc = 0x285d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 21));
    // 0x285d50: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x285d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x285d54: 0xffb300d0  sd          $s3, 0xD0($sp)
    ctx->pc = 0x285d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 19));
    // 0x285d58: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x285d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x285d5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x285d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x285d60: 0x10600184  beqz        $v1, . + 4 + (0x184 << 2)
    ctx->pc = 0x285D60u;
    {
        const bool branch_taken_0x285d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D60u;
        // 0x285d64: 0xafa60024  sw          $a2, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d60) {
            ctx->pc = 0x286374u;
            goto label_286374;
        }
    }
    ctx->pc = 0x285D68u;
    // 0x285d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285d6c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x285D6Cu;
    {
        const bool branch_taken_0x285d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x285D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D6Cu;
        // 0x285d70: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d6c) {
            ctx->pc = 0x285D84u;
            goto label_285d84;
        }
    }
    ctx->pc = 0x285D74u;
    // 0x285d74: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x285d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x285d78: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x285d78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285d7c: 0x1060017e  beqz        $v1, . + 4 + (0x17E << 2)
    ctx->pc = 0x285D7Cu;
    {
        const bool branch_taken_0x285d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D7Cu;
        // 0x285d80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d7c) {
            ctx->pc = 0x286378u;
            goto label_286378;
        }
    }
    ctx->pc = 0x285D84u;
label_285d84:
    // 0x285d84: 0xc0a1c04  jal         func_287010
    ctx->pc = 0x285D84u;
    SET_GPR_U32(ctx, 31, 0x285D8Cu);
    ctx->pc = 0x285D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285D84u;
    // 0x285d88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287010u, 0x285D84u, 0x285D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285D8Cu;
label_285d8c:
    // 0x285d8c: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x285D8Cu;
    {
        const bool branch_taken_0x285d8c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x285d8c) {
            ctx->pc = 0x285D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285D8Cu;
            // 0x285d90: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285DC8u;
            goto label_285dc8;
        }
    }
    ctx->pc = 0x285D94u;
    // 0x285d94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x285d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285d98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x285D98u;
    {
        const bool branch_taken_0x285d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D98u;
        // 0x285d9c: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d98) {
            ctx->pc = 0x285DB0u;
            goto label_285db0;
        }
    }
    ctx->pc = 0x285DA0u;
    // 0x285da0: 0xc0a1b1c  jal         func_286C70
    ctx->pc = 0x285DA0u;
    SET_GPR_U32(ctx, 31, 0x285DA8u);
    ctx->pc = 0x285DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285DA0u;
    // 0x285da4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286C70u, 0x285DA0u, 0x285DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285DA8u;
label_285da8:
    // 0x285da8: 0x10400173  beqz        $v0, . + 4 + (0x173 << 2)
    ctx->pc = 0x285DA8u;
    {
        const bool branch_taken_0x285da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DA8u;
        // 0x285dac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285da8) {
            ctx->pc = 0x286378u;
            goto label_286378;
        }
    }
    ctx->pc = 0x285DB0u;
label_285db0:
    // 0x285db0: 0x1220016e  beqz        $s1, . + 4 + (0x16E << 2)
    ctx->pc = 0x285DB0u;
    {
        const bool branch_taken_0x285db0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DB0u;
        // 0x285db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285db0) {
            ctx->pc = 0x28636Cu;
            goto label_28636c;
        }
    }
    ctx->pc = 0x285DB8u;
    // 0x285db8: 0xc0a1b6a  jal         func_286DA8
    ctx->pc = 0x285DB8u;
    SET_GPR_U32(ctx, 31, 0x285DC0u);
    ctx->pc = 0x285DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285DB8u;
    // 0x285dbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286DA8u, 0x285DB8u, 0x285DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285DC0u;
label_285dc0:
    // 0x285dc0: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x285DC0u;
    {
        const bool branch_taken_0x285dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DC0u;
        // 0x285dc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dc0) {
            ctx->pc = 0x286378u;
            goto label_286378;
        }
    }
    ctx->pc = 0x285DC8u;
label_285dc8:
    // 0x285dc8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x285dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x285dcc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x285dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x285dd0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x285dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x285dd4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x285dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x285dd8: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x285dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x285ddc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x285ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x285de0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x285de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x285de4: 0x443818  mult        $a3, $v0, $a0
    ctx->pc = 0x285de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x285de8: 0x24e30018  addiu       $v1, $a3, 0x18
    ctx->pc = 0x285de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_285dec:
    // 0x285dec: 0x24e2002c  addiu       $v0, $a3, 0x2C
    ctx->pc = 0x285decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 44));
    // 0x285df0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x285df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x285df4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x285df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x285df8: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x285df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x285dfc: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x285DFCu;
    {
        const bool branch_taken_0x285dfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x285E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DFCu;
        // 0x285e00: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dfc) {
            ctx->pc = 0x285E10u;
            goto label_285e10;
        }
    }
    ctx->pc = 0x285E04u;
    // 0x285e04: 0x24e20040  addiu       $v0, $a3, 0x40
    ctx->pc = 0x285e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x285e08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x285E08u;
    {
        const bool branch_taken_0x285e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E08u;
        // 0x285e0c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e08) {
            ctx->pc = 0x285E14u;
            goto label_285e14;
        }
    }
    ctx->pc = 0x285E10u;
label_285e10:
    // 0x285e10: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x285e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285e14:
    // 0x285e14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x285e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285e18: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x285E18u;
    SET_GPR_U32(ctx, 31, 0x285E20u);
    ctx->pc = 0x285E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285E18u;
    // 0x285e1c: 0xffa00048  sd          $zero, 0x48($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286808u, 0x285E18u, 0x285E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E20u;
label_285e20:
    // 0x285e20: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x285e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x285e24: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x285e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x285e28: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x285e28u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x285e2c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x285e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x285e30: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x285e30u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x285e34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x285e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285e38: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x285e38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x285e3c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x285e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x285e40: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x285e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x285e44: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x285e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285e48: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x285e48u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x285e4c: 0xc0a1cd2  jal         func_287348
    ctx->pc = 0x285E4Cu;
    SET_GPR_U32(ctx, 31, 0x285E54u);
    ctx->pc = 0x285E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285E4Cu;
    // 0x285e50: 0xafa60028  sw          $a2, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287348u, 0x285E4Cu, 0x285E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E54u;
label_285e54:
    // 0x285e54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x285e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x285e58: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x285e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x285e5c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x285e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x285e60: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x285e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x285e64: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x285e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x285e68: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x285e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285e6c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x285e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x285e70: 0xc0a1cd2  jal         func_287348
    ctx->pc = 0x285E70u;
    SET_GPR_U32(ctx, 31, 0x285E78u);
    ctx->pc = 0x285E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285E70u;
    // 0x285e74: 0x8fa60028  lw          $a2, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287348u, 0x285E70u, 0x285E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E78u;
label_285e78:
    // 0x285e78: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x285e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285e7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x285e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285e80: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x285e80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x285e84: 0x8cb10004  lw          $s1, 0x4($a1)
    ctx->pc = 0x285e84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x285e88: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x285e88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x285e8c: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x285e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x285e90: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x285E90u;
    SET_GPR_U32(ctx, 31, 0x285E98u);
    ctx->pc = 0x285E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285E90u;
    // 0x285e94: 0xafa70050  sw          $a3, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x285E90u, 0x285E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E98u;
label_285e98:
    // 0x285e98: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x285e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285e9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x285e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285ea0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x285ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285ea4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x285ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x285ea8: 0x2229823  subu        $s3, $s1, $v0
    ctx->pc = 0x285ea8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x285eac: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x285eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x285eb0: 0x13a0c0  sll         $s4, $s3, 3
    ctx->pc = 0x285eb0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x285eb4: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x285eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x285eb8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x285eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x285ebc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x285ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x285ec0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x285ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x285ec4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x285ec8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x285ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x285ecc: 0xd41821  addu        $v1, $a2, $s4
    ctx->pc = 0x285eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x285ed0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x285ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285ed4: 0x8fa70054  lw          $a3, 0x54($sp)
    ctx->pc = 0x285ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x285ed8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x285ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x285edc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x285edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x285ee0: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x285ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x285ee4: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x285ee4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x285ee8: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x285EE8u;
    {
        const bool branch_taken_0x285ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x285EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EE8u;
        // 0x285eec: 0xffa40040  sd          $a0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ee8) {
            ctx->pc = 0x285EF8u;
            goto label_285ef8;
        }
    }
    ctx->pc = 0x285EF0u;
    // 0x285ef0: 0xdc63fff0  ld          $v1, -0x10($v1)
    ctx->pc = 0x285ef0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x285ef4: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x285ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
label_285ef8:
    // 0x285ef8: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x285ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x285efc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x285efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x285f00: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x285f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x285f04: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x285f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x285f08: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x285f08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x285f0c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x285F0Cu;
    {
        const bool branch_taken_0x285f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F0Cu;
        // 0x285f10: 0xc28821  addu        $s1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f0c) {
            ctx->pc = 0x285F2Cu;
            goto label_285f2c;
        }
    }
    ctx->pc = 0x285F14u;
    // 0x285f14: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x285F14u;
    SET_GPR_U32(ctx, 31, 0x285F1Cu);
    ctx->pc = 0x285F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285F14u;
    // 0x285f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x285F14u, 0x285F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285F1Cu;
label_285f1c:
    // 0x285f1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x285F1Cu;
    {
        const bool branch_taken_0x285f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F1Cu;
        // 0x285f20: 0x8fa70024  lw          $a3, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f1c) {
            ctx->pc = 0x285F34u;
            goto label_285f34;
        }
    }
    ctx->pc = 0x285F24u;
    // 0x285f24: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x285F24u;
    {
        const bool branch_taken_0x285f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F24u;
        // 0x285f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f24) {
            ctx->pc = 0x286378u;
            goto label_286378;
        }
    }
    ctx->pc = 0x285F2Cu;
label_285f2c:
    // 0x285f2c: 0x12000111  beqz        $s0, . + 4 + (0x111 << 2)
    ctx->pc = 0x285F2Cu;
    {
        const bool branch_taken_0x285f2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F2Cu;
        // 0x285f30: 0x8fa70024  lw          $a3, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f2c) {
            ctx->pc = 0x286374u;
            goto label_286374;
        }
    }
    ctx->pc = 0x285F34u;
label_285f34:
    // 0x285f34: 0x2685fff8  addiu       $a1, $s4, -0x8
    ctx->pc = 0x285f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
    // 0x285f38: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x285f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285f3c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x285f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x285f40: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x285f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x285f44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x285f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x285f48: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x285f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x285f4c: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x285f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x285f50: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x285f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x285f54: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x285f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x285f58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x285f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x285f5c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x285f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x285f60: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x285f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x285f64: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x285f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x285f68: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x285f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x285f6c: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x285f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x285f70: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x285f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x285f74: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x285f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x285f78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x285F78u;
    {
        const bool branch_taken_0x285f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F78u;
        // 0x285f7c: 0x8fa7002c  lw          $a3, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f78) {
            ctx->pc = 0x285F98u;
            goto label_285f98;
        }
    }
    ctx->pc = 0x285F80u;
    // 0x285f80: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x285F80u;
    SET_GPR_U32(ctx, 31, 0x285F88u);
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x285F80u, 0x285F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285F88u;
label_285f88:
    // 0x285f88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x285F88u;
    {
        const bool branch_taken_0x285f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F88u;
        // 0x285f8c: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f88) {
            ctx->pc = 0x285FA0u;
            goto label_285fa0;
        }
    }
    ctx->pc = 0x285F90u;
    // 0x285f90: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x285F90u;
    {
        const bool branch_taken_0x285f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F90u;
        // 0x285f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f90) {
            ctx->pc = 0x286378u;
            goto label_286378;
        }
    }
    ctx->pc = 0x285F98u;
label_285f98:
    // 0x285f98: 0x10e000f6  beqz        $a3, . + 4 + (0xF6 << 2)
    ctx->pc = 0x285F98u;
    {
        const bool branch_taken_0x285f98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F98u;
        // 0x285f9c: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f98) {
            ctx->pc = 0x286374u;
            goto label_286374;
        }
    }
    ctx->pc = 0x285FA0u;
label_285fa0:
    // 0x285fa0: 0xc0a1c04  jal         func_287010
    ctx->pc = 0x285FA0u;
    SET_GPR_U32(ctx, 31, 0x285FA8u);
    ctx->pc = 0x285FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285FA0u;
    // 0x285fa4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287010u, 0x285FA0u, 0x285FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285FA8u;
label_285fa8:
    // 0x285fa8: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x285FA8u;
    {
        const bool branch_taken_0x285fa8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x285FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FA8u;
        // 0x285fac: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fa8) {
            ctx->pc = 0x285FE4u;
            goto label_285fe4;
        }
    }
    ctx->pc = 0x285FB0u;
    // 0x285fb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x285fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285fb4: 0xc0a168c  jal         func_285A30
    ctx->pc = 0x285FB4u;
    SET_GPR_U32(ctx, 31, 0x285FBCu);
    ctx->pc = 0x285FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285FB4u;
    // 0x285fb8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285A30u, 0x285FB4u, 0x285FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285FBCu;
label_285fbc:
    // 0x285fbc: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x285FBCu;
    {
        const bool branch_taken_0x285fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FBCu;
        // 0x285fc0: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fbc) {
            ctx->pc = 0x286374u;
            goto label_286374;
        }
    }
    ctx->pc = 0x285FC4u;
    // 0x285fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285fc8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x285fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x285fcc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x285fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x285fd0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x285fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x285fd4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x285fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x285fd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x285fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x285fdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x285FDCu;
    {
        const bool branch_taken_0x285fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FDCu;
        // 0x285fe0: 0xfc62fff8  sd          $v0, -0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4294967288), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fdc) {
            ctx->pc = 0x285FF0u;
            goto label_285ff0;
        }
    }
    ctx->pc = 0x285FE4u;
label_285fe4:
    // 0x285fe4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x285fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x285fe8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x285fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x285fec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x285fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_285ff0:
    // 0x285ff0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x285ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x285ff4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x285ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x285ff8: 0xafb3007c  sw          $s3, 0x7C($sp)
    ctx->pc = 0x285ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
    // 0x285ffc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x285ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286000: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x286000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x286004: 0x1a6000ce  blez        $s3, . + 4 + (0xCE << 2)
    ctx->pc = 0x286004u;
    {
        const bool branch_taken_0x286004 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x286008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286004u;
        // 0x286008: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286004) {
            ctx->pc = 0x286340u;
            goto label_286340;
        }
    }
    ctx->pc = 0x28600Cu;
    // 0x28600c: 0xdfa50048  ld          $a1, 0x48($sp)
    ctx->pc = 0x28600cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x286010: 0xdfa70040  ld          $a3, 0x40($sp)
    ctx->pc = 0x286010u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286014: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x286014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x286018: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x286018u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x28601c: 0xffa50098  sd          $a1, 0x98($sp)
    ctx->pc = 0x28601cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 5));
    // 0x286020: 0xffa70090  sd          $a3, 0x90($sp)
    ctx->pc = 0x286020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 7));
    // 0x286024: 0x0  nop
    ctx->pc = 0x286024u;
    // NOP
label_286028:
    // 0x286028: 0x26228000  addiu       $v0, $s1, -0x8000
    ctx->pc = 0x286028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
    // 0x28602c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28602cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286030: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x286030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x286034: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x286034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x286038: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x286038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x28603c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x28603cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x286040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286044: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x286044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x286048: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x286048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x28604c: 0xdfa50040  ld          $a1, 0x40($sp)
    ctx->pc = 0x28604cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286050: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x286050u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x286054: 0xffa30068  sd          $v1, 0x68($sp)
    ctx->pc = 0x286054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 3));
    // 0x286058: 0xdc847ff8  ld          $a0, 0x7FF8($a0)
    ctx->pc = 0x286058u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 32760)));
    // 0x28605c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28605Cu;
    {
        const bool branch_taken_0x28605c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x286060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28605Cu;
        // 0x286060: 0xffa40070  sd          $a0, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28605c) {
            ctx->pc = 0x286070u;
            goto label_286070;
        }
    }
    ctx->pc = 0x286064u;
    // 0x286064: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x286064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x286068: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x286068u;
    {
        const bool branch_taken_0x286068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286068u;
        // 0x28606c: 0xffa70060  sd          $a3, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286068) {
            ctx->pc = 0x286084u;
            goto label_286084;
        }
    }
    ctx->pc = 0x286070u;
label_286070:
    // 0x286070: 0xdfa40068  ld          $a0, 0x68($sp)
    ctx->pc = 0x286070u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x286074: 0xdfa50070  ld          $a1, 0x70($sp)
    ctx->pc = 0x286074u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x286078: 0xc0a2d60  jal         func_28B580
    ctx->pc = 0x286078u;
    SET_GPR_U32(ctx, 31, 0x286080u);
    ctx->pc = 0x28607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286078u;
    // 0x28607c: 0xdfa60040  ld          $a2, 0x40($sp) (Delay Slot)
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B580u, 0x286078u, 0x286080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286080u;
label_286080:
    // 0x286080: 0xffa20060  sd          $v0, 0x60($sp)
    ctx->pc = 0x286080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 2));
label_286084:
    // 0x286084: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x286084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x286088: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x286088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x28608c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28608cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x286090: 0xafb10084  sw          $s1, 0x84($sp)
    ctx->pc = 0x286090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 17));
    // 0x286094: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x286094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x286098: 0xafb00088  sw          $s0, 0x88($sp)
    ctx->pc = 0x286098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 16));
    // 0x28609c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28609Cu;
    {
        const bool branch_taken_0x28609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2860A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28609Cu;
        // 0x2860a0: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28609c) {
            ctx->pc = 0x2860D8u;
            goto label_2860d8;
        }
    }
    ctx->pc = 0x2860A4u;
    // 0x2860a4: 0x0  nop
    ctx->pc = 0x2860a4u;
    // NOP
label_2860a8:
    // 0x2860a8: 0x265102b  sltu        $v0, $s3, $a1
    ctx->pc = 0x2860a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2860ac: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2860ACu;
    {
        const bool branch_taken_0x2860ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2860B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860ACu;
        // 0x2860b0: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860ac) {
            ctx->pc = 0x286224u;
            goto label_286224;
        }
    }
    ctx->pc = 0x2860B4u;
    // 0x2860b4: 0x16650006  bne         $s3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2860B4u;
    {
        const bool branch_taken_0x2860b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 5));
        ctx->pc = 0x2860B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860B4u;
        // 0x2860b8: 0xdfa40060  ld          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860b4) {
            ctx->pc = 0x2860D0u;
            goto label_2860d0;
        }
    }
    ctx->pc = 0x2860BCu;
    // 0x2860bc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2860bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2860c0: 0xdc627ff0  ld          $v0, 0x7FF0($v1)
    ctx->pc = 0x2860c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 32752)));
    // 0x2860c4: 0x5e102b  sltu        $v0, $v0, $fp
    ctx->pc = 0x2860c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x2860c8: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2860C8u;
    {
        const bool branch_taken_0x2860c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2860CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860C8u;
        // 0x2860cc: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860c8) {
            ctx->pc = 0x286224u;
            goto label_286224;
        }
    }
    ctx->pc = 0x2860D0u;
label_2860d0:
    // 0x2860d0: 0x6484ffff  daddiu      $a0, $a0, -0x1
    ctx->pc = 0x2860d0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x2860d4: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x2860d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
label_2860d8:
    // 0x2860d8: 0xdfa50060  ld          $a1, 0x60($sp)
    ctx->pc = 0x2860d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2860dc: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x2860dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x2860e0: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x2860e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x2860e4: 0xdfa70048  ld          $a3, 0x48($sp)
    ctx->pc = 0x2860e4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2860e8: 0x5103e  dsrl32      $v0, $a1, 0
    ctx->pc = 0x2860e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2860ec: 0xb5b024  and         $s6, $a1, $s5
    ctx->pc = 0x2860ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & GPR_U64(ctx, 21));
    // 0x2860f0: 0x55b824  and         $s7, $v0, $s5
    ctx->pc = 0x2860f0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2860f4: 0xf58024  and         $s0, $a3, $s5
    ctx->pc = 0x2860f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & GPR_U64(ctx, 21));
    // 0x2860f8: 0xdfa20098  ld          $v0, 0x98($sp)
    ctx->pc = 0x2860f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2860fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2860fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286100: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x286100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286104: 0xc048082  jal         func_120208
    ctx->pc = 0x286104u;
    SET_GPR_U32(ctx, 31, 0x28610Cu);
    ctx->pc = 0x286108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286104u;
    // 0x286108: 0x558824  and         $s1, $v0, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x286104u, 0x28610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28610Cu;
label_28610c:
    // 0x28610c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28610cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286114: 0xc048082  jal         func_120208
    ctx->pc = 0x286114u;
    SET_GPR_U32(ctx, 31, 0x28611Cu);
    ctx->pc = 0x286118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286114u;
    // 0x286118: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x286114u, 0x28611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28611Cu;
label_28611c:
    // 0x28611c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x28611cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286120: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x286120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286124: 0xc048082  jal         func_120208
    ctx->pc = 0x286124u;
    SET_GPR_U32(ctx, 31, 0x28612Cu);
    ctx->pc = 0x286128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286124u;
    // 0x286128: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x286124u, 0x28612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28612Cu;
label_28612c:
    // 0x28612c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28612cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286134: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x286134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286138: 0xc048082  jal         func_120208
    ctx->pc = 0x286138u;
    SET_GPR_U32(ctx, 31, 0x286140u);
    ctx->pc = 0x28613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286138u;
    // 0x28613c: 0x250902d  daddu       $s2, $s2, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x286138u, 0x286140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286140u;
label_286140:
    // 0x286140: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x286140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286144: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x286144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x286148: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x286148u;
    {
        const bool branch_taken_0x286148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286148u;
        // 0x28614c: 0x2551824  and         $v1, $s2, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286148) {
            ctx->pc = 0x28615Cu;
            goto label_28615c;
        }
    }
    ctx->pc = 0x286150u;
    // 0x286150: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x286150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x286154: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x286154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x286158: 0x262982d  daddu       $s3, $s3, $v0
    ctx->pc = 0x286158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 2));
label_28615c:
    // 0x28615c: 0xdfa40040  ld          $a0, 0x40($sp)
    ctx->pc = 0x28615cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286160: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x286160u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286164: 0x12103e  dsrl32      $v0, $s2, 0
    ctx->pc = 0x286164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x286168: 0x3d0f02d  daddu       $fp, $fp, $s0
    ctx->pc = 0x286168u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 16));
    // 0x28616c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x28616cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x286170: 0x3d0182b  sltu        $v1, $fp, $s0
    ctx->pc = 0x286170u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x286174: 0xdfa70090  ld          $a3, 0x90($sp)
    ctx->pc = 0x286174u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x286178: 0x958024  and         $s0, $a0, $s5
    ctx->pc = 0x286178u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
    // 0x28617c: 0x262982d  daddu       $s3, $s3, $v0
    ctx->pc = 0x28617cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 2));
    // 0x286180: 0xf58824  and         $s1, $a3, $s5
    ctx->pc = 0x286180u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & GPR_U64(ctx, 21));
    // 0x286184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x286184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286188: 0x263982d  daddu       $s3, $s3, $v1
    ctx->pc = 0x286188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 3));
    // 0x28618c: 0xc048082  jal         func_120208
    ctx->pc = 0x28618Cu;
    SET_GPR_U32(ctx, 31, 0x286194u);
    ctx->pc = 0x286190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28618Cu;
    // 0x286190: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x28618Cu, 0x286194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286194u;
label_286194:
    // 0x286194: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x286194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28619c: 0xc048082  jal         func_120208
    ctx->pc = 0x28619Cu;
    SET_GPR_U32(ctx, 31, 0x2861A4u);
    ctx->pc = 0x2861A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28619Cu;
    // 0x2861a0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x28619Cu, 0x2861A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2861A4u;
label_2861a4:
    // 0x2861a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2861a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2861a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2861a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2861ac: 0xc048082  jal         func_120208
    ctx->pc = 0x2861ACu;
    SET_GPR_U32(ctx, 31, 0x2861B4u);
    ctx->pc = 0x2861B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2861ACu;
    // 0x2861b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2861ACu, 0x2861B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2861B4u;
label_2861b4:
    // 0x2861b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2861b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2861b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2861b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2861bc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2861bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2861c0: 0xc048082  jal         func_120208
    ctx->pc = 0x2861C0u;
    SET_GPR_U32(ctx, 31, 0x2861C8u);
    ctx->pc = 0x2861C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2861C0u;
    // 0x2861c4: 0x250902d  daddu       $s2, $s2, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2861C0u, 0x2861C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2861C8u;
label_2861c8:
    // 0x2861c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2861c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2861cc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2861ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2861d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2861D0u;
    {
        const bool branch_taken_0x2861d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2861D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861D0u;
        // 0x2861d4: 0x12103e  dsrl32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2861d0) {
            ctx->pc = 0x2861E8u;
            goto label_2861e8;
        }
    }
    ctx->pc = 0x2861D8u;
    // 0x2861d8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2861d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2861dc: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x2861dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x2861e0: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x2861e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2861e4: 0x12103e  dsrl32      $v0, $s2, 0
    ctx->pc = 0x2861e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> (32 + 0));
label_2861e8:
    // 0x2861e8: 0x2551824  and         $v1, $s2, $s5
    ctx->pc = 0x2861e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 21));
    // 0x2861ec: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x2861ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2861f0: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x2861f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2861f4: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x2861f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2861f8: 0x290a02d  daddu       $s4, $s4, $s0
    ctx->pc = 0x2861f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2861fc: 0xdfa20070  ld          $v0, 0x70($sp)
    ctx->pc = 0x2861fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x286200: 0xdfa70068  ld          $a3, 0x68($sp)
    ctx->pc = 0x286200u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x286204: 0x54282f  dsubu       $a1, $v0, $s4
    ctx->pc = 0x286204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 20));
    // 0x286208: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x286208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x28620c: 0x82882d  daddu       $s1, $a0, $v0
    ctx->pc = 0x28620cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x286210: 0xdfa40070  ld          $a0, 0x70($sp)
    ctx->pc = 0x286210u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x286214: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x286214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x286218: 0x223882d  daddu       $s1, $s1, $v1
    ctx->pc = 0x286218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x28621c: 0x10f1ffa2  beq         $a3, $s1, . + 4 + (-0x5E << 2)
    ctx->pc = 0x28621Cu;
    {
        const bool branch_taken_0x28621c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 17));
        ctx->pc = 0x286220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28621Cu;
        // 0x286220: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28621c) {
            ctx->pc = 0x2860A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2860a8;
        }
    }
    ctx->pc = 0x286224u;
label_286224:
    // 0x286224: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x286224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x286228: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x286228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28622c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x28622cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x286230: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x286230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286234: 0xdfa70060  ld          $a3, 0x60($sp)
    ctx->pc = 0x286234u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x286238: 0xc0a22e0  jal         func_288B80
    ctx->pc = 0x286238u;
    SET_GPR_U32(ctx, 31, 0x286240u);
    ctx->pc = 0x28623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286238u;
    // 0x28623c: 0x8fb00058  lw          $s0, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B80u, 0x286238u, 0x286240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286240u;
label_286240:
    // 0x286240: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x286240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x286244: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x286244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x286248: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x286248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28624c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x28624cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x286250: 0x1a000013  blez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x286250u;
    {
        const bool branch_taken_0x286250 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x286254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286250u;
        // 0x286254: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286250) {
            ctx->pc = 0x2862A0u;
            goto label_2862a0;
        }
    }
    ctx->pc = 0x286258u;
    // 0x286258: 0x8fa7002c  lw          $a3, 0x2C($sp)
    ctx->pc = 0x286258u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x28625c: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x28625cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x286260: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x286260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x286264: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x286264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x286268: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x286268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28626c: 0xdc43fff8  ld          $v1, -0x8($v0)
    ctx->pc = 0x28626cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x286270: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x286270u;
    {
        const bool branch_taken_0x286270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286270u;
        // 0x286274: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286270) {
            ctx->pc = 0x2862A4u;
            goto label_2862a4;
        }
    }
    ctx->pc = 0x286278u;
    // 0x286278: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x286278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x28627c: 0x0  nop
    ctx->pc = 0x28627cu;
    // NOP
label_286280:
    // 0x286280: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x286280u;
    {
        const bool branch_taken_0x286280 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x286284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286280u;
        // 0x286284: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286280) {
            ctx->pc = 0x2862A4u;
            goto label_2862a4;
        }
    }
    ctx->pc = 0x286288u;
    // 0x286288: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x286288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28628c: 0xdc43fff8  ld          $v1, -0x8($v0)
    ctx->pc = 0x28628cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x286290: 0x5060fffb  beql        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x286290u;
    {
        const bool branch_taken_0x286290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x286290) {
            ctx->pc = 0x286294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286290u;
            // 0x286294: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_286280;
        }
    }
    ctx->pc = 0x286298u;
    // 0x286298: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x286298u;
    {
        const bool branch_taken_0x286298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286298u;
        // 0x28629c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286298) {
            ctx->pc = 0x2862A8u;
            goto label_2862a8;
        }
    }
    ctx->pc = 0x2862A0u;
label_2862a0:
    // 0x2862a0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2862a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2862a4:
    // 0x2862a4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2862a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2862a8:
    // 0x2862a8: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x2862a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x2862ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2862acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2862b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2862b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2862b4: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x2862b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2862b8: 0xc0a16fa  jal         func_285BE8
    ctx->pc = 0x2862B8u;
    SET_GPR_U32(ctx, 31, 0x2862C0u);
    ctx->pc = 0x2862BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2862B8u;
    // 0x2862bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285BE8u, 0x2862B8u, 0x2862C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2862C0u;
label_2862c0:
    // 0x2862c0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2862c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2862c4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2862c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2862c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2862c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2862cc: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2862ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2862d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2862d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2862d4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2862d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2862d8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2862D8u;
    {
        const bool branch_taken_0x2862d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2862DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862D8u;
        // 0x2862dc: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862d8) {
            ctx->pc = 0x286318u;
            goto label_286318;
        }
    }
    ctx->pc = 0x2862E0u;
label_2862e0:
    // 0x2862e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2862e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2862e4: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x2862e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2862e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2862e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2862ec: 0xc0a15fa  jal         func_2857E8
    ctx->pc = 0x2862ECu;
    SET_GPR_U32(ctx, 31, 0x2862F4u);
    ctx->pc = 0x2862F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2862ECu;
    // 0x2862f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2857E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857E8u, 0x2862ECu, 0x2862F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2862F4u;
label_2862f4:
    // 0x2862f4: 0xdfa70060  ld          $a3, 0x60($sp)
    ctx->pc = 0x2862f4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2862f8:
    // 0x2862f8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2862f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2862fc: 0x64e7ffff  daddiu      $a3, $a3, -0x1
    ctx->pc = 0x2862fcu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4294967295);
    // 0x286300: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x286300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x286304: 0xffa70060  sd          $a3, 0x60($sp)
    ctx->pc = 0x286304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 7));
    // 0x286308: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x286308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28630c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x28630cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x286310: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x286310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286314: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x286314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_286318:
    // 0x286318: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x286318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28631c: 0xdfa70060  ld          $a3, 0x60($sp)
    ctx->pc = 0x28631cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x286320: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x286320u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x286324: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x286324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x286328: 0x8fb00088  lw          $s0, 0x88($sp)
    ctx->pc = 0x286328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x28632c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x28632cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x286330: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x286330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x286334: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x286334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x286338: 0x1440ff3b  bnez        $v0, . + 4 + (-0xC5 << 2)
    ctx->pc = 0x286338u;
    {
        const bool branch_taken_0x286338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286338u;
        // 0x28633c: 0x8fb10084  lw          $s1, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286338) {
            ctx->pc = 0x286028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_286028;
        }
    }
    ctx->pc = 0x286340u;
label_286340:
    // 0x286340: 0xc0a1a72  jal         func_2869C8
    ctx->pc = 0x286340u;
    SET_GPR_U32(ctx, 31, 0x286348u);
    ctx->pc = 0x286344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286340u;
    // 0x286344: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2869C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2869C8u, 0x286340u, 0x286348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286348u;
label_286348:
    // 0x286348: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x286348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28634c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28634Cu;
    {
        const bool branch_taken_0x28634c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x286350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28634Cu;
        // 0x286350: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28634c) {
            ctx->pc = 0x28636Cu;
            goto label_28636c;
        }
    }
    ctx->pc = 0x286354u;
    // 0x286354: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x286354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x286358: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x286358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x28635c: 0xc0a1fb8  jal         func_287EE0
    ctx->pc = 0x28635Cu;
    SET_GPR_U32(ctx, 31, 0x286364u);
    ctx->pc = 0x286360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28635Cu;
    // 0x286360: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287EE0u, 0x28635Cu, 0x286364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286364u;
label_286364:
    // 0x286364: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x286364u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286368: 0xacf0000c  sw          $s0, 0xC($a3)
    ctx->pc = 0x286368u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 16));
label_28636c:
    // 0x28636c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28636Cu;
    {
        const bool branch_taken_0x28636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28636Cu;
        // 0x286370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28636c) {
            ctx->pc = 0x286378u;
            goto label_286378;
        }
    }
    ctx->pc = 0x286374u;
label_286374:
    // 0x286374: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x286374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286378:
    // 0x286378: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x286378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28637c: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x28637cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x286380: 0xdfb70110  ld          $s7, 0x110($sp)
    ctx->pc = 0x286380u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x286384: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x286384u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x286388: 0xdfb500f0  ld          $s5, 0xF0($sp)
    ctx->pc = 0x286388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28638c: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x28638cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x286390: 0xdfb300d0  ld          $s3, 0xD0($sp)
    ctx->pc = 0x286390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x286394: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x286394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x286398: 0xdfb100b0  ld          $s1, 0xB0($sp)
    ctx->pc = 0x286398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28639c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x28639cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2863a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2863A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2863A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863A0u;
        // 0x2863a4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2863A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2863A8u;
}
