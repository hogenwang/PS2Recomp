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

// Function: sub_00191CF0
// Address: 0x191cf0 - 0x1924d0
void sub_00191CF0_0x191cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191CF0_0x191cf0");
#endif

    switch (ctx->pc) {
        case 0x191d48u: goto label_191d48;
        case 0x191d5cu: goto label_191d5c;
        case 0x191d90u: goto label_191d90;
        case 0x191db4u: goto label_191db4;
        case 0x191f48u: goto label_191f48;
        case 0x191f5cu: goto label_191f5c;
        case 0x191f80u: goto label_191f80;
        case 0x191fa0u: goto label_191fa0;
        case 0x191fc4u: goto label_191fc4;
        case 0x191fe4u: goto label_191fe4;
        case 0x192008u: goto label_192008;
        case 0x192028u: goto label_192028;
        case 0x19204cu: goto label_19204c;
        case 0x19206cu: goto label_19206c;
        case 0x192090u: goto label_192090;
        case 0x1920acu: goto label_1920ac;
        case 0x19214cu: goto label_19214c;
        case 0x192170u: goto label_192170;
        case 0x1922b4u: goto label_1922b4;
        case 0x19234cu: goto label_19234c;
        case 0x1923ccu: goto label_1923cc;
        case 0x1923ecu: goto label_1923ec;
        case 0x19240cu: goto label_19240c;
        case 0x19242cu: goto label_19242c;
        case 0x19244cu: goto label_19244c;
        case 0x19246cu: goto label_19246c;
        case 0x192488u: goto label_192488;
        case 0x1924b4u: goto label_1924b4;
        default: break;
    }

    ctx->pc = 0x191cf0u;

    // 0x191cf0: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x191cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x191cf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191cf8: 0x80c8e24  j           func_323890
    ctx->pc = 0x191CF8u;
    ctx->pc = 0x191CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191CF8u;
    // 0x191cfc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    sub_00323890_0x323890(rdram, ctx, runtime); return;
    ctx->pc = 0x191D00u;
    // 0x191d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191d04: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x191d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191d08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x191d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x191d0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x191d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x191d10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x191d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x191d14: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x191d14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x191d18: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x191d18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x191d1c: 0x10660014  beq         $v1, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x191D1Cu;
    {
        const bool branch_taken_0x191d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x191D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D1Cu;
        // 0x191d20: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d1c) {
            ctx->pc = 0x191D70u;
            goto label_191d70;
        }
    }
    ctx->pc = 0x191D24u;
    // 0x191d24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191d28: 0x5065000a  beql        $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x191D28u;
    {
        const bool branch_taken_0x191d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x191d28) {
            ctx->pc = 0x191D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191D28u;
            // 0x191d2c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191D54u;
            goto label_191d54;
        }
    }
    ctx->pc = 0x191D30u;
    // 0x191d30: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x191D30u;
    {
        const bool branch_taken_0x191d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191d30) {
            ctx->pc = 0x191D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191D30u;
            // 0x191d34: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191D40u;
            goto label_191d40;
        }
    }
    ctx->pc = 0x191D38u;
    // 0x191d38: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x191D38u;
    {
        const bool branch_taken_0x191d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D38u;
        // 0x191d3c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d38) {
            ctx->pc = 0x191DB8u;
            goto label_191db8;
        }
    }
    ctx->pc = 0x191D40u;
label_191d40:
    // 0x191d40: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x191D40u;
    SET_GPR_U32(ctx, 31, 0x191D48u);
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x191D40u, 0x191D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D48u;
label_191d48:
    // 0x191d48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191d4c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x191d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x191d50: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x191d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_191d54:
    // 0x191d54: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x191D54u;
    SET_GPR_U32(ctx, 31, 0x191D5Cu);
    ctx->pc = 0x191D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D54u;
    // 0x191d58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x191D54u, 0x191D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D5Cu;
label_191d5c:
    // 0x191d5c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x191D5Cu;
    {
        const bool branch_taken_0x191d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191d5c) {
            ctx->pc = 0x191DB4u;
            goto label_191db4;
        }
    }
    ctx->pc = 0x191D64u;
    // 0x191d64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x191d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191d68: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x191D68u;
    {
        const bool branch_taken_0x191d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D68u;
        // 0x191d6c: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d68) {
            ctx->pc = 0x191DB4u;
            goto label_191db4;
        }
    }
    ctx->pc = 0x191D70u;
label_191d70:
    // 0x191d70: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x191d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x191d74: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x191d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x191d78: 0x24842190  addiu       $a0, $a0, 0x2190
    ctx->pc = 0x191d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8592));
    // 0x191d7c: 0x24a5e8c0  addiu       $a1, $a1, -0x1740
    ctx->pc = 0x191d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961344));
    // 0x191d80: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x191d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x191d84: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x191d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x191d88: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x191D88u;
    SET_GPR_U32(ctx, 31, 0x191D90u);
    ctx->pc = 0x191D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D88u;
    // 0x191d8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x191D88u, 0x191D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D90u;
label_191d90:
    // 0x191d90: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x191d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x191d94: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x191d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x191d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d9c: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x191d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x191da0: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x191da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x191da4: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x191da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x191da8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x191da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x191dac: 0xc055728  jal         func_155CA0
    ctx->pc = 0x191DACu;
    SET_GPR_U32(ctx, 31, 0x191DB4u);
    ctx->pc = 0x191DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191DACu;
    // 0x191db0: 0xac43d918  sw          $v1, -0x26E8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957336), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x191DACu, 0x191DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191DB4u;
