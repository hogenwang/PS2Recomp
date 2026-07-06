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

// Function: sub_00105EA8
// Address: 0x105ea8 - 0x1061d8
void sub_00105EA8_0x105ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105EA8_0x105ea8");
#endif

    switch (ctx->pc) {
        case 0x105eecu: goto label_105eec;
        case 0x105ef8u: goto label_105ef8;
        case 0x105f2cu: goto label_105f2c;
        case 0x105f78u: goto label_105f78;
        case 0x105f9cu: goto label_105f9c;
        case 0x106010u: goto label_106010;
        case 0x106040u: goto label_106040;
        case 0x106074u: goto label_106074;
        case 0x10609cu: goto label_10609c;
        case 0x1060c8u: goto label_1060c8;
        case 0x106100u: goto label_106100;
        case 0x10612cu: goto label_10612c;
        case 0x106158u: goto label_106158;
        case 0x106184u: goto label_106184;
        default: break;
    }

    ctx->pc = 0x105ea8u;

    // 0x105ea8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x105ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x105eac: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x105eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x105eb0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x105eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x105eb4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x105eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x105eb8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x105eb8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ec0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x105ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x105ec4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x105ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x105ec8: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x105ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x105ecc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x105eccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ed0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x105ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x105ed4: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x105ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x105ed8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x105ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x105edc: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x105edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x105ee0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x105ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x105ee4: 0xc04214a  jal         func_108528
    ctx->pc = 0x105EE4u;
    SET_GPR_U32(ctx, 31, 0x105EECu);
    ctx->pc = 0x105EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105EE4u;
    // 0x105ee8: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108528u, 0x105EE4u, 0x105EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EECu;
label_105eec:
    // 0x105eec: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x105EECu;
    {
        const bool branch_taken_0x105eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EECu;
        // 0x105ef0: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105eec) {
            ctx->pc = 0x1061B0u;
            goto label_1061b0;
        }
    }
    ctx->pc = 0x105EF4u;
    // 0x105ef4: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x105ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_105ef8:
    // 0x105ef8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x105ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105efc: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x105efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x105f00: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x105F00u;
    {
        const bool branch_taken_0x105f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105f00) {
            ctx->pc = 0x105F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105F00u;
            // 0x105f04: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105F10u;
            goto label_105f10;
        }
    }
    ctx->pc = 0x105F08u;
    // 0x105f08: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x105F08u;
    {
        const bool branch_taken_0x105f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F08u;
        // 0x105f0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f08) {
            ctx->pc = 0x1061ACu;
            goto label_1061ac;
        }
    }
    ctx->pc = 0x105F10u;
label_105f10:
    // 0x105f10: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x105f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x105f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f18: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x105f18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105f1c: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x105f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x105f20: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x105f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x105f24: 0xc041cda  jal         func_107368
    ctx->pc = 0x105F24u;
    SET_GPR_U32(ctx, 31, 0x105F2Cu);
    ctx->pc = 0x105F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105F24u;
    // 0x105f28: 0xac4006dc  sw          $zero, 0x6DC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107368u, 0x105F24u, 0x105F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F2Cu;
label_105f2c:
    // 0x105f2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105f30: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x105f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x105f34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105f34u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x105f38: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x105F38u;
    {
        const bool branch_taken_0x105f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F38u;
        // 0x105f3c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f38) {
            ctx->pc = 0x105FC4u;
            goto label_105fc4;
        }
    }
    ctx->pc = 0x105F40u;
    // 0x105f40: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x105f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x105f44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105f44u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x105f48: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x105f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x105f4c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x105F4Cu;
    {
        const bool branch_taken_0x105f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x105F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F4Cu;
        // 0x105f50: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f4c) {
            ctx->pc = 0x105FC8u;
            goto label_105fc8;
        }
    }
    ctx->pc = 0x105F54u;
    // 0x105f54: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x105f54u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x105f58: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x105f58u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x105f5c: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x105f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x105f60: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x105f60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x105f64: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x105f64u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x105f68: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x105f68u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x105f6c: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x105f6cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x105f70: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x105f70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8208);
    // 0x105f74: 0x0  nop
    ctx->pc = 0x105f74u;
    // NOP
