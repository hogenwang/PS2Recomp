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

// Function: sub_0017DBB0
// Address: 0x17dbb0 - 0x17e790
void sub_0017DBB0_0x17dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DBB0_0x17dbb0");
#endif

    switch (ctx->pc) {
        case 0x17dc10u: goto label_17dc10;
        case 0x17dc50u: goto label_17dc50;
        case 0x17dc84u: goto label_17dc84;
        case 0x17dcccu: goto label_17dccc;
        case 0x17dd4cu: goto label_17dd4c;
        case 0x17ddc4u: goto label_17ddc4;
        case 0x17de4cu: goto label_17de4c;
        case 0x17ded4u: goto label_17ded4;
        case 0x17dedcu: goto label_17dedc;
        case 0x17df64u: goto label_17df64;
        case 0x17dfa8u: goto label_17dfa8;
        case 0x17dfb0u: goto label_17dfb0;
        case 0x17dfbcu: goto label_17dfbc;
        case 0x17e008u: goto label_17e008;
        case 0x17e0a8u: goto label_17e0a8;
        case 0x17e0f8u: goto label_17e0f8;
        case 0x17e178u: goto label_17e178;
        case 0x17e1f8u: goto label_17e1f8;
        case 0x17e26cu: goto label_17e26c;
        case 0x17e274u: goto label_17e274;
        case 0x17e284u: goto label_17e284;
        case 0x17e35cu: goto label_17e35c;
        case 0x17e39cu: goto label_17e39c;
        case 0x17e3e0u: goto label_17e3e0;
        case 0x17e430u: goto label_17e430;
        case 0x17e438u: goto label_17e438;
        case 0x17e464u: goto label_17e464;
        case 0x17e49cu: goto label_17e49c;
        case 0x17e4b8u: goto label_17e4b8;
        case 0x17e4d8u: goto label_17e4d8;
        case 0x17e510u: goto label_17e510;
        case 0x17e518u: goto label_17e518;
        case 0x17e574u: goto label_17e574;
        case 0x17e5ecu: goto label_17e5ec;
        case 0x17e5f8u: goto label_17e5f8;
        case 0x17e608u: goto label_17e608;
        case 0x17e614u: goto label_17e614;
        case 0x17e624u: goto label_17e624;
        case 0x17e6fcu: goto label_17e6fc;
        case 0x17e708u: goto label_17e708;
        case 0x17e710u: goto label_17e710;
        case 0x17e730u: goto label_17e730;
        case 0x17e758u: goto label_17e758;
        case 0x17e76cu: goto label_17e76c;
        default: break;
    }

    ctx->pc = 0x17dbb0u;

    // 0x17dbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x17DBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DBB8u;
    // 0x17dbb8: 0x0  nop
    ctx->pc = 0x17dbb8u;
    // NOP
    // 0x17dbbc: 0x0  nop
    ctx->pc = 0x17dbbcu;
    // NOP
    // 0x17dbc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17dbc4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17dbc8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17dbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17dbcc: 0x2442b838  addiu       $v0, $v0, -0x47C8
    ctx->pc = 0x17dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948920));
    // 0x17dbd0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17dbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17dbd4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x17dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17dbd8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17dbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17dbdc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x17dbdcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dbe0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17dbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17dbe4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17dbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17dbe8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17dbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17dbec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17dbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17dbf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17dbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17dbf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17dbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17dbf8: 0x8c940010  lw          $s4, 0x10($a0)
    ctx->pc = 0x17dbf8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17dbfc: 0x92900000  lbu         $s0, 0x0($s4)
    ctx->pc = 0x17dbfcu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17dc00: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17dc04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17dc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc08: 0xc0c7d18  jal         func_31F460
    ctx->pc = 0x17DC08u;
    SET_GPR_U32(ctx, 31, 0x17DC10u);
    ctx->pc = 0x17DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC08u;
    // 0x17dc0c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F460u, 0x17DC08u, 0x17DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC10u;
label_17dc10:
    // 0x17dc10: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x17dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x17dc14: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17dc18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17dc1c: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x17dc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
    // 0x17dc20: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x17dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17dc24: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x17dc24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc28: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x17dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x17dc2c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17dc30: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x17dc30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17dc34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17dc38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17dc3c: 0x85b021  addu        $s6, $a0, $a1
    ctx->pc = 0x17dc3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17dc40: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x17dc44: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x17dc44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc48: 0x24423e60  addiu       $v0, $v0, 0x3E60
    ctx->pc = 0x17dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15968));
    // 0x17dc4c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x17dc4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17dc50:
    // 0x17dc50: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x17dc50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17dc54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17dc58: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x17dc5c: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x17dc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x17dc60: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x17dc60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17dc64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17dc68: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x17dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x17dc6c: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x17dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x17dc70: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x17DC70u;
    {
        const bool branch_taken_0x17dc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dc70) {
            ctx->pc = 0x17DEB8u;
            goto label_17deb8;
        }
    }
    ctx->pc = 0x17DC78u;
    // 0x17dc78: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x17dc78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17dc7c: 0xc062804  jal         func_18A010
    ctx->pc = 0x17DC7Cu;
    SET_GPR_U32(ctx, 31, 0x17DC84u);
    ctx->pc = 0x17DC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC7Cu;
    // 0x17dc80: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x17DC7Cu, 0x17DC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC84u;
label_17dc84:
    // 0x17dc84: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x17dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x17dc88: 0x9043f35a  lbu         $v1, -0xCA6($v0)
    ctx->pc = 0x17dc88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x17dc8c: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x17DC8Cu;
    {
        const bool branch_taken_0x17dc8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dc8c) {
            ctx->pc = 0x17DCF8u;
            goto label_17dcf8;
        }
    }
    ctx->pc = 0x17DC94u;
    // 0x17dc94: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DC94u;
    {
        const bool branch_taken_0x17dc94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dc94) {
            ctx->pc = 0x17DCB0u;
            goto label_17dcb0;
        }
    }
    ctx->pc = 0x17DC9Cu;
    // 0x17dc9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17dca0: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x17dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x17dca4: 0xa2630586  sb          $v1, 0x586($s3)
    ctx->pc = 0x17dca4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1414), (uint8_t)GPR_U32(ctx, 3));
    // 0x17dca8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17DCA8u;
    {
        const bool branch_taken_0x17dca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCA8u;
        // 0x17dcac: 0xa66200f2  sh          $v0, 0xF2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dca8) {
            ctx->pc = 0x17DCE0u;
            goto label_17dce0;
        }
    }
    ctx->pc = 0x17DCB0u;
label_17dcb0:
    // 0x17dcb0: 0xa2600586  sb          $zero, 0x586($s3)
    ctx->pc = 0x17dcb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1414), (uint8_t)GPR_U32(ctx, 0));
    // 0x17dcb4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x17dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x17dcb8: 0xa66200f2  sh          $v0, 0xF2($s3)
    ctx->pc = 0x17dcb8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x17dcbc: 0x8e6500dc  lw          $a1, 0xDC($s3)
    ctx->pc = 0x17dcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x17dcc0: 0x966600ea  lhu         $a2, 0xEA($s3)
    ctx->pc = 0x17dcc0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
    // 0x17dcc4: 0xc063900  jal         func_18E400
    ctx->pc = 0x17DCC4u;
    SET_GPR_U32(ctx, 31, 0x17DCCCu);
    ctx->pc = 0x17DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DCC4u;
    // 0x17dcc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E400u, 0x17DCC4u, 0x17DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DCCCu;
label_17dccc:
    // 0x17dccc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17dcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17dcd0: 0x966200f2  lhu         $v0, 0xF2($s3)
    ctx->pc = 0x17dcd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 242)));
    // 0x17dcd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17dcd8: 0xa66200f2  sh          $v0, 0xF2($s3)
    ctx->pc = 0x17dcd8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x17dcdc: 0x0  nop
    ctx->pc = 0x17dcdcu;
    // NOP