label_191db4:
    // 0x191db4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x191db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_191db8:
    // 0x191db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x191db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x191dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x191DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DC0u;
        // 0x191dc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191DC8u;
    // 0x191dc8: 0x0  nop
    ctx->pc = 0x191dc8u;
    // NOP
    // 0x191dcc: 0x0  nop
    ctx->pc = 0x191dccu;
    // NOP
    // 0x191dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191dd4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x191dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x191dd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x191dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x191ddc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x191ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x191de0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x191de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x191de4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x191de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191de8: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x191de8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x191dec: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x191decu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x191df0: 0x108300c8  beq         $a0, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x191DF0u;
    {
        const bool branch_taken_0x191df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x191df0) {
            ctx->pc = 0x192114u;
            goto label_192114;
        }
    }
    ctx->pc = 0x191DF8u;
    // 0x191df8: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x191df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x191dfc: 0x508300a9  beql        $a0, $v1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x191DFCu;
    {
        const bool branch_taken_0x191dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x191dfc) {
            ctx->pc = 0x191E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191DFCu;
            // 0x191e00: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1920A4u;
            goto label_1920a4;
        }
    }
    ctx->pc = 0x191E04u;
    // 0x191e04: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x191e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x191e08: 0x50830095  beql        $a0, $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x191E08u;
    {
        const bool branch_taken_0x191e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x191e08) {
            ctx->pc = 0x191E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191E08u;
            // 0x191e0c: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192060u;
            goto label_192060;
        }
    }
    ctx->pc = 0x191E10u;
    // 0x191e10: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x191e10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x191e14: 0x50890081  beql        $a0, $t1, . + 4 + (0x81 << 2)
    ctx->pc = 0x191E14u;
    {
        const bool branch_taken_0x191e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        if (branch_taken_0x191e14) {
            ctx->pc = 0x191E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191E14u;
            // 0x191e18: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19201Cu;
            goto label_19201c;
        }
    }
    ctx->pc = 0x191E1Cu;
    // 0x191e1c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x191e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x191e20: 0x5088006d  beql        $a0, $t0, . + 4 + (0x6D << 2)
    ctx->pc = 0x191E20u;
    {
        const bool branch_taken_0x191e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x191e20) {
            ctx->pc = 0x191E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191E20u;
            // 0x191e24: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191FD8u;
            goto label_191fd8;
        }
    }
    ctx->pc = 0x191E28u;
    // 0x191e28: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x191e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x191e2c: 0x50870059  beql        $a0, $a3, . + 4 + (0x59 << 2)
    ctx->pc = 0x191E2Cu;
    {
        const bool branch_taken_0x191e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x191e2c) {
            ctx->pc = 0x191E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191E2Cu;
            // 0x191e30: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191F94u;
            goto label_191f94;
        }
    }
    ctx->pc = 0x191E34u;
    // 0x191e34: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x191e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x191e38: 0x50860045  beql        $a0, $a2, . + 4 + (0x45 << 2)
    ctx->pc = 0x191E38u;
    {
        const bool branch_taken_0x191e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x191e38) {
            ctx->pc = 0x191E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191E38u;
            // 0x191e3c: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191F50u;
            goto label_191f50;
        }
    }
    ctx->pc = 0x191E40u;
    // 0x191e40: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191E40u;
    {
        const bool branch_taken_0x191e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x191e40) {
            ctx->pc = 0x191E50u;
            goto label_191e50;
        }
    }
    ctx->pc = 0x191E48u;
    // 0x191e48: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x191E48u;
    {
        const bool branch_taken_0x191e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E48u;
        // 0x191e4c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e48) {
            ctx->pc = 0x192174u;
            goto label_192174;
        }
    }
    ctx->pc = 0x191E50u;
label_191e50:
    // 0x191e50: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191e54: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x191e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x191e58: 0x9042da50  lbu         $v0, -0x25B0($v0)
    ctx->pc = 0x191e58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957648)));
    // 0x191e5c: 0x50450024  beql        $v0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x191E5Cu;
    {
        const bool branch_taken_0x191e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x191e5c) {
            ctx->pc = 0x191E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191E5Cu;
            // 0x191e60: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191EF0u;
            goto label_191ef0;
        }
    }
    ctx->pc = 0x191E64u;
    // 0x191e64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x191e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191e68: 0x10440020  beq         $v0, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x191E68u;
    {
        const bool branch_taken_0x191e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x191e68) {
            ctx->pc = 0x191EECu;
            goto label_191eec;
        }
    }
    ctx->pc = 0x191E70u;
    // 0x191e70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191e74: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x191E74u;
    {
        const bool branch_taken_0x191e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x191e74) {
            ctx->pc = 0x191EBCu;
            goto label_191ebc;
        }
    }
    ctx->pc = 0x191E7Cu;
    // 0x191e7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191E7Cu;
    {
        const bool branch_taken_0x191e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191e7c) {
            ctx->pc = 0x191E8Cu;
            goto label_191e8c;
        }
    }
    ctx->pc = 0x191E84u;
    // 0x191e84: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x191E84u;
    {
        const bool branch_taken_0x191e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191e84) {
            ctx->pc = 0x191EECu;
            goto label_191eec;
        }
    }
    ctx->pc = 0x191E8Cu;
label_191e8c:
    // 0x191e8c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191e90: 0x9042db7b  lbu         $v0, -0x2485($v0)
    ctx->pc = 0x191e90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957947)));
    // 0x191e94: 0x50450017  beql        $v0, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x191E94u;
    {
        const bool branch_taken_0x191e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x191e94) {
            ctx->pc = 0x191E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191E94u;
            // 0x191e98: 0xa2090001  sb          $t1, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191EF4u;
            goto label_191ef4;
        }
    }
    ctx->pc = 0x191E9Cu;
    // 0x191e9c: 0x50440015  beql        $v0, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x191E9Cu;
    {
        const bool branch_taken_0x191e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x191e9c) {
            ctx->pc = 0x191EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191E9Cu;
            // 0x191ea0: 0xa2080001  sb          $t0, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191EF4u;
            goto label_191ef4;
        }
    }
    ctx->pc = 0x191EA4u;
    // 0x191ea4: 0x50430013  beql        $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x191EA4u;
    {
        const bool branch_taken_0x191ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x191ea4) {
            ctx->pc = 0x191EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191EA4u;
            // 0x191ea8: 0xa2070001  sb          $a3, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191EF4u;
            goto label_191ef4;
        }
    }
    ctx->pc = 0x191EACu;
    // 0x191eac: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x191EACu;
    {
        const bool branch_taken_0x191eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191eac) {
            ctx->pc = 0x191EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191EACu;
            // 0x191eb0: 0xa2060001  sb          $a2, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191EF4u;
            goto label_191ef4;
        }
    }
    ctx->pc = 0x191EB4u;
    // 0x191eb4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x191EB4u;
    {
        const bool branch_taken_0x191eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191eb4) {
            ctx->pc = 0x191EF4u;
            goto label_191ef4;
        }
    }
    ctx->pc = 0x191EBCu;