label_105f78:
    // 0x105f78: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x105f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x105f7c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x105F7Cu;
    {
        const bool branch_taken_0x105f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105f7c) {
            ctx->pc = 0x105F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105F7Cu;
            // 0x105f80: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105FA0u;
            goto label_105fa0;
        }
    }
    ctx->pc = 0x105F84u;
    // 0x105f84: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x105f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x105f88: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x105f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x105f8c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x105F8Cu;
    {
        const bool branch_taken_0x105f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105f8c) {
            ctx->pc = 0x105F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105F8Cu;
            // 0x105f90: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105FA0u;
            goto label_105fa0;
        }
    }
    ctx->pc = 0x105F94u;
    // 0x105f94: 0xc042a22  jal         func_10A888
    ctx->pc = 0x105F94u;
    SET_GPR_U32(ctx, 31, 0x105F9Cu);
    ctx->pc = 0x105F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105F94u;
    // 0x105f98: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A888u, 0x105F94u, 0x105F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F9Cu;
label_105f9c:
    // 0x105f9c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x105f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_105fa0:
    // 0x105fa0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x105FA0u;
    {
        const bool branch_taken_0x105fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105fa0) {
            ctx->pc = 0x106008u;
            goto label_106008;
        }
    }
    ctx->pc = 0x105FA8u;
    // 0x105fa8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x105fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x105fac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105FACu;
    {
        const bool branch_taken_0x105fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FACu;
        // 0x105fb0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fac) {
            ctx->pc = 0x105FC8u;
            goto label_105fc8;
        }
    }
    ctx->pc = 0x105FB4u;
    // 0x105fb4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x105fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x105fb8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x105fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x105fbc: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x105FBCu;
    {
        const bool branch_taken_0x105fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105fbc) {
            ctx->pc = 0x105F78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105f78;
        }
    }
    ctx->pc = 0x105FC4u;
label_105fc4:
    // 0x105fc4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_105fc8:
    // 0x105fc8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105fcc: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x105fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x105fd0: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x105fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x105fd4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x105fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x105fd8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x105fd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105fdc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x105fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x105fe0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x105fe0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x105fe4: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x105FE4u;
    {
        const bool branch_taken_0x105fe4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x105FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FE4u;
        // 0x105fe8: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fe4) {
            ctx->pc = 0x106018u;
            goto label_106018;
        }
    }
    ctx->pc = 0x105FECu;
    // 0x105fec: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x105fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x105ff0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x105FF0u;
    {
        const bool branch_taken_0x105ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FF0u;
        // 0x105ff4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ff0) {
            ctx->pc = 0x106000u;
            goto label_106000;
        }
    }
    ctx->pc = 0x105FF8u;
    // 0x105ff8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x105FF8u;
    {
        const bool branch_taken_0x105ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FF8u;
        // 0x105ffc: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ff8) {
            ctx->pc = 0x10601Cu;
            goto label_10601c;
        }
    }
    ctx->pc = 0x106000u;
label_106000:
    // 0x106000: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106000u;
    {
        const bool branch_taken_0x106000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106000u;
        // 0x106004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106000) {
            ctx->pc = 0x10601Cu;
            goto label_10601c;
        }
    }
    ctx->pc = 0x106008u;
label_106008:
    // 0x106008: 0xc043000  jal         func_10C000
    ctx->pc = 0x106008u;
    SET_GPR_U32(ctx, 31, 0x106010u);
    ctx->pc = 0x10C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C000u, 0x106008u, 0x106010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106010u;
label_106010:
    // 0x106010: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x106010u;
    {
        const bool branch_taken_0x106010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106010u;
        // 0x106014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106010) {
            ctx->pc = 0x106044u;
            goto label_106044;
        }
    }
    ctx->pc = 0x106018u;
label_106018:
    // 0x106018: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x106018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10601c:
    // 0x10601c: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x10601cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x106020: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106024: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x106024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x106028: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106028u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x10602c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x10602cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x106030: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x106030u;
    {
        const bool branch_taken_0x106030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106030u;
        // 0x106034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106030) {
            ctx->pc = 0x106040u;
            goto label_106040;
        }
    }
    ctx->pc = 0x106038u;
    // 0x106038: 0xc043028  jal         func_10C0A0
    ctx->pc = 0x106038u;
    SET_GPR_U32(ctx, 31, 0x106040u);
    ctx->pc = 0x10603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106038u;
    // 0x10603c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C0A0u, 0x106038u, 0x106040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106040u;