label_17dce0:
    // 0x17dce0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17dce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17dce4: 0x240202a0  addiu       $v0, $zero, 0x2A0
    ctx->pc = 0x17dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x17dce8: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x17dce8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17dcec: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x17DCECu;
    {
        const bool branch_taken_0x17dcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCECu;
        // 0x17dcf0: 0xa6620002  sh          $v0, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dcec) {
            ctx->pc = 0x17DE70u;
            goto label_17de70;
        }
    }
    ctx->pc = 0x17DCF4u;
    // 0x17dcf4: 0x0  nop
    ctx->pc = 0x17dcf4u;
    // NOP
label_17dcf8:
    // 0x17dcf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17dcfc: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x17DCFCu;
    {
        const bool branch_taken_0x17dcfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17dcfc) {
            ctx->pc = 0x17DDE8u;
            goto label_17dde8;
        }
    }
    ctx->pc = 0x17DD04u;
    // 0x17dd04: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17dd08: 0x8042da00  lb          $v0, -0x2600($v0)
    ctx->pc = 0x17dd08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957568)));
    // 0x17dd0c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x17DD0Cu;
    {
        const bool branch_taken_0x17dd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dd0c) {
            ctx->pc = 0x17DD78u;
            goto label_17dd78;
        }
    }
    ctx->pc = 0x17DD14u;
    // 0x17dd14: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DD14u;
    {
        const bool branch_taken_0x17dd14 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd14) {
            ctx->pc = 0x17DD30u;
            goto label_17dd30;
        }
    }
    ctx->pc = 0x17DD1Cu;
    // 0x17dd1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17dd20: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x17dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x17dd24: 0xa2630586  sb          $v1, 0x586($s3)
    ctx->pc = 0x17dd24u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1414), (uint8_t)GPR_U32(ctx, 3));
    // 0x17dd28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17DD28u;
    {
        const bool branch_taken_0x17dd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD28u;
        // 0x17dd2c: 0xa66200f2  sh          $v0, 0xF2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd28) {
            ctx->pc = 0x17DD60u;
            goto label_17dd60;
        }
    }
    ctx->pc = 0x17DD30u;
label_17dd30:
    // 0x17dd30: 0xa2600586  sb          $zero, 0x586($s3)
    ctx->pc = 0x17dd30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1414), (uint8_t)GPR_U32(ctx, 0));
    // 0x17dd34: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x17dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x17dd38: 0xa66200f2  sh          $v0, 0xF2($s3)
    ctx->pc = 0x17dd38u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x17dd3c: 0x8e6500dc  lw          $a1, 0xDC($s3)
    ctx->pc = 0x17dd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x17dd40: 0x966600ea  lhu         $a2, 0xEA($s3)
    ctx->pc = 0x17dd40u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
    // 0x17dd44: 0xc063900  jal         func_18E400
    ctx->pc = 0x17DD44u;
    SET_GPR_U32(ctx, 31, 0x17DD4Cu);
    ctx->pc = 0x17DD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD44u;
    // 0x17dd48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E400u, 0x17DD44u, 0x17DD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD4Cu;
label_17dd4c:
    // 0x17dd4c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17dd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17dd50: 0x966200f2  lhu         $v0, 0xF2($s3)
    ctx->pc = 0x17dd50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 242)));
    // 0x17dd54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17dd58: 0xa66200f2  sh          $v0, 0xF2($s3)
    ctx->pc = 0x17dd58u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x17dd5c: 0x0  nop
    ctx->pc = 0x17dd5cu;
    // NOP
label_17dd60:
    // 0x17dd60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17dd64: 0x240202a0  addiu       $v0, $zero, 0x2A0
    ctx->pc = 0x17dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x17dd68: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x17dd68u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17dd6c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x17DD6Cu;
    {
        const bool branch_taken_0x17dd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD6Cu;
        // 0x17dd70: 0xa6620002  sh          $v0, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd6c) {
            ctx->pc = 0x17DE70u;
            goto label_17de70;
        }
    }
    ctx->pc = 0x17DD74u;
    // 0x17dd74: 0x0  nop
    ctx->pc = 0x17dd74u;
    // NOP
label_17dd78:
    // 0x17dd78: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x17DD78u;
    {
        const bool branch_taken_0x17dd78 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd78) {
            ctx->pc = 0x17DDA8u;
            goto label_17dda8;
        }
    }
    ctx->pc = 0x17DD80u;
    // 0x17dd80: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x17dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x17dd84: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17dd88: 0xa66200f2  sh          $v0, 0xF2($s3)
    ctx->pc = 0x17dd88u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x17dd8c: 0xa26300f6  sb          $v1, 0xF6($s3)
    ctx->pc = 0x17dd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 246), (uint8_t)GPR_U32(ctx, 3));
    // 0x17dd90: 0x240202a0  addiu       $v0, $zero, 0x2A0
    ctx->pc = 0x17dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x17dd94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17dd98: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x17dd98u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17dd9c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x17DD9Cu;
    {
        const bool branch_taken_0x17dd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD9Cu;
        // 0x17dda0: 0xa6620002  sh          $v0, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd9c) {
            ctx->pc = 0x17DE70u;
            goto label_17de70;
        }
    }
    ctx->pc = 0x17DDA4u;
    // 0x17dda4: 0x0  nop
    ctx->pc = 0x17dda4u;
    // NOP
label_17dda8:
    // 0x17dda8: 0xa2600586  sb          $zero, 0x586($s3)
    ctx->pc = 0x17dda8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1414), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ddac: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x17ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x17ddb0: 0xa66200f2  sh          $v0, 0xF2($s3)
    ctx->pc = 0x17ddb0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x17ddb4: 0x8e6500dc  lw          $a1, 0xDC($s3)
    ctx->pc = 0x17ddb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x17ddb8: 0x966600ea  lhu         $a2, 0xEA($s3)
    ctx->pc = 0x17ddb8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
    // 0x17ddbc: 0xc063900  jal         func_18E400
    ctx->pc = 0x17DDBCu;
    SET_GPR_U32(ctx, 31, 0x17DDC4u);
    ctx->pc = 0x17DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDBCu;
    // 0x17ddc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E400u, 0x17DDBCu, 0x17DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DDC4u;
label_17ddc4:
    // 0x17ddc4: 0x966300f2  lhu         $v1, 0xF2($s3)
    ctx->pc = 0x17ddc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 242)));
    // 0x17ddc8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x17ddc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17ddcc: 0x240202a0  addiu       $v0, $zero, 0x2A0
    ctx->pc = 0x17ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x17ddd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17ddd4: 0xa66300f2  sh          $v1, 0xF2($s3)
    ctx->pc = 0x17ddd4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x17ddd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17dddc: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x17dddcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17dde0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x17DDE0u;
    {
        const bool branch_taken_0x17dde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDE0u;
        // 0x17dde4: 0xa6620002  sh          $v0, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dde0) {
            ctx->pc = 0x17DE70u;
            goto label_17de70;
        }
    }
    ctx->pc = 0x17DDE8u;
label_17dde8:
    // 0x17dde8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ddec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DDECu;
    {
        const bool branch_taken_0x17ddec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17ddec) {
            ctx->pc = 0x17DE00u;
            goto label_17de00;
        }
    }
    ctx->pc = 0x17DDF4u;
    // 0x17ddf4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17ddf8: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x17DDF8u;
    {
        const bool branch_taken_0x17ddf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17ddf8) {
            ctx->pc = 0x17DE70u;
            goto label_17de70;
        }
    }
    ctx->pc = 0x17DE00u;
label_17de00:
    // 0x17de00: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x17DE00u;
    {
        const bool branch_taken_0x17de00 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x17de00) {
            ctx->pc = 0x17DE30u;
            goto label_17de30;
        }
    }
    ctx->pc = 0x17DE08u;
    // 0x17de08: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x17de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x17de0c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17de10: 0xa66200f2  sh          $v0, 0xF2($s3)
    ctx->pc = 0x17de10u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x17de14: 0xa26300f6  sb          $v1, 0xF6($s3)
    ctx->pc = 0x17de14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 246), (uint8_t)GPR_U32(ctx, 3));
    // 0x17de18: 0x240202a0  addiu       $v0, $zero, 0x2A0
    ctx->pc = 0x17de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x17de1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17de20: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x17de20u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17de24: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17DE24u;
    {
        const bool branch_taken_0x17de24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE24u;
        // 0x17de28: 0xa6620002  sh          $v0, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de24) {
            ctx->pc = 0x17DE70u;
            goto label_17de70;
        }
    }
    ctx->pc = 0x17DE2Cu;
    // 0x17de2c: 0x0  nop
    ctx->pc = 0x17de2cu;
    // NOP