label_191ebc:
    // 0x191ebc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191ec0: 0x9042ddc3  lbu         $v0, -0x223D($v0)
    ctx->pc = 0x191ec0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958531)));
    // 0x191ec4: 0x5045000b  beql        $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x191EC4u;
    {
        const bool branch_taken_0x191ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x191ec4) {
            ctx->pc = 0x191EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191EC4u;
            // 0x191ec8: 0xa2090001  sb          $t1, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191EF4u;
            goto label_191ef4;
        }
    }
    ctx->pc = 0x191ECCu;
    // 0x191ecc: 0x50440009  beql        $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x191ECCu;
    {
        const bool branch_taken_0x191ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x191ecc) {
            ctx->pc = 0x191ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191ECCu;
            // 0x191ed0: 0xa2080001  sb          $t0, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191EF4u;
            goto label_191ef4;
        }
    }
    ctx->pc = 0x191ED4u;
    // 0x191ed4: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x191ED4u;
    {
        const bool branch_taken_0x191ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x191ed4) {
            ctx->pc = 0x191ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191ED4u;
            // 0x191ed8: 0xa2070001  sb          $a3, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191EF4u;
            goto label_191ef4;
        }
    }
    ctx->pc = 0x191EDCu;
    // 0x191edc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x191EDCu;
    {
        const bool branch_taken_0x191edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191edc) {
            ctx->pc = 0x191EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191EDCu;
            // 0x191ee0: 0xa2060001  sb          $a2, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191EF4u;
            goto label_191ef4;
        }
    }
    ctx->pc = 0x191EE4u;
    // 0x191ee4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x191EE4u;
    {
        const bool branch_taken_0x191ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191ee4) {
            ctx->pc = 0x191EF4u;
            goto label_191ef4;
        }
    }
    ctx->pc = 0x191EECu;
label_191eec:
    // 0x191eec: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x191eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_191ef0:
    // 0x191ef0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x191ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_191ef4:
    // 0x191ef4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x191ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x191ef8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x191ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x191efc: 0x9446f348  lhu         $a2, -0xCB8($v0)
    ctx->pc = 0x191efcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294964040)));
    // 0x191f00: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x191f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x191f04: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x191f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x191f08: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191f0c: 0x34c80020  ori         $t0, $a2, 0x20
    ctx->pc = 0x191f0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x191f10: 0x9447db62  lhu         $a3, -0x249E($v0)
    ctx->pc = 0x191f10u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957922)));
    // 0x191f14: 0xa4a8f348  sh          $t0, -0xCB8($a1)
    ctx->pc = 0x191f14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294964040), (uint16_t)GPR_U32(ctx, 8));
    // 0x191f18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x191f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x191f1c: 0x9446ddaa  lhu         $a2, -0x2256($v0)
    ctx->pc = 0x191f1cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958506)));
    // 0x191f20: 0x34e20800  ori         $v0, $a3, 0x800
    ctx->pc = 0x191f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2048);
    // 0x191f24: 0x34c50800  ori         $a1, $a2, 0x800
    ctx->pc = 0x191f24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2048);
    // 0x191f28: 0xa482db62  sh          $v0, -0x249E($a0)
    ctx->pc = 0x191f28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957922), (uint16_t)GPR_U32(ctx, 2));
    // 0x191f2c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x191f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x191f30: 0xa465ddaa  sh          $a1, -0x2256($v1)
    ctx->pc = 0x191f30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294958506), (uint16_t)GPR_U32(ctx, 5));
    // 0x191f34: 0x8c441d18  lw          $a0, 0x1D18($v0)
    ctx->pc = 0x191f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7448)));
    // 0x191f38: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x191f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x191f3c: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x191f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x191f40: 0xc053318  jal         func_14CC60
    ctx->pc = 0x191F40u;
    SET_GPR_U32(ctx, 31, 0x191F48u);
    ctx->pc = 0x191F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F40u;
    // 0x191f44: 0xac431d18  sw          $v1, 0x1D18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 7448), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x191F40u, 0x191F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F48u;
label_191f48:
    // 0x191f48: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x191F48u;
    {
        const bool branch_taken_0x191f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191f48) {
            ctx->pc = 0x192170u;
            goto label_192170;
        }
    }
    ctx->pc = 0x191F50u;
label_191f50:
    // 0x191f50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191f54: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x191F54u;
    SET_GPR_U32(ctx, 31, 0x191F5Cu);
    ctx->pc = 0x191F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F54u;
    // 0x191f58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x191F54u, 0x191F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F5Cu;
label_191f5c:
    // 0x191f5c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x191f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x191f60: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x191f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x191f64: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x191f64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x191f68: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x191F68u;
    {
        const bool branch_taken_0x191f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x191f68) {
            ctx->pc = 0x191F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191F68u;
            // 0x191f6c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191F84u;
            goto label_191f84;
        }
    }
    ctx->pc = 0x191F70u;
    // 0x191f70: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x191f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x191f74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191f78: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x191F78u;
    SET_GPR_U32(ctx, 31, 0x191F80u);
    ctx->pc = 0x191F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F78u;
    // 0x191f7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x191F78u, 0x191F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F80u;
