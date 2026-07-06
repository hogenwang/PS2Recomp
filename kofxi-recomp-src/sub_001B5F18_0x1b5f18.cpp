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

// Function: sub_001B5F18
// Address: 0x1b5f18 - 0x1b6058
void sub_001B5F18_0x1b5f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5F18_0x1b5f18");
#endif

    switch (ctx->pc) {
        case 0x1b5f18u: goto label_1b5f18;
        case 0x1b5f1cu: goto label_1b5f1c;
        case 0x1b5f20u: goto label_1b5f20;
        case 0x1b5f24u: goto label_1b5f24;
        case 0x1b5f28u: goto label_1b5f28;
        case 0x1b5f2cu: goto label_1b5f2c;
        case 0x1b5f30u: goto label_1b5f30;
        case 0x1b5f34u: goto label_1b5f34;
        case 0x1b5f38u: goto label_1b5f38;
        case 0x1b5f3cu: goto label_1b5f3c;
        case 0x1b5f40u: goto label_1b5f40;
        case 0x1b5f44u: goto label_1b5f44;
        case 0x1b5f48u: goto label_1b5f48;
        case 0x1b5f4cu: goto label_1b5f4c;
        case 0x1b5f50u: goto label_1b5f50;
        case 0x1b5f54u: goto label_1b5f54;
        case 0x1b5f58u: goto label_1b5f58;
        case 0x1b5f5cu: goto label_1b5f5c;
        case 0x1b5f60u: goto label_1b5f60;
        case 0x1b5f64u: goto label_1b5f64;
        case 0x1b5f68u: goto label_1b5f68;
        case 0x1b5f6cu: goto label_1b5f6c;
        case 0x1b5f70u: goto label_1b5f70;
        case 0x1b5f74u: goto label_1b5f74;
        case 0x1b5f78u: goto label_1b5f78;
        case 0x1b5f7cu: goto label_1b5f7c;
        case 0x1b5f80u: goto label_1b5f80;
        case 0x1b5f84u: goto label_1b5f84;
        case 0x1b5f88u: goto label_1b5f88;
        case 0x1b5f8cu: goto label_1b5f8c;
        case 0x1b5f90u: goto label_1b5f90;
        case 0x1b5f94u: goto label_1b5f94;
        case 0x1b5f98u: goto label_1b5f98;
        case 0x1b5f9cu: goto label_1b5f9c;
        case 0x1b5fa0u: goto label_1b5fa0;
        case 0x1b5fa4u: goto label_1b5fa4;
        case 0x1b5fa8u: goto label_1b5fa8;
        case 0x1b5facu: goto label_1b5fac;
        case 0x1b5fb0u: goto label_1b5fb0;
        case 0x1b5fb4u: goto label_1b5fb4;
        case 0x1b5fb8u: goto label_1b5fb8;
        case 0x1b5fbcu: goto label_1b5fbc;
        case 0x1b5fc0u: goto label_1b5fc0;
        case 0x1b5fc4u: goto label_1b5fc4;
        case 0x1b5fc8u: goto label_1b5fc8;
        case 0x1b5fccu: goto label_1b5fcc;
        case 0x1b5fd0u: goto label_1b5fd0;
        case 0x1b5fd4u: goto label_1b5fd4;
        case 0x1b5fd8u: goto label_1b5fd8;
        case 0x1b5fdcu: goto label_1b5fdc;
        case 0x1b5fe0u: goto label_1b5fe0;
        case 0x1b5fe4u: goto label_1b5fe4;
        case 0x1b5fe8u: goto label_1b5fe8;
        case 0x1b5fecu: goto label_1b5fec;
        case 0x1b5ff0u: goto label_1b5ff0;
        case 0x1b5ff4u: goto label_1b5ff4;
        case 0x1b5ff8u: goto label_1b5ff8;
        case 0x1b5ffcu: goto label_1b5ffc;
        case 0x1b6000u: goto label_1b6000;
        case 0x1b6004u: goto label_1b6004;
        case 0x1b6008u: goto label_1b6008;
        case 0x1b600cu: goto label_1b600c;
        case 0x1b6010u: goto label_1b6010;
        case 0x1b6014u: goto label_1b6014;
        case 0x1b6018u: goto label_1b6018;
        case 0x1b601cu: goto label_1b601c;
        case 0x1b6020u: goto label_1b6020;
        case 0x1b6024u: goto label_1b6024;
        case 0x1b6028u: goto label_1b6028;
        case 0x1b602cu: goto label_1b602c;
        case 0x1b6030u: goto label_1b6030;
        case 0x1b6034u: goto label_1b6034;
        case 0x1b6038u: goto label_1b6038;
        case 0x1b603cu: goto label_1b603c;
        case 0x1b6040u: goto label_1b6040;
        case 0x1b6044u: goto label_1b6044;
        case 0x1b6048u: goto label_1b6048;
        case 0x1b604cu: goto label_1b604c;
        case 0x1b6050u: goto label_1b6050;
        case 0x1b6054u: goto label_1b6054;
        default: break;
    }

    ctx->pc = 0x1b5f18u;