label_17de30:
    // 0x17de30: 0xa2600586  sb          $zero, 0x586($s3)
    ctx->pc = 0x17de30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1414), (uint8_t)GPR_U32(ctx, 0));
    // 0x17de34: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x17de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x17de38: 0xa66200f2  sh          $v0, 0xF2($s3)
    ctx->pc = 0x17de38u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x17de3c: 0x8e6500dc  lw          $a1, 0xDC($s3)
    ctx->pc = 0x17de3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x17de40: 0x966600ea  lhu         $a2, 0xEA($s3)
    ctx->pc = 0x17de40u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
    // 0x17de44: 0xc063900  jal         func_18E400
    ctx->pc = 0x17DE44u;
    SET_GPR_U32(ctx, 31, 0x17DE4Cu);
    ctx->pc = 0x17DE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DE44u;
    // 0x17de48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E400u, 0x17DE44u, 0x17DE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DE4Cu;
label_17de4c:
    // 0x17de4c: 0x966300f2  lhu         $v1, 0xF2($s3)
    ctx->pc = 0x17de4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 242)));
    // 0x17de50: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x17de50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17de54: 0x240202a0  addiu       $v0, $zero, 0x2A0
    ctx->pc = 0x17de54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x17de58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17de58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17de5c: 0xa66300f2  sh          $v1, 0xF2($s3)
    ctx->pc = 0x17de5cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x17de60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17de60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17de64: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x17de64u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17de68: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x17de68u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x17de6c: 0x0  nop
    ctx->pc = 0x17de6cu;
    // NOP
label_17de70:
    // 0x17de70: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x17de70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17de74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17de74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17de78: 0xa6630012  sh          $v1, 0x12($s3)
    ctx->pc = 0x17de78u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x17de7c: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x17de7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x17de80: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DE80u;
    {
        const bool branch_taken_0x17de80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x17DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE80u;
        // 0x17de84: 0xa6630014  sh          $v1, 0x14($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de80) {
            ctx->pc = 0x17DEA8u;
            goto label_17dea8;
        }
    }
    ctx->pc = 0x17DE88u;
    // 0x17de88: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DE88u;
    {
        const bool branch_taken_0x17de88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17de88) {
            ctx->pc = 0x17DE98u;
            goto label_17de98;
        }
    }
    ctx->pc = 0x17DE90u;
    // 0x17de90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17DE90u;
    {
        const bool branch_taken_0x17de90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17de90) {
            ctx->pc = 0x17DEB8u;
            goto label_17deb8;
        }
    }
    ctx->pc = 0x17DE98u;
label_17de98:
    // 0x17de98: 0x9262008c  lbu         $v0, 0x8C($s3)
    ctx->pc = 0x17de98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x17de9c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x17de9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x17dea0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17DEA0u;
    {
        const bool branch_taken_0x17dea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEA0u;
        // 0x17dea4: 0xa262008c  sb          $v0, 0x8C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dea0) {
            ctx->pc = 0x17DEB8u;
            goto label_17deb8;
        }
    }
    ctx->pc = 0x17DEA8u;
label_17dea8:
    // 0x17dea8: 0x9262008c  lbu         $v0, 0x8C($s3)
    ctx->pc = 0x17dea8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x17deac: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x17deacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x17deb0: 0xa262008c  sb          $v0, 0x8C($s3)
    ctx->pc = 0x17deb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x17deb4: 0x0  nop
    ctx->pc = 0x17deb4u;
    // NOP
label_17deb8:
    // 0x17deb8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x17deb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x17debc: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x17debcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17dec0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17dec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17dec4: 0x1440ff62  bnez        $v0, . + 4 + (-0x9E << 2)
    ctx->pc = 0x17DEC4u;
    {
        const bool branch_taken_0x17dec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEC4u;
        // 0x17dec8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dec4) {
            ctx->pc = 0x17DC50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17dc50;
        }
    }
    ctx->pc = 0x17DECCu;
    // 0x17decc: 0xc05f654  jal         func_17D950
    ctx->pc = 0x17DECCu;
    SET_GPR_U32(ctx, 31, 0x17DED4u);
    ctx->pc = 0x17DED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DECCu;
    // 0x17ded0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D950u, 0x17DECCu, 0x17DED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DED4u;
label_17ded4:
    // 0x17ded4: 0xc05f6b0  jal         func_17DAC0
    ctx->pc = 0x17DED4u;
    SET_GPR_U32(ctx, 31, 0x17DEDCu);
    ctx->pc = 0x17DED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DED4u;
    // 0x17ded8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DAC0u, 0x17DED4u, 0x17DEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DEDCu;
label_17dedc:
    // 0x17dedc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17dedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17dee0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17dee0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17dee4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17dee4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17dee8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17dee8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17deec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17deecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17def0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17def0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17def4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17def4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17def8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17def8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17defc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17defcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17df00: 0x3e00008  jr          $ra
    ctx->pc = 0x17DF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF00u;
        // 0x17df04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DF08u;
    // 0x17df08: 0x0  nop
    ctx->pc = 0x17df08u;
    // NOP
    // 0x17df0c: 0x0  nop
    ctx->pc = 0x17df0cu;
    // NOP
    // 0x17df10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17df10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17df14: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x17df14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x17df18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17df18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17df1c: 0x90634820  lbu         $v1, 0x4820($v1)
    ctx->pc = 0x17df1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18464)));
    // 0x17df20: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x17df20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x17df24: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x17DF24u;
    {
        const bool branch_taken_0x17df24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17df24) {
            ctx->pc = 0x17DF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DF24u;
            // 0x17df28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DF68u;
            goto label_17df68;
        }
    }
    ctx->pc = 0x17DF2Cu;
    // 0x17df2c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x17df2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17df30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17df30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17df34: 0x2442db62  addiu       $v0, $v0, -0x249E
    ctx->pc = 0x17df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957922));
    // 0x17df38: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x17df38u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17df3c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17df40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17df40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17df44: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17df44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17df48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17df48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17df4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17df4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17df50: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x17df50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17df54: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x17df54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17df58: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x17df58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x17df5c: 0xc05f6b0  jal         func_17DAC0
    ctx->pc = 0x17DF5Cu;
    SET_GPR_U32(ctx, 31, 0x17DF64u);
    ctx->pc = 0x17DF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF5Cu;
    // 0x17df60: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DAC0u, 0x17DF5Cu, 0x17DF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF64u;
label_17df64:
    // 0x17df64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17df64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17df68:
    // 0x17df68: 0x3e00008  jr          $ra
    ctx->pc = 0x17DF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF68u;
        // 0x17df6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DF70u;
    // 0x17df70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17df70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x17df74: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17df74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17df78: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17df78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17df7c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17df7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17df80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17df80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17df84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17df84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17df88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17df88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17df8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17df8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17df90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17df90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17df94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17df94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17df98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17df98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17df9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17df9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfa0: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x17dfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x17dfa4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17dfa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17dfa8:
    // 0x17dfa8: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x17DFA8u;
    SET_GPR_U32(ctx, 31, 0x17DFB0u);
    ctx->pc = 0x17DFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DFA8u;
    // 0x17dfac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x17DFA8u, 0x17DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DFB0u;
label_17dfb0:
    // 0x17dfb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17dfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfb4: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x17DFB4u;
    SET_GPR_U32(ctx, 31, 0x17DFBCu);
    ctx->pc = 0x17DFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DFB4u;
    // 0x17dfb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x17DFB4u, 0x17DFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DFBCu;