label_191f80:
    // 0x191f80: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x191f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_191f84:
    // 0x191f84: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x191f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x191f88: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x191f88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x191f8c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x191F8Cu;
    {
        const bool branch_taken_0x191f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F8Cu;
        // 0x191f90: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f8c) {
            ctx->pc = 0x192170u;
            goto label_192170;
        }
    }
    ctx->pc = 0x191F94u;
label_191f94:
    // 0x191f94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191f98: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x191F98u;
    SET_GPR_U32(ctx, 31, 0x191FA0u);
    ctx->pc = 0x191F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F98u;
    // 0x191f9c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x191F98u, 0x191FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191FA0u;
label_191fa0:
    // 0x191fa0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x191fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x191fa4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x191fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x191fa8: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x191fa8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x191fac: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x191FACu;
    {
        const bool branch_taken_0x191fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x191fac) {
            ctx->pc = 0x191FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191FACu;
            // 0x191fb0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191FC8u;
            goto label_191fc8;
        }
    }
    ctx->pc = 0x191FB4u;
    // 0x191fb4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x191fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x191fb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191fbc: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x191FBCu;
    SET_GPR_U32(ctx, 31, 0x191FC4u);
    ctx->pc = 0x191FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191FBCu;
    // 0x191fc0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x191FBCu, 0x191FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191FC4u;
label_191fc4:
    // 0x191fc4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x191fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_191fc8:
    // 0x191fc8: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x191fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x191fcc: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x191fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x191fd0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x191FD0u;
    {
        const bool branch_taken_0x191fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FD0u;
        // 0x191fd4: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fd0) {
            ctx->pc = 0x192170u;
            goto label_192170;
        }
    }
    ctx->pc = 0x191FD8u;
label_191fd8:
    // 0x191fd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191fdc: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x191FDCu;
    SET_GPR_U32(ctx, 31, 0x191FE4u);
    ctx->pc = 0x191FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191FDCu;
    // 0x191fe0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x191FDCu, 0x191FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191FE4u;
label_191fe4:
    // 0x191fe4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x191fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x191fe8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x191fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x191fec: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x191fecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x191ff0: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x191FF0u;
    {
        const bool branch_taken_0x191ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x191ff0) {
            ctx->pc = 0x191FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191FF0u;
            // 0x191ff4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19200Cu;
            goto label_19200c;
        }
    }
    ctx->pc = 0x191FF8u;
    // 0x191ff8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x191ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x191ffc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192000: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192000u;
    SET_GPR_U32(ctx, 31, 0x192008u);
    ctx->pc = 0x192004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192000u;
    // 0x192004: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x192000u, 0x192008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192008u;
label_192008:
    // 0x192008: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x192008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_19200c:
    // 0x19200c: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x19200cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x192010: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x192010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x192014: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x192014u;
    {
        const bool branch_taken_0x192014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192014u;
        // 0x192018: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192014) {
            ctx->pc = 0x192170u;
            goto label_192170;
        }
    }
    ctx->pc = 0x19201Cu;
label_19201c:
    // 0x19201c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19201cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192020: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192020u;
    SET_GPR_U32(ctx, 31, 0x192028u);
    ctx->pc = 0x192024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192020u;
    // 0x192024: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x192020u, 0x192028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192028u;
label_192028:
    // 0x192028: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x192028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x19202c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x19202cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x192030: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x192030u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x192034: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192034u;
    {
        const bool branch_taken_0x192034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x192034) {
            ctx->pc = 0x192038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192034u;
            // 0x192038: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192050u;
            goto label_192050;
        }
    }
    ctx->pc = 0x19203Cu;
    // 0x19203c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x19203cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x192040: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192044: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192044u;
    SET_GPR_U32(ctx, 31, 0x19204Cu);
    ctx->pc = 0x192048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192044u;
    // 0x192048: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x192044u, 0x19204Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19204Cu;
label_19204c:
    // 0x19204c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x19204cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_192050:
    // 0x192050: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x192050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x192054: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x192054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x192058: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x192058u;
    {
        const bool branch_taken_0x192058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192058u;
        // 0x19205c: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192058) {
            ctx->pc = 0x192170u;
            goto label_192170;
        }
    }
    ctx->pc = 0x192060u;
label_192060:
    // 0x192060: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192064: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192064u;
    SET_GPR_U32(ctx, 31, 0x19206Cu);
    ctx->pc = 0x192068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192064u;
    // 0x192068: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x192064u, 0x19206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19206Cu;
label_19206c:
    // 0x19206c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x19206cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x192070: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x192070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x192074: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x192074u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x192078: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192078u;
    {
        const bool branch_taken_0x192078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x192078) {
            ctx->pc = 0x19207Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192078u;
            // 0x19207c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192094u;
            goto label_192094;
        }
    }
    ctx->pc = 0x192080u;
    // 0x192080: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x192080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x192084: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192088: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192088u;
    SET_GPR_U32(ctx, 31, 0x192090u);
    ctx->pc = 0x19208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192088u;
    // 0x19208c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x192088u, 0x192090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192090u;
label_192090:
    // 0x192090: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x192090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_192094:
    // 0x192094: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x192094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x192098: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x192098u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x19209c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x19209Cu;
    {
        const bool branch_taken_0x19209c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19209Cu;
        // 0x1920a0: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19209c) {
            ctx->pc = 0x192170u;
            goto label_192170;
        }
    }
    ctx->pc = 0x1920A4u;
label_1920a4:
    // 0x1920a4: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x1920A4u;
    SET_GPR_U32(ctx, 31, 0x1920ACu);
    ctx->pc = 0x1920A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1920A4u;
    // 0x1920a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x1920A4u, 0x1920ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1920ACu;