label_106040:
    // 0x106040: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x106040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_106044:
    // 0x106044: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x106044u;
    {
        const bool branch_taken_0x106044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106044) {
            ctx->pc = 0x106048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106044u;
            // 0x106048: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106060u;
            goto label_106060;
        }
    }
    ctx->pc = 0x10604Cu;
    // 0x10604c: 0x8e040878  lw          $a0, 0x878($s0)
    ctx->pc = 0x10604cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x106050: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x106050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x106054: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x106054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106058: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x106058u;
    {
        const bool branch_taken_0x106058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106058u;
        // 0x10605c: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106058) {
            ctx->pc = 0x1061ACu;
            goto label_1061ac;
        }
    }
    ctx->pc = 0x106060u;
label_106060:
    // 0x106060: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x106060u;
    {
        const bool branch_taken_0x106060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106060u;
        // 0x106064: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106060) {
            ctx->pc = 0x1060ACu;
            goto label_1060ac;
        }
    }
    ctx->pc = 0x106068u;
    // 0x106068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10606c: 0xc041c90  jal         func_107240
    ctx->pc = 0x10606Cu;
    SET_GPR_U32(ctx, 31, 0x106074u);
    ctx->pc = 0x106070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10606Cu;
    // 0x106070: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107240u, 0x10606Cu, 0x106074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106074u;
label_106074:
    // 0x106074: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x106074u;
    {
        const bool branch_taken_0x106074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106074) {
            ctx->pc = 0x106078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106074u;
            // 0x106078: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10608Cu;
            goto label_10608c;
        }
    }
    ctx->pc = 0x10607Cu;
    // 0x10607c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x10607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x106080: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106080u;
    {
        const bool branch_taken_0x106080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106080) {
            ctx->pc = 0x106094u;
            goto label_106094;
        }
    }
    ctx->pc = 0x106088u;
    // 0x106088: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x106088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_10608c:
    // 0x10608c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x10608Cu;
    {
        const bool branch_taken_0x10608c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10608Cu;
        // 0x106090: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10608c) {
            ctx->pc = 0x1061ACu;
            goto label_1061ac;
        }
    }
    ctx->pc = 0x106094u;
label_106094:
    // 0x106094: 0xc041b3e  jal         func_106CF8
    ctx->pc = 0x106094u;
    SET_GPR_U32(ctx, 31, 0x10609Cu);
    ctx->pc = 0x106098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106094u;
    // 0x106098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CF8u, 0x106094u, 0x10609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10609Cu;
label_10609c:
    // 0x10609c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x10609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1060a0: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1060A0u;
    {
        const bool branch_taken_0x1060a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1060A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060A0u;
        // 0x1060a4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060a0) {
            ctx->pc = 0x106108u;
            goto label_106108;
        }
    }
    ctx->pc = 0x1060A8u;
    // 0x1060a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1060a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1060ac:
    // 0x1060ac: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x1060acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1060b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1060B0u;
    {
        const bool branch_taken_0x1060b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1060B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060B0u;
        // 0x1060b4: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060b0) {
            ctx->pc = 0x1060D0u;
            goto label_1060d0;
        }
    }
    ctx->pc = 0x1060B8u;
    // 0x1060b8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1060b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1060bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1060bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060c0: 0xc04305a  jal         func_10C168
    ctx->pc = 0x1060C0u;
    SET_GPR_U32(ctx, 31, 0x1060C8u);
    ctx->pc = 0x1060C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1060C0u;
    // 0x1060c4: 0x24a5a008  addiu       $a1, $a1, -0x5FF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C168u, 0x1060C0u, 0x1060C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1060C8u;
label_1060c8:
    // 0x1060c8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1060C8u;
    {
        const bool branch_taken_0x1060c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1060CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060C8u;
        // 0x1060cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060c8) {
            ctx->pc = 0x1061ACu;
            goto label_1061ac;
        }
    }
    ctx->pc = 0x1060D0u;
label_1060d0:
    // 0x1060d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1060d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1060d4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1060D4u;
    {
        const bool branch_taken_0x1060d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1060D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060D4u;
        // 0x1060d8: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060d4) {
            ctx->pc = 0x106114u;
            goto label_106114;
        }
    }
    ctx->pc = 0x1060DCu;
    // 0x1060dc: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1060dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1060e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1060e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060e4: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x1060e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1060e8: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1060e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1060ec: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1060ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1060f0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1060f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060f4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1060f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060f8: 0xc0419e8  jal         func_1067A0
    ctx->pc = 0x1060F8u;
    SET_GPR_U32(ctx, 31, 0x106100u);
    ctx->pc = 0x1060FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1060F8u;
    // 0x1060fc: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1067A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1067A0u, 0x1060F8u, 0x106100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106100u;