label_17dfbc:
    // 0x17dfbc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x17dfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x17dfc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17dfc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17dfc4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x17dfc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17dfc8: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x17dfc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17dfcc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17DFCCu;
    {
        const bool branch_taken_0x17dfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dfcc) {
            ctx->pc = 0x17DFA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17dfa8;
        }
    }
    ctx->pc = 0x17DFD4u;
    // 0x17dfd4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x17dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x17dfd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17dfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfdc: 0x8c550010  lw          $s5, 0x10($v0)
    ctx->pc = 0x17dfdcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17dfe0: 0x92b60000  lbu         $s6, 0x0($s5)
    ctx->pc = 0x17dfe0u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17dfe4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17dfe8: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x17dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x17dfec: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x17dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x17dff0: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x17dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x17dff4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17dff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17dff8: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x17dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x17dffc: 0x3f0c0  sll         $fp, $v1, 3
    ctx->pc = 0x17dffcu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17e000: 0x5ea021  addu        $s4, $v0, $fp
    ctx->pc = 0x17e000u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x17e004: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17e004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17e008:
    // 0x17e008: 0x90a20028  lbu         $v0, 0x28($a1)
    ctx->pc = 0x17e008u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x17e00c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e010: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x17e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x17e014: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x17e014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x17e018: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17E018u;
    {
        const bool branch_taken_0x17e018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e018) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17E020u;
    // 0x17e020: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E020u;
    {
        const bool branch_taken_0x17e020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E020u;
        // 0x17e024: 0x8c430010  lw          $v1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e020) {
            ctx->pc = 0x17E038u;
            goto label_17e038;
        }
    }
    ctx->pc = 0x17E028u;
    // 0x17e028: 0x9062008c  lbu         $v0, 0x8C($v1)
    ctx->pc = 0x17e028u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x17e02c: 0x3442003c  ori         $v0, $v0, 0x3C
    ctx->pc = 0x17e02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60);
    // 0x17e030: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17E030u;
    {
        const bool branch_taken_0x17e030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E030u;
        // 0x17e034: 0xa062008c  sb          $v0, 0x8C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e030) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17E038u;
label_17e038:
    // 0x17e038: 0x9062008c  lbu         $v0, 0x8C($v1)
    ctx->pc = 0x17e038u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x17e03c: 0x304200c3  andi        $v0, $v0, 0xC3
    ctx->pc = 0x17e03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)195);
    // 0x17e040: 0xa062008c  sb          $v0, 0x8C($v1)
    ctx->pc = 0x17e040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x17e044: 0x0  nop
    ctx->pc = 0x17e044u;
    // NOP
label_17e048:
    // 0x17e048: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17e048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17e04c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x17e04cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17e050: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17E050u;
    {
        const bool branch_taken_0x17e050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E050u;
        // 0x17e054: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e050) {
            ctx->pc = 0x17E008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17e008;
        }
    }
    ctx->pc = 0x17E058u;
    // 0x17e058: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x17e058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17e05c: 0x30421f00  andi        $v0, $v0, 0x1F00
    ctx->pc = 0x17e05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7936);
    // 0x17e060: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x17E060u;
    {
        const bool branch_taken_0x17e060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e060) {
            ctx->pc = 0x17E064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E060u;
            // 0x17e064: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E170u;
            goto label_17e170;
        }
    }
    ctx->pc = 0x17E068u;
    // 0x17e068: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x17e068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x17e06c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x17e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x17e070: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x17e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x17e074: 0x24633e60  addiu       $v1, $v1, 0x3E60
    ctx->pc = 0x17e074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15968));
    // 0x17e078: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x17e078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e07c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17e07cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e080: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x17e080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x17e084: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x17e084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17e088: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x17e088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x17e08c: 0x32d000ff  andi        $s0, $s6, 0xFF
    ctx->pc = 0x17e08cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x17e090: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x17e090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17e094: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17e094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17e098: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x17e098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x17e09c: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x17e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x17e0a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17e0a4: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x17e0a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17e0a8:
    // 0x17e0a8: 0x92820028  lbu         $v0, 0x28($s4)
    ctx->pc = 0x17e0a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x17e0ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e0b0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x17e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x17e0b4: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x17e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x17e0b8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x17E0B8u;
    {
        const bool branch_taken_0x17e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e0b8) {
            ctx->pc = 0x17E140u;
            goto label_17e140;
        }
    }
    ctx->pc = 0x17E0C0u;
    // 0x17e0c0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x17E0C0u;
    {
        const bool branch_taken_0x17e0c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0C0u;
        // 0x17e0c4: 0x8c510010  lw          $s1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0c0) {
            ctx->pc = 0x17E0E0u;
            goto label_17e0e0;
        }
    }
    ctx->pc = 0x17E0C8u;
    // 0x17e0c8: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x17e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x17e0cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x17e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e0d0: 0xa62300f2  sh          $v1, 0xF2($s1)
    ctx->pc = 0x17e0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x17e0d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17E0D4u;
    {
        const bool branch_taken_0x17e0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0D4u;
        // 0x17e0d8: 0xa22200f6  sb          $v0, 0xF6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0d4) {
            ctx->pc = 0x17E0F0u;
            goto label_17e0f0;
        }
    }
    ctx->pc = 0x17E0DCu;
    // 0x17e0dc: 0x0  nop
    ctx->pc = 0x17e0dcu;
    // NOP
label_17e0e0:
    // 0x17e0e0: 0xa62000f2  sh          $zero, 0xF2($s1)
    ctx->pc = 0x17e0e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 0));
    // 0x17e0e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e0e8: 0xa22200f6  sb          $v0, 0xF6($s1)
    ctx->pc = 0x17e0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 246), (uint8_t)GPR_U32(ctx, 2));
    // 0x17e0ec: 0x0  nop
    ctx->pc = 0x17e0ecu;
    // NOP
label_17e0f0:
    // 0x17e0f0: 0xc0583f4  jal         func_160FD0
    ctx->pc = 0x17E0F0u;
    SET_GPR_U32(ctx, 31, 0x17E0F8u);
    ctx->pc = 0x17E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E0F0u;
    // 0x17e0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160FD0u, 0x17E0F0u, 0x17E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E0F8u;
label_17e0f8:
    // 0x17e0f8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x17e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17e0fc: 0x240302a0  addiu       $v1, $zero, 0x2A0
    ctx->pc = 0x17e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x17e100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e104: 0xa6240000  sh          $a0, 0x0($s1)
    ctx->pc = 0x17e104u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x17e108: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E108u;
    {
        const bool branch_taken_0x17e108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x17E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E108u;
        // 0x17e10c: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e108) {
            ctx->pc = 0x17E130u;
            goto label_17e130;
        }
    }
    ctx->pc = 0x17E110u;
    // 0x17e110: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E110u;
    {
        const bool branch_taken_0x17e110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e110) {
            ctx->pc = 0x17E120u;
            goto label_17e120;
        }
    }
    ctx->pc = 0x17E118u;
    // 0x17e118: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17E118u;
    {
        const bool branch_taken_0x17e118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e118) {
            ctx->pc = 0x17E140u;
            goto label_17e140;
        }
    }
    ctx->pc = 0x17E120u;
label_17e120:
    // 0x17e120: 0x9222008c  lbu         $v0, 0x8C($s1)
    ctx->pc = 0x17e120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x17e124: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x17e124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x17e128: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17E128u;
    {
        const bool branch_taken_0x17e128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E128u;
        // 0x17e12c: 0xa222008c  sb          $v0, 0x8C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e128) {
            ctx->pc = 0x17E140u;
            goto label_17e140;
        }
    }
    ctx->pc = 0x17E130u;
label_17e130:
    // 0x17e130: 0x9222008c  lbu         $v0, 0x8C($s1)
    ctx->pc = 0x17e130u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x17e134: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x17e134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x17e138: 0xa222008c  sb          $v0, 0x8C($s1)
    ctx->pc = 0x17e138u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x17e13c: 0x0  nop
    ctx->pc = 0x17e13cu;
    // NOP