label_1920ac:
    // 0x1920ac: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1920ACu;
    {
        const bool branch_taken_0x1920ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1920ac) {
            ctx->pc = 0x192170u;
            goto label_192170;
        }
    }
    ctx->pc = 0x1920B4u;
    // 0x1920b4: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1920b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1920b8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1920b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1920bc: 0xa2040001  sb          $a0, 0x1($s0)
    ctx->pc = 0x1920bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1920c0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1920c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1920c4: 0x9467db62  lhu         $a3, -0x249E($v1)
    ctx->pc = 0x1920c4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957922)));
    // 0x1920c8: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1920c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1920cc: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x1920ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x1920d0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1920d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1920d4: 0x34e91000  ori         $t1, $a3, 0x1000
    ctx->pc = 0x1920d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4096);
    // 0x1920d8: 0x9468ddaa  lhu         $t0, -0x2256($v1)
    ctx->pc = 0x1920d8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294958506)));
    // 0x1920dc: 0xa4c9db62  sh          $t1, -0x249E($a2)
    ctx->pc = 0x1920dcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294957922), (uint16_t)GPR_U32(ctx, 9));
    // 0x1920e0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1920e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1920e4: 0x9467f348  lhu         $a3, -0xCB8($v1)
    ctx->pc = 0x1920e4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964040)));
    // 0x1920e8: 0x35031000  ori         $v1, $t0, 0x1000
    ctx->pc = 0x1920e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4096);
    // 0x1920ec: 0x30e6ffdf  andi        $a2, $a3, 0xFFDF
    ctx->pc = 0x1920ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65503);
    // 0x1920f0: 0xa4a3ddaa  sh          $v1, -0x2256($a1)
    ctx->pc = 0x1920f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294958506), (uint16_t)GPR_U32(ctx, 3));
    // 0x1920f4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1920f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1920f8: 0xa486f348  sh          $a2, -0xCB8($a0)
    ctx->pc = 0x1920f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294964040), (uint16_t)GPR_U32(ctx, 6));
    // 0x1920fc: 0x8c651d18  lw          $a1, 0x1D18($v1)
    ctx->pc = 0x1920fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7448)));
    // 0x192100: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x192100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x192104: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x192104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x192108: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x192108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x19210c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x19210Cu;
    {
        const bool branch_taken_0x19210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19210Cu;
        // 0x192110: 0xac641d18  sw          $a0, 0x1D18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 7448), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19210c) {
            ctx->pc = 0x192170u;
            goto label_192170;
        }
    }
    ctx->pc = 0x192114u;
label_192114:
    // 0x192114: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x192114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x192118: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x192118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x19211c: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x19211cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x192120: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x192120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x192124: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x192124u;
    {
        const bool branch_taken_0x192124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x192124) {
            ctx->pc = 0x192170u;
            goto label_192170;
        }
    }
    ctx->pc = 0x19212Cu;
    // 0x19212c: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x19212cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x192130: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x192130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x192134: 0x24842190  addiu       $a0, $a0, 0x2190
    ctx->pc = 0x192134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8592));
    // 0x192138: 0x24a5e8c0  addiu       $a1, $a1, -0x1740
    ctx->pc = 0x192138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961344));
    // 0x19213c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x19213cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x192140: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x192140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192144: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x192144u;
    SET_GPR_U32(ctx, 31, 0x19214Cu);
    ctx->pc = 0x192148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192144u;
    // 0x192148: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x192144u, 0x19214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19214Cu;
label_19214c:
    // 0x19214c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x19214cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x192150: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x192150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x192154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192158: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x192158u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x19215c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x19215cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x192160: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x192160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x192164: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x192164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x192168: 0xc055728  jal         func_155CA0
    ctx->pc = 0x192168u;
    SET_GPR_U32(ctx, 31, 0x192170u);
    ctx->pc = 0x19216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192168u;
    // 0x19216c: 0xac43d918  sw          $v1, -0x26E8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957336), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x192168u, 0x192170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192170u;