label_1b5f18:
    // 0x1b5f18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b5f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b5f1c:
    // 0x1b5f1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b5f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1b5f20:
    // 0x1b5f20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b5f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1b5f24:
    // 0x1b5f24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b5f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5f28:
    // 0x1b5f28: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1b5f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1b5f2c:
    // 0x1b5f2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b5f2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5f30:
    // 0x1b5f30: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b5f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b5f34:
    // 0x1b5f34: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1b5f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1b5f38:
    // 0x1b5f38: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b5f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1b5f3c:
    // 0x1b5f3c: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1b5f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1b5f40:
    // 0x1b5f40: 0x82430002  lb          $v1, 0x2($s2)
    ctx->pc = 0x1b5f40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_1b5f44:
    // 0x1b5f44: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x1b5f44u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1b5f48:
    // 0x1b5f48: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_1b5f4c:
    if (ctx->pc == 0x1B5F4Cu) {
        ctx->pc = 0x1B5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F48u;
        // 0x1b5f4c: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F50u;
        goto label_1b5f50;
    }
    ctx->pc = 0x1B5F48u;
    {
        const bool branch_taken_0x1b5f48 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F48u;
        // 0x1b5f4c: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f48) {
            ctx->pc = 0x1B5FB4u;
            goto label_1b5fb4;
        }
    }
    ctx->pc = 0x1B5F50u;
label_1b5f50:
    // 0x1b5f50: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x1b5f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1b5f54:
    // 0x1b5f54: 0x0  nop
    ctx->pc = 0x1b5f54u;
    // NOP
label_1b5f58:
    // 0x1b5f58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b5f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5f5c:
    // 0x1b5f5c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1b5f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1b5f60:
    // 0x1b5f60: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1b5f60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5f64:
    // 0x1b5f64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5f68:
    // 0x1b5f68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b5f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5f6c:
    // 0x1b5f6c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b5f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1b5f70:
    // 0x1b5f70: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1b5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1b5f74:
    // 0x1b5f74: 0x40f809  jalr        $v0
label_1b5f78:
    if (ctx->pc == 0x1B5F78u) {
        ctx->pc = 0x1B5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F74u;
        // 0x1b5f78: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F7Cu;
        goto label_1b5f7c;
    }
    ctx->pc = 0x1B5F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5F7Cu);
        ctx->pc = 0x1B5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F74u;
        // 0x1b5f78: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5F74u, 0x1B5F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5F7Cu;
label_1b5f7c:
    // 0x1b5f7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b5f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5f80:
    // 0x1b5f80: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x1b5f80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b5f84:
    // 0x1b5f84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5f88:
    // 0x1b5f88: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1b5f88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5f8c:
    // 0x1b5f8c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b5f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5f90:
    // 0x1b5f90: 0x228102a  slt         $v0, $s1, $t0
    ctx->pc = 0x1b5f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1b5f94:
    // 0x1b5f94: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b5f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1b5f98:
    // 0x1b5f98: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x1b5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_1b5f9c:
    // 0x1b5f9c: 0x60f809  jalr        $v1
label_1b5fa0:
    if (ctx->pc == 0x1B5FA0u) {
        ctx->pc = 0x1B5FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F9Cu;
        // 0x1b5fa0: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FA4u;
        goto label_1b5fa4;
    }
    ctx->pc = 0x1B5F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5FA4u);
        ctx->pc = 0x1B5FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F9Cu;
        // 0x1b5fa0: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5F9Cu, 0x1B5FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5FA4u;
label_1b5fa4:
    // 0x1b5fa4: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x1b5fa4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_1b5fa8:
    // 0x1b5fa8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1b5fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b5fac:
    // 0x1b5fac: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_1b5fb0:
    if (ctx->pc == 0x1B5FB0u) {
        ctx->pc = 0x1B5FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FACu;
        // 0x1b5fb0: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FB4u;
        goto label_1b5fb4;
    }
    ctx->pc = 0x1B5FACu;
    {
        const bool branch_taken_0x1b5fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FACu;
        // 0x1b5fb0: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fac) {
            ctx->pc = 0x1B5F58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b5f58;
        }
    }
    ctx->pc = 0x1B5FB4u;