label_17e140:
    // 0x17e140: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17e140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17e144: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x17e144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17e148: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x17e148u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x17e14c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x17E14Cu;
    {
        const bool branch_taken_0x17e14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E14Cu;
        // 0x17e150: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e14c) {
            ctx->pc = 0x17E0A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17e0a8;
        }
    }
    ctx->pc = 0x17E154u;
    // 0x17e154: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17e154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17e158: 0x2442db62  addiu       $v0, $v0, -0x249E
    ctx->pc = 0x17e158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957922));
    // 0x17e15c: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x17e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x17e160: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x17e160u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e164: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x17e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x17e168: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x17e168u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17e16c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17e16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17e170:
    // 0x17e170: 0xc05f60c  jal         func_17D830
    ctx->pc = 0x17E170u;
    SET_GPR_U32(ctx, 31, 0x17E178u);
    ctx->pc = 0x17D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D830u, 0x17E170u, 0x17E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E178u;
label_17e178:
    // 0x17e178: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17e178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17e17c: 0x2463db62  addiu       $v1, $v1, -0x249E
    ctx->pc = 0x17e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957922));
    // 0x17e180: 0x7e8021  addu        $s0, $v1, $fp
    ctx->pc = 0x17e180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x17e184: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x17e184u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17e188: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x17e188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x17e18c: 0x50600045  beql        $v1, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x17E18Cu;
    {
        const bool branch_taken_0x17e18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e18c) {
            ctx->pc = 0x17E190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E18Cu;
            // 0x17e190: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E2A4u;
            goto label_17e2a4;
        }
    }
    ctx->pc = 0x17E194u;
    // 0x17e194: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17e194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17e198: 0x2463b838  addiu       $v1, $v1, -0x47C8
    ctx->pc = 0x17e198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948920));
    // 0x17e19c: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x17e19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x17e1a0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x17e1a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17e1a4: 0x5060003d  beql        $v1, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x17E1A4u;
    {
        const bool branch_taken_0x17e1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e1a4) {
            ctx->pc = 0x17E1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E1A4u;
            // 0x17e1a8: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E29Cu;
            goto label_17e29c;
        }
    }
    ctx->pc = 0x17E1ACu;
    // 0x17e1ac: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17e1b0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x17e1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17e1b4: 0x9463b838  lhu         $v1, -0x47C8($v1)
    ctx->pc = 0x17e1b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294948920)));
    // 0x17e1b8: 0x14640039  bne         $v1, $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x17E1B8u;
    {
        const bool branch_taken_0x17e1b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17e1b8) {
            ctx->pc = 0x17E2A0u;
            goto label_17e2a0;
        }
    }
    ctx->pc = 0x17E1C0u;
    // 0x17e1c0: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x17e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x17e1c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17e1c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1c8: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x17e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x17e1cc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x17e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17e1d0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17e1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17e1d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17e1d8: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x17e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x17e1dc: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x17e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x17e1e0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17e1e4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x17e1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e1e8: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x17e1e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17e1ec: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x17e1ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1f0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17e1f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17e1f8:
    // 0x17e1f8: 0x91470028  lbu         $a3, 0x28($t2)
    ctx->pc = 0x17e1f8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x17e1fc: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x17e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x17e200: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x17e200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x17e204: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x17e204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x17e208: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x17E208u;
    {
        const bool branch_taken_0x17e208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e208) {
            ctx->pc = 0x17E250u;
            goto label_17e250;
        }
    }
    ctx->pc = 0x17E210u;
    // 0x17e210: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17E210u;
    {
        const bool branch_taken_0x17e210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e210) {
            ctx->pc = 0x17E230u;
            goto label_17e230;
        }
    }
    ctx->pc = 0x17E218u;
    // 0x17e218: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x17e218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x17e21c: 0xa066000a  sb          $a2, 0xA($v1)
    ctx->pc = 0x17e21cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 6));
    // 0x17e220: 0x91430028  lbu         $v1, 0x28($t2)
    ctx->pc = 0x17e220u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x17e224: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x17e224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x17e228: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17E228u;
    {
        const bool branch_taken_0x17e228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E228u;
        // 0x17e22c: 0xa0650010  sb          $a1, 0x10($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e228) {
            ctx->pc = 0x17E248u;
            goto label_17e248;
        }
    }
    ctx->pc = 0x17E230u;
label_17e230:
    // 0x17e230: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x17e230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x17e234: 0xa064000a  sb          $a0, 0xA($v1)
    ctx->pc = 0x17e234u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x17e238: 0x91430028  lbu         $v1, 0x28($t2)
    ctx->pc = 0x17e238u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x17e23c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x17e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x17e240: 0xa0650010  sb          $a1, 0x10($v1)
    ctx->pc = 0x17e240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x17e244: 0x0  nop
    ctx->pc = 0x17e244u;
    // NOP
label_17e248:
    // 0x17e248: 0xa1200164  sb          $zero, 0x164($t1)
    ctx->pc = 0x17e248u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 356), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e24c: 0xa1200165  sb          $zero, 0x165($t1)
    ctx->pc = 0x17e24cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 357), (uint8_t)GPR_U32(ctx, 0));
label_17e250:
    // 0x17e250: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17e250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17e254: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x17e254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17e258: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x17e258u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x17e25c: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17E25Cu;
    {
        const bool branch_taken_0x17e25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E25Cu;
        // 0x17e260: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e25c) {
            ctx->pc = 0x17E1F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17e1f8;
        }
    }
    ctx->pc = 0x17E264u;
    // 0x17e264: 0xc05f654  jal         func_17D950
    ctx->pc = 0x17E264u;
    SET_GPR_U32(ctx, 31, 0x17E26Cu);
    ctx->pc = 0x17E268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E264u;
    // 0x17e268: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D950u, 0x17E264u, 0x17E26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E26Cu;
label_17e26c:
    // 0x17e26c: 0xc05f6b0  jal         func_17DAC0
    ctx->pc = 0x17E26Cu;
    SET_GPR_U32(ctx, 31, 0x17E274u);
    ctx->pc = 0x17E270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E26Cu;
    // 0x17e270: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DAC0u, 0x17E26Cu, 0x17E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E274u;
label_17e274:
    // 0x17e274: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x17e274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x17e278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e27c: 0xc0c7d18  jal         func_31F460
    ctx->pc = 0x17E27Cu;
    SET_GPR_U32(ctx, 31, 0x17E284u);
    ctx->pc = 0x17E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E27Cu;
    // 0x17e280: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F460u, 0x17E27Cu, 0x17E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E284u;
label_17e284:
    // 0x17e284: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x17e284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x17e288: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x17e288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x17e28c: 0x8c84d918  lw          $a0, -0x26E8($a0)
    ctx->pc = 0x17e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957336)));
    // 0x17e290: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x17e290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x17e294: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17E294u;
    {
        const bool branch_taken_0x17e294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E294u;
        // 0x17e298: 0xac64d918  sw          $a0, -0x26E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957336), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e294) {
            ctx->pc = 0x17E2A0u;
            goto label_17e2a0;
        }
    }
    ctx->pc = 0x17E29Cu;