label_192170:
    // 0x192170: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x192170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_192174:
    // 0x192174: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19217c: 0x3e00008  jr          $ra
    ctx->pc = 0x19217Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19217Cu;
        // 0x192180: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19217Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192184u;
    // 0x192184: 0x0  nop
    ctx->pc = 0x192184u;
    // NOP
    // 0x192188: 0x0  nop
    ctx->pc = 0x192188u;
    // NOP
    // 0x19218c: 0x0  nop
    ctx->pc = 0x19218cu;
    // NOP
    // 0x192190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192194: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x192194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x192198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19219c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19219cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1921a0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x1921a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1921a4: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x1921a4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1921a8: 0x10c500bc  beq         $a2, $a1, . + 4 + (0xBC << 2)
    ctx->pc = 0x1921A8u;
    {
        const bool branch_taken_0x1921a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1921a8) {
            ctx->pc = 0x19249Cu;
            goto label_19249c;
        }
    }
    ctx->pc = 0x1921B0u;
    // 0x1921b0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1921b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1921b4: 0x50c300b2  beql        $a2, $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1921B4u;
    {
        const bool branch_taken_0x1921b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1921b4) {
            ctx->pc = 0x1921B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1921B4u;
            // 0x1921b8: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192480u;
            goto label_192480;
        }
    }
    ctx->pc = 0x1921BCu;
    // 0x1921bc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1921bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1921c0: 0x50c300a7  beql        $a2, $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1921C0u;
    {
        const bool branch_taken_0x1921c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1921c0) {
            ctx->pc = 0x1921C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1921C0u;
            // 0x1921c4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192460u;
            goto label_192460;
        }
    }
    ctx->pc = 0x1921C8u;
    // 0x1921c8: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x1921c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1921cc: 0x50c7009c  beql        $a2, $a3, . + 4 + (0x9C << 2)
    ctx->pc = 0x1921CCu;
    {
        const bool branch_taken_0x1921cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x1921cc) {
            ctx->pc = 0x1921D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1921CCu;
            // 0x1921d0: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192440u;
            goto label_192440;
        }
    }
    ctx->pc = 0x1921D4u;
    // 0x1921d4: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1921d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1921d8: 0x50c30091  beql        $a2, $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x1921D8u;
    {
        const bool branch_taken_0x1921d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1921d8) {
            ctx->pc = 0x1921DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1921D8u;
            // 0x1921dc: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192420u;
            goto label_192420;
        }
    }
    ctx->pc = 0x1921E0u;
    // 0x1921e0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1921e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1921e4: 0x50c30086  beql        $a2, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x1921E4u;
    {
        const bool branch_taken_0x1921e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1921e4) {
            ctx->pc = 0x1921E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1921E4u;
            // 0x1921e8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192400u;
            goto label_192400;
        }
    }
    ctx->pc = 0x1921ECu;
    // 0x1921ec: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1921ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1921f0: 0x50c3007b  beql        $a2, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x1921F0u;
    {
        const bool branch_taken_0x1921f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1921f0) {
            ctx->pc = 0x1921F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1921F0u;
            // 0x1921f4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1923E0u;
            goto label_1923e0;
        }
    }
    ctx->pc = 0x1921F8u;
    // 0x1921f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1921f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1921fc: 0x50c30070  beql        $a2, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x1921FCu;
    {
        const bool branch_taken_0x1921fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1921fc) {
            ctx->pc = 0x192200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1921FCu;
            // 0x192200: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1923C0u;
            goto label_1923c0;
        }
    }
    ctx->pc = 0x192204u;
    // 0x192204: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x192204u;
    {
        const bool branch_taken_0x192204 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x192204) {
            ctx->pc = 0x192214u;
            goto label_192214;
        }
    }
    ctx->pc = 0x19220Cu;
    // 0x19220c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x19220Cu;
    {
        const bool branch_taken_0x19220c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19220Cu;
        // 0x192210: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19220c) {
            ctx->pc = 0x1924B8u;
            goto label_1924b8;
        }
    }
    ctx->pc = 0x192214u;
label_192214:
    // 0x192214: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x192214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x192218: 0x90669780  lbu         $a2, -0x6880($v1)
    ctx->pc = 0x192218u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x19221c: 0x24c3fff9  addiu       $v1, $a2, -0x7
    ctx->pc = 0x19221cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967289));
    // 0x192220: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x192220u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x192224: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x192224u;
    {
        const bool branch_taken_0x192224 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x192224) {
            ctx->pc = 0x192234u;
            goto label_192234;
        }
    }
    ctx->pc = 0x19222Cu;
    // 0x19222c: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x19222Cu;
    {
        const bool branch_taken_0x19222c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19222Cu;
        // 0x192230: 0xa2050001  sb          $a1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19222c) {
            ctx->pc = 0x1924B4u;
            goto label_1924b4;
        }
    }
    ctx->pc = 0x192234u;
label_192234:
    // 0x192234: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x192234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x192238: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x192238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19223c: 0x9065da50  lbu         $a1, -0x25B0($v1)
    ctx->pc = 0x19223cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957648)));
    // 0x192240: 0x50a40058  beql        $a1, $a0, . + 4 + (0x58 << 2)
    ctx->pc = 0x192240u;
    {
        const bool branch_taken_0x192240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x192240) {
            ctx->pc = 0x192244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192240u;
            // 0x192244: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1923A4u;
            goto label_1923a4;
        }
    }
    ctx->pc = 0x192248u;
    // 0x192248: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x192248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19224c: 0x10a40054  beq         $a1, $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x19224Cu;
    {
        const bool branch_taken_0x19224c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x19224c) {
            ctx->pc = 0x1923A0u;
            goto label_1923a0;
        }
    }
    ctx->pc = 0x192254u;
    // 0x192254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x192254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192258: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x192258u;
    {
        const bool branch_taken_0x192258 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x192258) {
            ctx->pc = 0x192308u;
            goto label_192308;
        }
    }
    ctx->pc = 0x192260u;
    // 0x192260: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x192260u;
    {
        const bool branch_taken_0x192260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x192260) {
            ctx->pc = 0x192270u;
            goto label_192270;
        }
    }
    ctx->pc = 0x192268u;
    // 0x192268: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x192268u;
    {
        const bool branch_taken_0x192268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192268) {
            ctx->pc = 0x1923A0u;
            goto label_1923a0;
        }
    }
    ctx->pc = 0x192270u;
label_192270:
    // 0x192270: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x192270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x192274: 0x9063db5a  lbu         $v1, -0x24A6($v1)
    ctx->pc = 0x192274u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957914)));
    // 0x192278: 0x54640007  bnel        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x192278u;
    {
        const bool branch_taken_0x192278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x192278) {
            ctx->pc = 0x19227Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192278u;
            // 0x19227c: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192298u;
            goto label_192298;
        }
    }
    ctx->pc = 0x192280u;
    // 0x192280: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x192280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x192284: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x192284u;
    {
        const bool branch_taken_0x192284 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x192284) {
            ctx->pc = 0x192294u;
            goto label_192294;
        }
    }
    ctx->pc = 0x19228Cu;
    // 0x19228c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x19228Cu;
    {
        const bool branch_taken_0x19228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19228Cu;
        // 0x192290: 0xa2070001  sb          $a3, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19228c) {
            ctx->pc = 0x1923A8u;
            goto label_1923a8;
        }
    }
    ctx->pc = 0x192294u;