label_1b5fb4:
    // 0x1b5fb4: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x1b5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_1b5fb8:
    // 0x1b5fb8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1b5fbc:
    // 0x1b5fbc: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x1b5fbcu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_1b5fc0:
    // 0x1b5fc0: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x1b5fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_1b5fc4:
    // 0x1b5fc4: 0x1a20001c  blez        $s1, . + 4 + (0x1C << 2)
label_1b5fc8:
    if (ctx->pc == 0x1B5FC8u) {
        ctx->pc = 0x1B5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FC4u;
        // 0x1b5fc8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FCCu;
        goto label_1b5fcc;
    }
    ctx->pc = 0x1B5FC4u;
    {
        const bool branch_taken_0x1b5fc4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1B5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FC4u;
        // 0x1b5fc8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fc4) {
            ctx->pc = 0x1B6038u;
            goto label_1b6038;
        }
    }
    ctx->pc = 0x1B5FCCu;
label_1b5fcc:
    // 0x1b5fcc: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x1b5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1b5fd0:
    // 0x1b5fd0: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_1b5fd4:
    if (ctx->pc == 0x1B5FD4u) {
        ctx->pc = 0x1B5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FD0u;
        // 0x1b5fd4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FD8u;
        goto label_1b5fd8;
    }
    ctx->pc = 0x1B5FD0u;
    {
        const bool branch_taken_0x1b5fd0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FD0u;
        // 0x1b5fd4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fd0) {
            ctx->pc = 0x1B6028u;
            goto label_1b6028;
        }
    }
    ctx->pc = 0x1B5FD8u;
label_1b5fd8:
    // 0x1b5fd8: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x1b5fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1b5fdc:
    // 0x1b5fdc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b5fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5fe0:
    // 0x1b5fe0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5fe4:
    // 0x1b5fe4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b5fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5fe8:
    // 0x1b5fe8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1b5fe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5fec:
    // 0x1b5fec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5ff0:
    // 0x1b5ff0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1b5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1b5ff4:
    // 0x1b5ff4: 0x40f809  jalr        $v0
label_1b5ff8:
    if (ctx->pc == 0x1B5FF8u) {
        ctx->pc = 0x1B5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FF4u;
        // 0x1b5ff8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FFCu;
        goto label_1b5ffc;
    }
    ctx->pc = 0x1B5FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5FFCu);
        ctx->pc = 0x1B5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FF4u;
        // 0x1b5ff8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5FF4u, 0x1B5FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5FFCu;
label_1b5ffc:
    // 0x1b5ffc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b5ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6000:
    // 0x1b6000: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6004:
    // 0x1b6004: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b6004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b6008:
    // 0x1b6008: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b6008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b600c:
    // 0x1b600c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1b600cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1b6010:
    // 0x1b6010: 0x60f809  jalr        $v1
label_1b6014:
    if (ctx->pc == 0x1B6014u) {
        ctx->pc = 0x1B6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6010u;
        // 0x1b6014: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6018u;
        goto label_1b6018;
    }
    ctx->pc = 0x1B6010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B6018u);
        ctx->pc = 0x1B6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6010u;
        // 0x1b6014: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6010u, 0x1B6018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6018u;
label_1b6018:
    // 0x1b6018: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x1b6018u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_1b601c:
    // 0x1b601c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1b601cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b6020:
    // 0x1b6020: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_1b6024:
    if (ctx->pc == 0x1B6024u) {
        ctx->pc = 0x1B6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6020u;
        // 0x1b6024: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6028u;
        goto label_1b6028;
    }
    ctx->pc = 0x1B6020u;
    {
        const bool branch_taken_0x1b6020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6020) {
            ctx->pc = 0x1B6024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6020u;
            // 0x1b6024: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b5fe0;
        }
    }
    ctx->pc = 0x1B6028u;
label_1b6028:
    // 0x1b6028: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1b6028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1b602c:
    // 0x1b602c: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x1b602cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1b6030:
    // 0x1b6030: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x1b6030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
label_1b6034:
    // 0x1b6034: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b6034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6038:
    // 0x1b6038: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b6038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b603c:
    // 0x1b603c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b603cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b6040:
    // 0x1b6040: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1b6040u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b6044:
    // 0x1b6044: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1b6044u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b6048:
    // 0x1b6048: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b6048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1b604c:
    // 0x1b604c: 0x3e00008  jr          $ra
label_1b6050:
    if (ctx->pc == 0x1B6050u) {
        ctx->pc = 0x1B6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B604Cu;
        // 0x1b6050: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6054u;
        goto label_1b6054;
    }
    ctx->pc = 0x1B604Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B604Cu;
        // 0x1b6050: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B604Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6054u;
label_1b6054:
    // 0x1b6054: 0x0  nop
    ctx->pc = 0x1b6054u;
    // NOP
    if (ctx->pc == 0x1b6054u) { ctx->pc = 0x1b6058u; }
}