label_17e29c:
    // 0x17e29c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x17e29cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_17e2a0:
    // 0x17e2a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17e2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_17e2a4:
    // 0x17e2a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17e2a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17e2a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17e2a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17e2ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17e2acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e2b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17e2b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e2b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17e2b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e2b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17e2b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e2bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e2bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e2c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e2c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x17E2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2C8u;
        // 0x17e2cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E2D0u;
    // 0x17e2d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17e2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17e2d4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x17e2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x17e2d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17e2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17e2dc: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17e2e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17e2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17e2e4: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x17e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x17e2e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17e2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17e2ec: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x17e2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17e2f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17e2f4: 0x24c6b838  addiu       $a2, $a2, -0x47C8
    ctx->pc = 0x17e2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948920));
    // 0x17e2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17e2fc: 0x24a5dbb4  addiu       $a1, $a1, -0x244C
    ctx->pc = 0x17e2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958004));
    // 0x17e300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e304: 0x2402d9ff  addiu       $v0, $zero, -0x2601
    ctx->pc = 0x17e304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957567));
    // 0x17e308: 0x8c930010  lw          $s3, 0x10($a0)
    ctx->pc = 0x17e308u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17e30c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17e30cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e310: 0x92670000  lbu         $a3, 0x0($s3)
    ctx->pc = 0x17e310u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17e314: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17e314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e318: 0xc78821  addu        $s1, $a2, $a3
    ctx->pc = 0x17e318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x17e31c: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x17e31cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x17e320: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x17e320u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e324: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x17e324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x17e328: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x17e328u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17e32c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x17e32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x17e330: 0x680c0  sll         $s0, $a2, 3
    ctx->pc = 0x17e330u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17e334: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x17e334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x17e338: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x17e338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17e33c: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x17e33cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x17e340: 0x8e450494  lw          $a1, 0x494($s2)
    ctx->pc = 0x17e340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x17e344: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17e344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17e348: 0xae430494  sw          $v1, 0x494($s2)
    ctx->pc = 0x17e348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 3));
    // 0x17e34c: 0x8e430270  lw          $v1, 0x270($s2)
    ctx->pc = 0x17e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
    // 0x17e350: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17e350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17e354: 0xc05f60c  jal         func_17D830
    ctx->pc = 0x17E354u;
    SET_GPR_U32(ctx, 31, 0x17E35Cu);
    ctx->pc = 0x17E358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E354u;
    // 0x17e358: 0xae420270  sw          $v0, 0x270($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D830u, 0x17E354u, 0x17E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E35Cu;
label_17e35c:
    // 0x17e35c: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x17e35cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17e360: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17e360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17e364: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x17e364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x17e368: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17e368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17e36c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17e370: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17e370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17e374: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17e374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17e378: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17e378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17e37c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17e380: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x17e380u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e384: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x17E384u;
    {
        const bool branch_taken_0x17e384 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E384u;
        // 0x17e388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e384) {
            ctx->pc = 0x17E3D8u;
            goto label_17e3d8;
        }
    }
    ctx->pc = 0x17E38Cu;
    // 0x17e38c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17e390: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x17e390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17e394: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x17e394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
    // 0x17e398: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x17e398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_17e39c:
    // 0x17e39c: 0x90a30010  lbu         $v1, 0x10($a1)
    ctx->pc = 0x17e39cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x17e3a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17e3a4: 0xa0a3000a  sb          $v1, 0xA($a1)
    ctx->pc = 0x17e3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x17e3a8: 0xa0a60010  sb          $a2, 0x10($a1)
    ctx->pc = 0x17e3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x17e3ac: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x17e3acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17e3b0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17e3b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17e3b8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17e3bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17e3c0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17e3c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17e3c8: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x17e3c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x17e3cc: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x17e3ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17e3d0: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x17E3D0u;
    {
        const bool branch_taken_0x17e3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e3d0) {
            ctx->pc = 0x17E3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E3D0u;
            // 0x17e3d4: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E39Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17e39c;
        }
    }
    ctx->pc = 0x17E3D8u;
label_17e3d8:
    // 0x17e3d8: 0xc05f654  jal         func_17D950
    ctx->pc = 0x17E3D8u;
    SET_GPR_U32(ctx, 31, 0x17E3E0u);
    ctx->pc = 0x17E3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E3D8u;
    // 0x17e3dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D950u, 0x17E3D8u, 0x17E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E3E0u;
label_17e3e0:
    // 0x17e3e0: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x17e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x17e3e4: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x17e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x17e3e8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x17e3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x17e3ec: 0x5060004b  beql        $v1, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x17E3ECu;
    {
        const bool branch_taken_0x17e3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e3ec) {
            ctx->pc = 0x17E3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E3ECu;
            // 0x17e3f0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E51Cu;
            goto label_17e51c;
        }
    }
    ctx->pc = 0x17E3F4u;
    // 0x17e3f4: 0x924304f0  lbu         $v1, 0x4F0($s2)
    ctx->pc = 0x17e3f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1264)));
    // 0x17e3f8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x17e3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x17e3fc: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x17E3FCu;
    {
        const bool branch_taken_0x17e3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e3fc) {
            ctx->pc = 0x17E400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E3FCu;
            // 0x17e400: 0x964300ec  lhu         $v1, 0xEC($s2) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E440u;
            goto label_17e440;
        }
    }
    ctx->pc = 0x17E404u;
    // 0x17e404: 0x964400ec  lhu         $a0, 0xEC($s2)
    ctx->pc = 0x17e404u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x17e408: 0x2883012b  slti        $v1, $a0, 0x12B
    ctx->pc = 0x17e408u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)299) ? 1 : 0);
    // 0x17e40c: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x17E40Cu;
    {
        const bool branch_taken_0x17e40c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e40c) {
            ctx->pc = 0x17E518u;
            goto label_17e518;
        }
    }
    ctx->pc = 0x17E414u;
    // 0x17e414: 0x2881012e  slti        $at, $a0, 0x12E
    ctx->pc = 0x17e414u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)302) ? 1 : 0);
    // 0x17e418: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x17E418u;
    {
        const bool branch_taken_0x17e418 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e418) {
            ctx->pc = 0x17E518u;
            goto label_17e518;
        }
    }
    ctx->pc = 0x17E420u;
    // 0x17e420: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x17e420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17e424: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17e424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e428: 0xc05f654  jal         func_17D950
    ctx->pc = 0x17E428u;
    SET_GPR_U32(ctx, 31, 0x17E430u);
    ctx->pc = 0x17E42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E428u;
    // 0x17e42c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D950u, 0x17E428u, 0x17E430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E430u;
label_17e430:
    // 0x17e430: 0xc05f6b0  jal         func_17DAC0
    ctx->pc = 0x17E430u;
    SET_GPR_U32(ctx, 31, 0x17E438u);
    ctx->pc = 0x17E434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E430u;
    // 0x17e434: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DAC0u, 0x17E430u, 0x17E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E438u;
label_17e438:
    // 0x17e438: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x17E438u;
    {
        const bool branch_taken_0x17e438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e438) {
            ctx->pc = 0x17E518u;
            goto label_17e518;
        }
    }
    ctx->pc = 0x17E440u;
label_17e440:
    // 0x17e440: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E440u;
    {
        const bool branch_taken_0x17e440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e440) {
            ctx->pc = 0x17E444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E440u;
            // 0x17e444: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E45Cu;
            goto label_17e45c;
        }
    }
    ctx->pc = 0x17E448u;
    // 0x17e448: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17e448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17e44c: 0x8463da30  lh          $v1, -0x25D0($v1)
    ctx->pc = 0x17e44cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957616)));
    // 0x17e450: 0x4610031  bgez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x17E450u;
    {
        const bool branch_taken_0x17e450 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x17e450) {
            ctx->pc = 0x17E518u;
            goto label_17e518;
        }
    }
    ctx->pc = 0x17E458u;
    // 0x17e458: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x17e458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_17e45c:
    // 0x17e45c: 0xc062804  jal         func_18A010
    ctx->pc = 0x17E45Cu;
    SET_GPR_U32(ctx, 31, 0x17E464u);
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x17E45Cu, 0x17E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E464u;
label_17e464:
    // 0x17e464: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17e464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17e468: 0x2442db56  addiu       $v0, $v0, -0x24AA
    ctx->pc = 0x17e468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957910));
    // 0x17e46c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17e470: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17e470u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e474: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17e474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17e478: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x17E478u;
    {
        const bool branch_taken_0x17e478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e478) {
            ctx->pc = 0x17E47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E478u;
            // 0x17e47c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E4C0u;
            goto label_17e4c0;
        }
    }
    ctx->pc = 0x17E480u;
    // 0x17e480: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17e480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e484: 0x24020106  addiu       $v0, $zero, 0x106
    ctx->pc = 0x17e484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x17e488: 0xa2440586  sb          $a0, 0x586($s2)
    ctx->pc = 0x17e488u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1414), (uint8_t)GPR_U32(ctx, 4));
    // 0x17e48c: 0xa64200f2  sh          $v0, 0xF2($s2)
    ctx->pc = 0x17e48cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x17e490: 0x964600ea  lhu         $a2, 0xEA($s2)
    ctx->pc = 0x17e490u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
    // 0x17e494: 0xc063900  jal         func_18E400
    ctx->pc = 0x17E494u;
    SET_GPR_U32(ctx, 31, 0x17E49Cu);
    ctx->pc = 0x17E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E494u;
    // 0x17e498: 0x8e4500dc  lw          $a1, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E400u, 0x17E494u, 0x17E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E49Cu;