label_192294:
    // 0x192294: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x192294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_192298:
    // 0x192298: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x192298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x19229c: 0xa2040001  sb          $a0, 0x1($s0)
    ctx->pc = 0x19229cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1922a0: 0x9063f35a  lbu         $v1, -0xCA6($v1)
    ctx->pc = 0x1922a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964058)));
    // 0x1922a4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1922A4u;
    {
        const bool branch_taken_0x1922a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1922a4) {
            ctx->pc = 0x1922D4u;
            goto label_1922d4;
        }
    }
    ctx->pc = 0x1922ACu;
    // 0x1922ac: 0xc062894  jal         func_18A250
    ctx->pc = 0x1922ACu;
    SET_GPR_U32(ctx, 31, 0x1922B4u);
    ctx->pc = 0x1922B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1922ACu;
    // 0x1922b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A250u, 0x1922ACu, 0x1922B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1922B4u;
label_1922b4:
    // 0x1922b4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1922b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1922b8: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x1922b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x1922bc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1922bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1922c0: 0x14830039  bne         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1922C0u;
    {
        const bool branch_taken_0x1922c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1922c0) {
            ctx->pc = 0x1923A8u;
            goto label_1923a8;
        }
    }
    ctx->pc = 0x1922C8u;
    // 0x1922c8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1922c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1922cc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1922CCu;
    {
        const bool branch_taken_0x1922cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1922D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922CCu;
        // 0x1922d0: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922cc) {
            ctx->pc = 0x1923A8u;
            goto label_1923a8;
        }
    }
    ctx->pc = 0x1922D4u;
label_1922d4:
    // 0x1922d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1922d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1922d8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1922d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1922dc: 0x9065db78  lbu         $a1, -0x2488($v1)
    ctx->pc = 0x1922dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957944)));
    // 0x1922e0: 0x2484dca4  addiu       $a0, $a0, -0x235C
    ctx->pc = 0x1922e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958244));
    // 0x1922e4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1922e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1922e8: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1922e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1922ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1922ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1922f0: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1922f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1922f4: 0x1483002c  bne         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1922F4u;
    {
        const bool branch_taken_0x1922f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1922f4) {
            ctx->pc = 0x1923A8u;
            goto label_1923a8;
        }
    }
    ctx->pc = 0x1922FCu;
    // 0x1922fc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1922fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x192300: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x192300u;
    {
        const bool branch_taken_0x192300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192300u;
        // 0x192304: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192300) {
            ctx->pc = 0x1923A8u;
            goto label_1923a8;
        }
    }
    ctx->pc = 0x192308u;
label_192308:
    // 0x192308: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x192308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19230c: 0x9063dda2  lbu         $v1, -0x225E($v1)
    ctx->pc = 0x19230cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958498)));
    // 0x192310: 0x54640007  bnel        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x192310u;
    {
        const bool branch_taken_0x192310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x192310) {
            ctx->pc = 0x192314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192310u;
            // 0x192314: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192330u;
            goto label_192330;
        }
    }
    ctx->pc = 0x192318u;
    // 0x192318: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x192318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x19231c: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19231Cu;
    {
        const bool branch_taken_0x19231c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19231c) {
            ctx->pc = 0x19232Cu;
            goto label_19232c;
        }
    }
    ctx->pc = 0x192324u;
    // 0x192324: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x192324u;
    {
        const bool branch_taken_0x192324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192324u;
        // 0x192328: 0xa2070001  sb          $a3, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192324) {
            ctx->pc = 0x1923A8u;
            goto label_1923a8;
        }
    }
    ctx->pc = 0x19232Cu;
label_19232c:
    // 0x19232c: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x19232cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_192330:
    // 0x192330: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x192330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x192334: 0xa2040001  sb          $a0, 0x1($s0)
    ctx->pc = 0x192334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x192338: 0x9063f35a  lbu         $v1, -0xCA6($v1)
    ctx->pc = 0x192338u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964058)));
    // 0x19233c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19233Cu;
    {
        const bool branch_taken_0x19233c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19233c) {
            ctx->pc = 0x19236Cu;
            goto label_19236c;
        }
    }
    ctx->pc = 0x192344u;
    // 0x192344: 0xc062894  jal         func_18A250
    ctx->pc = 0x192344u;
    SET_GPR_U32(ctx, 31, 0x19234Cu);
    ctx->pc = 0x192348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192344u;
    // 0x192348: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A250u, 0x192344u, 0x19234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19234Cu;
label_19234c:
    // 0x19234c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x19234cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x192350: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x192350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x192354: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x192354u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x192358: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x192358u;
    {
        const bool branch_taken_0x192358 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x192358) {
            ctx->pc = 0x1923A8u;
            goto label_1923a8;
        }
    }
    ctx->pc = 0x192360u;
    // 0x192360: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x192360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x192364: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x192364u;
    {
        const bool branch_taken_0x192364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192364u;
        // 0x192368: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192364) {
            ctx->pc = 0x1923A8u;
            goto label_1923a8;
        }
    }
    ctx->pc = 0x19236Cu;
label_19236c:
    // 0x19236c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19236cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x192370: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x192370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x192374: 0x9065ddc0  lbu         $a1, -0x2240($v1)
    ctx->pc = 0x192374u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958528)));
    // 0x192378: 0x2484deec  addiu       $a0, $a0, -0x2114
    ctx->pc = 0x192378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958828));
    // 0x19237c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x19237cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x192380: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x192380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x192384: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x192384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x192388: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x192388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19238c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19238Cu;
    {
        const bool branch_taken_0x19238c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19238c) {
            ctx->pc = 0x1923A8u;
            goto label_1923a8;
        }
    }
    ctx->pc = 0x192394u;
    // 0x192394: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x192394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x192398: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192398u;
    {
        const bool branch_taken_0x192398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192398u;
        // 0x19239c: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192398) {
            ctx->pc = 0x1923A8u;
            goto label_1923a8;
        }
    }
    ctx->pc = 0x1923A0u;