label_106100:
    // 0x106100: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x106100u;
    {
        const bool branch_taken_0x106100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106100u;
        // 0x106104: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106100) {
            ctx->pc = 0x106138u;
            goto label_106138;
        }
    }
    ctx->pc = 0x106108u;
label_106108:
    // 0x106108: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x106108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x10610c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x10610Cu;
    {
        const bool branch_taken_0x10610c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10610Cu;
        // 0x106110: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10610c) {
            ctx->pc = 0x1061ACu;
            goto label_1061ac;
        }
    }
    ctx->pc = 0x106114u;
label_106114:
    // 0x106114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106118: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x106118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10611c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x10611cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x106120: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x106120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106124: 0xc041cea  jal         func_1073A8
    ctx->pc = 0x106124u;
    SET_GPR_U32(ctx, 31, 0x10612Cu);
    ctx->pc = 0x106128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106124u;
    // 0x106128: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1073A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1073A8u, 0x106124u, 0x10612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10612Cu;
label_10612c:
    // 0x10612c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10612Cu;
    {
        const bool branch_taken_0x10612c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10612Cu;
        // 0x106130: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10612c) {
            ctx->pc = 0x106160u;
            goto label_106160;
        }
    }
    ctx->pc = 0x106134u;
    // 0x106134: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x106134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_106138:
    // 0x106138: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x106138u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10613c: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x10613cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x106140: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x106140u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106144: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x106144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x106148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10614c: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x10614cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x106150: 0xc0414dc  jal         func_105370
    ctx->pc = 0x106150u;
    SET_GPR_U32(ctx, 31, 0x106158u);
    ctx->pc = 0x106154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106150u;
    // 0x106154: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x106150u, 0x106158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106158u;
label_106158:
    // 0x106158: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106158u;
    {
        const bool branch_taken_0x106158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106158u;
        // 0x10615c: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106158) {
            ctx->pc = 0x10616Cu;
            goto label_10616c;
        }
    }
    ctx->pc = 0x106160u;
label_106160:
    // 0x106160: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x106160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x106164: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x106164u;
    {
        const bool branch_taken_0x106164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106164u;
        // 0x106168: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106164) {
            ctx->pc = 0x1061ACu;
            goto label_1061ac;
        }
    }
    ctx->pc = 0x10616Cu;
label_10616c:
    // 0x10616c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x10616Cu;
    {
        const bool branch_taken_0x10616c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10616c) {
            ctx->pc = 0x106170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10616Cu;
            // 0x106170: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10618Cu;
            goto label_10618c;
        }
    }
    ctx->pc = 0x106174u;
    // 0x106174: 0x8e050820  lw          $a1, 0x820($s0)
    ctx->pc = 0x106174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10617c: 0xc041692  jal         func_105A48
    ctx->pc = 0x10617Cu;
    SET_GPR_U32(ctx, 31, 0x106184u);
    ctx->pc = 0x106180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10617Cu;
    // 0x106180: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A48u, 0x10617Cu, 0x106184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106184u;
label_106184:
    // 0x106184: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x106184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106188: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x106188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_10618c:
    // 0x10618c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10618cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x106190: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x106190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x106194: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x106194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x106198: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x106198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x10619c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1061a0: 0xae020820  sw          $v0, 0x820($s0)
    ctx->pc = 0x1061a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 2));
    // 0x1061a4: 0x1000ff54  b           . + 4 + (-0xAC << 2)
    ctx->pc = 0x1061A4u;
    {
        const bool branch_taken_0x1061a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1061A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061A4u;
        // 0x1061a8: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061a4) {
            ctx->pc = 0x105EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105ef8;
        }
    }
    ctx->pc = 0x1061ACu;
label_1061ac:
    // 0x1061ac: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1061acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1061b0:
    // 0x1061b0: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x1061b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1061b4: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x1061b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1061b8: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1061b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1061bc: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x1061bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1061c0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1061c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1061c4: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x1061c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1061c8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1061c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1061cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1061CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1061D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061CCu;
        // 0x1061d0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1061CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1061D4u;
    // 0x1061d4: 0x0  nop
    ctx->pc = 0x1061d4u;
    // NOP
    if (ctx->pc == 0x1061d4u) { ctx->pc = 0x1061d8u; }
}