label_17e49c:
    // 0x17e49c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17e49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17e4a0: 0x964200f2  lhu         $v0, 0xF2($s2)
    ctx->pc = 0x17e4a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 242)));
    // 0x17e4a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e4a8: 0xa64200f2  sh          $v0, 0xF2($s2)
    ctx->pc = 0x17e4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x17e4ac: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x17e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x17e4b0: 0xc04bfa4  jal         func_12FE90
    ctx->pc = 0x17E4B0u;
    SET_GPR_U32(ctx, 31, 0x17E4B8u);
    ctx->pc = 0x17E4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E4B0u;
    // 0x17e4b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FE90u, 0x17E4B0u, 0x17E4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4B8u;
label_17e4b8:
    // 0x17e4b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17E4B8u;
    {
        const bool branch_taken_0x17e4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4B8u;
        // 0x17e4bc: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e4b8) {
            ctx->pc = 0x17E4ECu;
            goto label_17e4ec;
        }
    }
    ctx->pc = 0x17E4C0u;
label_17e4c0:
    // 0x17e4c0: 0x2402010a  addiu       $v0, $zero, 0x10A
    ctx->pc = 0x17e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    // 0x17e4c4: 0xa2440586  sb          $a0, 0x586($s2)
    ctx->pc = 0x17e4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1414), (uint8_t)GPR_U32(ctx, 4));
    // 0x17e4c8: 0xa64200f2  sh          $v0, 0xF2($s2)
    ctx->pc = 0x17e4c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x17e4cc: 0x964600ea  lhu         $a2, 0xEA($s2)
    ctx->pc = 0x17e4ccu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
    // 0x17e4d0: 0xc063900  jal         func_18E400
    ctx->pc = 0x17E4D0u;
    SET_GPR_U32(ctx, 31, 0x17E4D8u);
    ctx->pc = 0x17E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E4D0u;
    // 0x17e4d4: 0x8e4500dc  lw          $a1, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E400u, 0x17E4D0u, 0x17E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4D8u;
label_17e4d8:
    // 0x17e4d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17e4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17e4dc: 0x964200f2  lhu         $v0, 0xF2($s2)
    ctx->pc = 0x17e4dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 242)));
    // 0x17e4e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e4e4: 0xa64200f2  sh          $v0, 0xF2($s2)
    ctx->pc = 0x17e4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x17e4e8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x17e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_17e4ec:
    // 0x17e4ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e4f0: 0xa24200f6  sb          $v0, 0xF6($s2)
    ctx->pc = 0x17e4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 246), (uint8_t)GPR_U32(ctx, 2));
    // 0x17e4f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17e4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4f8: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x17e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x17e4fc: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x17e4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x17e500: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x17e500u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x17e504: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x17e504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17e508: 0xc05f654  jal         func_17D950
    ctx->pc = 0x17E508u;
    SET_GPR_U32(ctx, 31, 0x17E510u);
    ctx->pc = 0x17E50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E508u;
    // 0x17e50c: 0xa043000a  sb          $v1, 0xA($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D950u, 0x17E508u, 0x17E510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E510u;
label_17e510:
    // 0x17e510: 0xc05f6b0  jal         func_17DAC0
    ctx->pc = 0x17E510u;
    SET_GPR_U32(ctx, 31, 0x17E518u);
    ctx->pc = 0x17E514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E510u;
    // 0x17e514: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DAC0u, 0x17E510u, 0x17E518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E518u;
label_17e518:
    // 0x17e518: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17e518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17e51c:
    // 0x17e51c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17e51cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e520: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17e520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e524: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e52c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e530: 0x3e00008  jr          $ra
    ctx->pc = 0x17E530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E530u;
        // 0x17e534: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E538u;
    // 0x17e538: 0x0  nop
    ctx->pc = 0x17e538u;
    // NOP
    // 0x17e53c: 0x0  nop
    ctx->pc = 0x17e53cu;
    // NOP
    // 0x17e540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17e540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17e544: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17e544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17e548: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17e548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17e54c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17e54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e550: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17e550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17e554: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17e554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e558: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17e55c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17e560: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17e560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e564: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e568: 0x9045db10  lbu         $a1, -0x24F0($v0)
    ctx->pc = 0x17e568u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x17e56c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e570: 0xe31004  sllv        $v0, $v1, $a3
    ctx->pc = 0x17e570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_17e574:
    // 0x17e574: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x17e574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x17e578: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E578u;
    {
        const bool branch_taken_0x17e578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e578) {
            ctx->pc = 0x17E588u;
            goto label_17e588;
        }
    }
    ctx->pc = 0x17E580u;
    // 0x17e580: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x17e580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17e584: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x17e584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17e588:
    // 0x17e588: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17e588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17e58c: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x17e58cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17e590: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17E590u;
    {
        const bool branch_taken_0x17e590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e590) {
            ctx->pc = 0x17E594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E590u;
            // 0x17e594: 0xe31004  sllv        $v0, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E574u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17e574;
        }
    }
    ctx->pc = 0x17E598u;
    // 0x17e598: 0x8c930010  lw          $s3, 0x10($a0)
    ctx->pc = 0x17e598u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17e59c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17e5a0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x17e5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17e5a4: 0x2463dbb4  addiu       $v1, $v1, -0x244C
    ctx->pc = 0x17e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958004));
    // 0x17e5a8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x17e5a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17e5ac: 0x92710000  lbu         $s1, 0x0($s3)
    ctx->pc = 0x17e5acu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17e5b0: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x17e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x17e5b4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x17e5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x17e5b8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17e5bc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x17e5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x17e5c0: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x17e5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17e5c4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17e5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17e5c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e5cc: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x17E5CCu;
    {
        const bool branch_taken_0x17e5cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5CCu;
        // 0x17e5d0: 0x8c630010  lw          $v1, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5cc) {
            ctx->pc = 0x17E600u;
            goto label_17e600;
        }
    }
    ctx->pc = 0x17E5D4u;
    // 0x17e5d4: 0x906204f0  lbu         $v0, 0x4F0($v1)
    ctx->pc = 0x17e5d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1264)));
    // 0x17e5d8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x17e5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x17e5dc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x17E5DCu;
    {
        const bool branch_taken_0x17e5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e5dc) {
            ctx->pc = 0x17E5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E5DCu;
            // 0x17e5e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E61Cu;
            goto label_17e61c;
        }
    }
    ctx->pc = 0x17E5E4u;
    // 0x17e5e4: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x17E5E4u;
    SET_GPR_U32(ctx, 31, 0x17E5ECu);
    ctx->pc = 0x17E5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E5E4u;
    // 0x17e5e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x17E5E4u, 0x17E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E5ECu;
label_17e5ec:
    // 0x17e5ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17e5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e5f0: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x17E5F0u;
    SET_GPR_U32(ctx, 31, 0x17E5F8u);
    ctx->pc = 0x17E5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E5F0u;
    // 0x17e5f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x17E5F0u, 0x17E5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E5F8u;
label_17e5f8:
    // 0x17e5f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17E5F8u;
    {
        const bool branch_taken_0x17e5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5F8u;
        // 0x17e5fc: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5f8) {
            ctx->pc = 0x17E618u;
            goto label_17e618;
        }
    }
    ctx->pc = 0x17E600u;