label_1923a0:
    // 0x1923a0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1923a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1923a4:
    // 0x1923a4: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1923a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_1923a8:
    // 0x1923a8: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x1923a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x1923ac: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x1923acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x1923b0: 0x8c84d918  lw          $a0, -0x26E8($a0)
    ctx->pc = 0x1923b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957336)));
    // 0x1923b4: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x1923b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x1923b8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1923B8u;
    {
        const bool branch_taken_0x1923b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923B8u;
        // 0x1923bc: 0xac64d918  sw          $a0, -0x26E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957336), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923b8) {
            ctx->pc = 0x1924B4u;
            goto label_1924b4;
        }
    }
    ctx->pc = 0x1923C0u;
label_1923c0:
    // 0x1923c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1923c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1923c4: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1923C4u;
    SET_GPR_U32(ctx, 31, 0x1923CCu);
    ctx->pc = 0x1923C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1923C4u;
    // 0x1923c8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x1923C4u, 0x1923CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1923CCu;
label_1923cc:
    // 0x1923cc: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1923ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1923d0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1923d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1923d4: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x1923d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1923d8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1923D8u;
    {
        const bool branch_taken_0x1923d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923D8u;
        // 0x1923dc: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923d8) {
            ctx->pc = 0x1924B4u;
            goto label_1924b4;
        }
    }
    ctx->pc = 0x1923E0u;
label_1923e0:
    // 0x1923e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1923e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1923e4: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1923E4u;
    SET_GPR_U32(ctx, 31, 0x1923ECu);
    ctx->pc = 0x1923E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1923E4u;
    // 0x1923e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x1923E4u, 0x1923ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1923ECu;
label_1923ec:
    // 0x1923ec: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1923ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1923f0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1923f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1923f4: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x1923f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1923f8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1923F8u;
    {
        const bool branch_taken_0x1923f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923F8u;
        // 0x1923fc: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923f8) {
            ctx->pc = 0x1924B4u;
            goto label_1924b4;
        }
    }
    ctx->pc = 0x192400u;
label_192400:
    // 0x192400: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192404: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192404u;
    SET_GPR_U32(ctx, 31, 0x19240Cu);
    ctx->pc = 0x192408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192404u;
    // 0x192408: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x192404u, 0x19240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19240Cu;
label_19240c:
    // 0x19240c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x19240cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x192410: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x192410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x192414: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x192414u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x192418: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x192418u;
    {
        const bool branch_taken_0x192418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192418u;
        // 0x19241c: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192418) {
            ctx->pc = 0x1924B4u;
            goto label_1924b4;
        }
    }
    ctx->pc = 0x192420u;
label_192420:
    // 0x192420: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192424: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192424u;
    SET_GPR_U32(ctx, 31, 0x19242Cu);
    ctx->pc = 0x192428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192424u;
    // 0x192428: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x192424u, 0x19242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19242Cu;
label_19242c:
    // 0x19242c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x19242cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x192430: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x192430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x192434: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x192434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x192438: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x192438u;
    {
        const bool branch_taken_0x192438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192438u;
        // 0x19243c: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192438) {
            ctx->pc = 0x1924B4u;
            goto label_1924b4;
        }
    }
    ctx->pc = 0x192440u;
label_192440:
    // 0x192440: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192444: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192444u;
    SET_GPR_U32(ctx, 31, 0x19244Cu);
    ctx->pc = 0x192448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192444u;
    // 0x192448: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x192444u, 0x19244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19244Cu;
label_19244c:
    // 0x19244c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x19244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x192450: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x192450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x192454: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x192454u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x192458: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x192458u;
    {
        const bool branch_taken_0x192458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192458u;
        // 0x19245c: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192458) {
            ctx->pc = 0x1924B4u;
            goto label_1924b4;
        }
    }
    ctx->pc = 0x192460u;
label_192460:
    // 0x192460: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192464: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x192464u;
    SET_GPR_U32(ctx, 31, 0x19246Cu);
    ctx->pc = 0x192468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192464u;
    // 0x192468: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x192464u, 0x19246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19246Cu;
label_19246c:
    // 0x19246c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x19246cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x192470: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x192470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x192474: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x192474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x192478: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x192478u;
    {
        const bool branch_taken_0x192478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192478u;
        // 0x19247c: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192478) {
            ctx->pc = 0x1924B4u;
            goto label_1924b4;
        }
    }
    ctx->pc = 0x192480u;
label_192480:
    // 0x192480: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x192480u;
    SET_GPR_U32(ctx, 31, 0x192488u);
    ctx->pc = 0x192484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192480u;
    // 0x192484: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x192480u, 0x192488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192488u;
label_192488:
    // 0x192488: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x192488u;
    {
        const bool branch_taken_0x192488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192488) {
            ctx->pc = 0x1924B4u;
            goto label_1924b4;
        }
    }
    ctx->pc = 0x192490u;
    // 0x192490: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x192490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x192494: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x192494u;
    {
        const bool branch_taken_0x192494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192494u;
        // 0x192498: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192494) {
            ctx->pc = 0x1924B4u;
            goto label_1924b4;
        }
    }
    ctx->pc = 0x19249Cu;
label_19249c:
    // 0x19249c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x19249cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x1924a0: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x1924a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x1924a4: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x1924a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x1924a8: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x1924a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x1924ac: 0xc055728  jal         func_155CA0
    ctx->pc = 0x1924ACu;
    SET_GPR_U32(ctx, 31, 0x1924B4u);
    ctx->pc = 0x1924B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1924ACu;
    // 0x1924b0: 0xac43d918  sw          $v1, -0x26E8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957336), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x1924ACu, 0x1924B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1924B4u;
label_1924b4:
    // 0x1924b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1924b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1924b8:
    // 0x1924b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1924b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1924bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1924BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1924C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924BCu;
        // 0x1924c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1924BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1924C4u;
    // 0x1924c4: 0x0  nop
    ctx->pc = 0x1924c4u;
    // NOP
    // 0x1924c8: 0x0  nop
    ctx->pc = 0x1924c8u;
    // NOP
    // 0x1924cc: 0x0  nop
    ctx->pc = 0x1924ccu;
    // NOP
}