label_17e600:
    // 0x17e600: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x17E600u;
    SET_GPR_U32(ctx, 31, 0x17E608u);
    ctx->pc = 0x17E604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E600u;
    // 0x17e604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x17E600u, 0x17E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E608u;
label_17e608:
    // 0x17e608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17e608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e60c: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x17E60Cu;
    SET_GPR_U32(ctx, 31, 0x17E614u);
    ctx->pc = 0x17E610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E60Cu;
    // 0x17e610: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x17E60Cu, 0x17E614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E614u;
label_17e614:
    // 0x17e614: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x17e614u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_17e618:
    // 0x17e618: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17e618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17e61c:
    // 0x17e61c: 0xc05f60c  jal         func_17D830
    ctx->pc = 0x17E61Cu;
    SET_GPR_U32(ctx, 31, 0x17E624u);
    ctx->pc = 0x17D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D830u, 0x17E61Cu, 0x17E624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E624u;
label_17e624:
    // 0x17e624: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x17e624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x17e628: 0x30631f00  andi        $v1, $v1, 0x1F00
    ctx->pc = 0x17e628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7936);
    // 0x17e62c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E62Cu;
    {
        const bool branch_taken_0x17e62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e62c) {
            ctx->pc = 0x17E648u;
            goto label_17e648;
        }
    }
    ctx->pc = 0x17E634u;
    // 0x17e634: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x17e634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x17e638: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x17e638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x17e63c: 0x8c84d918  lw          $a0, -0x26E8($a0)
    ctx->pc = 0x17e63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957336)));
    // 0x17e640: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x17e640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x17e644: 0xac64d918  sw          $a0, -0x26E8($v1)
    ctx->pc = 0x17e644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957336), GPR_U32(ctx, 4));
label_17e648:
    // 0x17e648: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17e648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17e64c: 0x2463db62  addiu       $v1, $v1, -0x249E
    ctx->pc = 0x17e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957922));
    // 0x17e650: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17e650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17e654: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x17e654u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e658: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x17e658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x17e65c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E65Cu;
    {
        const bool branch_taken_0x17e65c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e65c) {
            ctx->pc = 0x17E670u;
            goto label_17e670;
        }
    }
    ctx->pc = 0x17E664u;
    // 0x17e664: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x17e664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x17e668: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E668u;
    {
        const bool branch_taken_0x17e668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e668) {
            ctx->pc = 0x17E684u;
            goto label_17e684;
        }
    }
    ctx->pc = 0x17E670u;
label_17e670:
    // 0x17e670: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17e670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17e674: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x17e674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17e678: 0x2463b838  addiu       $v1, $v1, -0x47C8
    ctx->pc = 0x17e678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948920));
    // 0x17e67c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x17e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17e680: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x17e680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_17e684:
    // 0x17e684: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17e684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17e688: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x17e688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17e68c: 0x9463b838  lhu         $v1, -0x47C8($v1)
    ctx->pc = 0x17e68cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294948920)));
    // 0x17e690: 0x54640007  bnel        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17E690u;
    {
        const bool branch_taken_0x17e690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17e690) {
            ctx->pc = 0x17E694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E690u;
            // 0x17e694: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E6B0u;
            goto label_17e6b0;
        }
    }
    ctx->pc = 0x17E698u;
    // 0x17e698: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x17e698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x17e69c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x17e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x17e6a0: 0x8c84d918  lw          $a0, -0x26E8($a0)
    ctx->pc = 0x17e6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957336)));
    // 0x17e6a4: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x17e6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x17e6a8: 0xac64d918  sw          $a0, -0x26E8($v1)
    ctx->pc = 0x17e6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957336), GPR_U32(ctx, 4));
    // 0x17e6ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17e6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17e6b0:
    // 0x17e6b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17e6b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e6b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e6b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e6b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e6b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e6bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x17E6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6C0u;
        // 0x17e6c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E6C8u;
    // 0x17e6c8: 0x0  nop
    ctx->pc = 0x17e6c8u;
    // NOP
    // 0x17e6cc: 0x0  nop
    ctx->pc = 0x17e6ccu;
    // NOP
    // 0x17e6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17E6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E6D8u;
    // 0x17e6d8: 0x0  nop
    ctx->pc = 0x17e6d8u;
    // NOP
    // 0x17e6dc: 0x0  nop
    ctx->pc = 0x17e6dcu;
    // NOP
    // 0x17e6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e6e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17e6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17e6e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17e6ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e6f0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17e6f4: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x17E6F4u;
    SET_GPR_U32(ctx, 31, 0x17E6FCu);
    ctx->pc = 0x17E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E6F4u;
    // 0x17e6f8: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F20u, 0x17E6F4u, 0x17E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E6FCu;
label_17e6fc:
    // 0x17e6fc: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x17e6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17e700: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x17E700u;
    SET_GPR_U32(ctx, 31, 0x17E708u);
    ctx->pc = 0x17E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E700u;
    // 0x17e704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186E70u, 0x17E700u, 0x17E708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E708u;
label_17e708:
    // 0x17e708: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x17E708u;
    SET_GPR_U32(ctx, 31, 0x17E710u);
    ctx->pc = 0x17E70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E708u;
    // 0x17e70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x17E708u, 0x17E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E710u;
label_17e710:
    // 0x17e710: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x17e710u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17e714: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x17e714u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x17e718: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17e718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e71c: 0x52220005  beql        $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E71Cu;
    {
        const bool branch_taken_0x17e71c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x17e71c) {
            ctx->pc = 0x17E720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E71Cu;
            // 0x17e720: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E734u;
            goto label_17e734;
        }
    }
    ctx->pc = 0x17E724u;
    // 0x17e724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e728: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x17E728u;
    SET_GPR_U32(ctx, 31, 0x17E730u);
    ctx->pc = 0x17E72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E728u;
    // 0x17e72c: 0xa61100f0  sh          $s1, 0xF0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABF0u, 0x17E728u, 0x17E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E730u;
label_17e730:
    // 0x17e730: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17e730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17e734:
    // 0x17e734: 0x5622000b  bnel        $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17E734u;
    {
        const bool branch_taken_0x17e734 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e734) {
            ctx->pc = 0x17E738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E734u;
            // 0x17e738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E764u;
            goto label_17e764;
        }
    }
    ctx->pc = 0x17E73Cu;
    // 0x17e73c: 0x960300f2  lhu         $v1, 0xF2($s0)
    ctx->pc = 0x17e73cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
    // 0x17e740: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17e740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17e744: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E744u;
    {
        const bool branch_taken_0x17e744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17e744) {
            ctx->pc = 0x17E760u;
            goto label_17e760;
        }
    }
    ctx->pc = 0x17E74Cu;
    // 0x17e74c: 0xa60300f0  sh          $v1, 0xF0($s0)
    ctx->pc = 0x17e74cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x17e750: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x17E750u;
    SET_GPR_U32(ctx, 31, 0x17E758u);
    ctx->pc = 0x17E754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E750u;
    // 0x17e754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABF0u, 0x17E750u, 0x17E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E758u;
label_17e758:
    // 0x17e758: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17e758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17e75c: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x17e75cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
label_17e760:
    // 0x17e760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17e764:
    // 0x17e764: 0xc0617ec  jal         func_185FB0
    ctx->pc = 0x17E764u;
    SET_GPR_U32(ctx, 31, 0x17E76Cu);
    ctx->pc = 0x185FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185FB0u, 0x17E764u, 0x17E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E76Cu;
label_17e76c:
    // 0x17e76c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17e76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e778: 0x3e00008  jr          $ra
    ctx->pc = 0x17E778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E778u;
        // 0x17e77c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E780u;
    // 0x17e780: 0x3e00008  jr          $ra
    ctx->pc = 0x17E780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E788u;
    // 0x17e788: 0x0  nop
    ctx->pc = 0x17e788u;
    // NOP
    // 0x17e78c: 0x0  nop
    ctx->pc = 0x17e78cu;
    // NOP
    if (ctx->pc == 0x17e78cu) { ctx->pc = 0x17e790u; }
}
