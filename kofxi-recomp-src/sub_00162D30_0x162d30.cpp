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

// Function: sub_00162D30
// Address: 0x162d30 - 0x162f60
void sub_00162D30_0x162d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162D30_0x162d30");
#endif

    switch (ctx->pc) {
        case 0x162e00u: goto label_162e00;
        case 0x162e28u: goto label_162e28;
        case 0x162e38u: goto label_162e38;
        case 0x162ea4u: goto label_162ea4;
        case 0x162ee0u: goto label_162ee0;
        case 0x162ee8u: goto label_162ee8;
        case 0x162f00u: goto label_162f00;
        case 0x162f18u: goto label_162f18;
        case 0x162f20u: goto label_162f20;
        case 0x162f28u: goto label_162f28;
        case 0x162f40u: goto label_162f40;
        default: break;
    }

    ctx->pc = 0x162d30u;

    // 0x162d30: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x162d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x162d34: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x162d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x162d38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x162d38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x162d3c: 0x240402a0  addiu       $a0, $zero, 0x2A0
    ctx->pc = 0x162d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x162d40: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x162d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x162d44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x162d44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162d48: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x162d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x162d4c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x162d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x162d50: 0x90424538  lbu         $v0, 0x4538($v0)
    ctx->pc = 0x162d50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17720)));
    // 0x162d54: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x162d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x162d58: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162D58u;
    {
        const bool branch_taken_0x162d58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x162D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D58u;
        // 0x162d5c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d58) {
            ctx->pc = 0x162D6Cu;
            goto label_162d6c;
        }
    }
    ctx->pc = 0x162D60u;
    // 0x162d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162d64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x162D64u;
    {
        const bool branch_taken_0x162d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D64u;
        // 0x162d68: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d64) {
            ctx->pc = 0x162D88u;
            goto label_162d88;
        }
    }
    ctx->pc = 0x162D6Cu;
label_162d6c:
    // 0x162d6c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x162d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x162d70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x162d74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x162d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x162d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162d7c: 0x0  nop
    ctx->pc = 0x162d7cu;
    // NOP
    // 0x162d80: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x162d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x162d84: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x162d84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_162d88:
    // 0x162d88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162d8c: 0x0  nop
    ctx->pc = 0x162d8cu;
    // NOP
    // 0x162d90: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x162d90u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x162d94: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x162d94u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x162d98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x162d98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x162d9c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x162d9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162da0: 0x0  nop
    ctx->pc = 0x162da0u;
    // NOP
    // 0x162da4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x162da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x162da8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x162da8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x162dac: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162DACu;
    {
        const bool branch_taken_0x162dac = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x162dac) {
            ctx->pc = 0x162DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162DACu;
            // 0x162db0: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162DBCu;
            goto label_162dbc;
        }
    }
    ctx->pc = 0x162DB4u;
    // 0x162db4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x162db4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162db8: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x162db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_162dbc:
    // 0x162dbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x162dbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x162dc0: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x162dc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x162dc4: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x162DC4u;
    {
        const bool branch_taken_0x162dc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x162dc4) {
            ctx->pc = 0x162DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162DC4u;
            // 0x162dc8: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162DD4u;
            goto label_162dd4;
        }
    }
    ctx->pc = 0x162DCCu;
    // 0x162dcc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x162dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x162dd0: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x162dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_162dd4:
    // 0x162dd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x162dd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x162dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x162DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DD8u;
        // 0x162ddc: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162DE0u;
    // 0x162de0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x162de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x162de4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x162de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x162de8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x162de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x162dec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x162decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x162df0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x162df0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162df4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162df8: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x162DF8u;
    SET_GPR_U32(ctx, 31, 0x162E00u);
    ctx->pc = 0x162DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162DF8u;
    // 0x162dfc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559F0u, 0x162DF8u, 0x162E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162E00u;
label_162e00:
    // 0x162e00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x162e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e04: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x162e04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x162e08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x162e0c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x162E0Cu;
    {
        const bool branch_taken_0x162e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162e0c) {
            ctx->pc = 0x162E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162E0Cu;
            // 0x162e10: 0x8e720010  lw          $s2, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162E30u;
            goto label_162e30;
        }
    }
    ctx->pc = 0x162E14u;
    // 0x162e14: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x162e14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x162e18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x162e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x162e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x162e20: 0xc055728  jal         func_155CA0
    ctx->pc = 0x162E20u;
    SET_GPR_U32(ctx, 31, 0x162E28u);
    ctx->pc = 0x162E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162E20u;
    // 0x162e24: 0xa6220014  sh          $v0, 0x14($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x162E20u, 0x162E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162E28u;
label_162e28:
    // 0x162e28: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x162E28u;
    {
        const bool branch_taken_0x162e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E28u;
        // 0x162e2c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e28) {
            ctx->pc = 0x162F44u;
            goto label_162f44;
        }
    }
    ctx->pc = 0x162E30u;
label_162e30:
    // 0x162e30: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x162E30u;
    SET_GPR_U32(ctx, 31, 0x162E38u);
    ctx->pc = 0x162E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162E30u;
    // 0x162e34: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189FE0u, 0x162E30u, 0x162E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162E38u;
label_162e38:
    // 0x162e38: 0x8e440270  lw          $a0, 0x270($s2)
    ctx->pc = 0x162e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
    // 0x162e3c: 0x2403cfff  addiu       $v1, $zero, -0x3001
    ctx->pc = 0x162e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294955007));
    // 0x162e40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x162e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x162e44: 0xae430270  sw          $v1, 0x270($s2)
    ctx->pc = 0x162e44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 3));
    // 0x162e48: 0x8c420270  lw          $v0, 0x270($v0)
    ctx->pc = 0x162e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x162e4c: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x162e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
    // 0x162e50: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x162E50u;
    {
        const bool branch_taken_0x162e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162e50) {
            ctx->pc = 0x162E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162E50u;
            // 0x162e54: 0x8e420270  lw          $v0, 0x270($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162ECCu;
            goto label_162ecc;
        }
    }
    ctx->pc = 0x162E58u;
    // 0x162e58: 0x86500608  lh          $s0, 0x608($s2)
    ctx->pc = 0x162e58u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x162e5c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x162e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x162e60: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x162e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x162e64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x162e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x162e68: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x162e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x162e6c: 0x8462001c  lh          $v0, 0x1C($v1)
    ctx->pc = 0x162e6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x162e70: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x162e70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x162e74: 0x8462001e  lh          $v0, 0x1E($v1)
    ctx->pc = 0x162e74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x162e78: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x162e78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x162e7c: 0x90620022  lbu         $v0, 0x22($v1)
    ctx->pc = 0x162e7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x162e80: 0xa242008c  sb          $v0, 0x8C($s2)
    ctx->pc = 0x162e80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x162e84: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x162e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x162e88: 0xae420270  sw          $v0, 0x270($s2)
    ctx->pc = 0x162e88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
    // 0x162e8c: 0x94640020  lhu         $a0, 0x20($v1)
    ctx->pc = 0x162e8cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x162e90: 0x96420274  lhu         $v0, 0x274($s2)
    ctx->pc = 0x162e90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 628)));
    // 0x162e94: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162E94u;
    {
        const bool branch_taken_0x162e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x162e94) {
            ctx->pc = 0x162E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162E94u;
            // 0x162e98: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162EA8u;
            goto label_162ea8;
        }
    }
    ctx->pc = 0x162E9Cu;
    // 0x162e9c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x162E9Cu;
    SET_GPR_U32(ctx, 31, 0x162EA4u);
    ctx->pc = 0x162EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162E9Cu;
    // 0x162ea0: 0x26450268  addiu       $a1, $s2, 0x268 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF60u, 0x162E9Cu, 0x162EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162EA4u;
label_162ea4:
    // 0x162ea4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x162ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_162ea8:
    // 0x162ea8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x162ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x162eac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x162eacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x162eb0: 0x2862004a  slti        $v0, $v1, 0x4A
    ctx->pc = 0x162eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x162eb4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x162EB4u;
    {
        const bool branch_taken_0x162eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162eb4) {
            ctx->pc = 0x162EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162EB4u;
            // 0x162eb8: 0xa6430608  sh          $v1, 0x608($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 1544), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162ED4u;
            goto label_162ed4;
        }
    }
    ctx->pc = 0x162EBCu;
    // 0x162ebc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x162ebcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ec0: 0xa6430608  sh          $v1, 0x608($s2)
    ctx->pc = 0x162ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1544), (uint16_t)GPR_U32(ctx, 3));
    // 0x162ec4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x162EC4u;
    {
        const bool branch_taken_0x162ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162ec4) {
            ctx->pc = 0x162ED4u;
            goto label_162ed4;
        }
    }
    ctx->pc = 0x162ECCu;
label_162ecc:
    // 0x162ecc: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x162eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x162ed0: 0xae420270  sw          $v0, 0x270($s2)
    ctx->pc = 0x162ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
label_162ed4:
    // 0x162ed4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x162ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ed8: 0xc057be0  jal         func_15EF80
    ctx->pc = 0x162ED8u;
    SET_GPR_U32(ctx, 31, 0x162EE0u);
    ctx->pc = 0x162EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162ED8u;
    // 0x162edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF80u, 0x162ED8u, 0x162EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162EE0u;
label_162ee0:
    // 0x162ee0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x162ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ee4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x162ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162ee8:
    // 0x162ee8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x162ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162eec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ef4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x162ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ef8: 0xc058070  jal         func_1601C0
    ctx->pc = 0x162EF8u;
    SET_GPR_U32(ctx, 31, 0x162F00u);
    ctx->pc = 0x162EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162EF8u;
    // 0x162efc: 0x260802b4  addiu       $t0, $s0, 0x2B4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 692));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1601C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1601C0u, 0x162EF8u, 0x162F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162F00u;
label_162f00:
    // 0x162f00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x162f00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x162f04: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x162f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x162f08: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x162F08u;
    {
        const bool branch_taken_0x162f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F08u;
        // 0x162f0c: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f08) {
            ctx->pc = 0x162EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_162ee8;
        }
    }
    ctx->pc = 0x162F10u;
    // 0x162f10: 0xc054d48  jal         func_153520
    ctx->pc = 0x162F10u;
    SET_GPR_U32(ctx, 31, 0x162F18u);
    ctx->pc = 0x162F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162F10u;
    // 0x162f14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153520u, 0x162F10u, 0x162F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162F18u;
label_162f18:
    // 0x162f18: 0xc05ce48  jal         func_173920
    ctx->pc = 0x162F18u;
    SET_GPR_U32(ctx, 31, 0x162F20u);
    ctx->pc = 0x162F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162F18u;
    // 0x162f1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173920u, 0x162F18u, 0x162F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162F20u;
label_162f20:
    // 0x162f20: 0xc064fec  jal         func_193FB0
    ctx->pc = 0x162F20u;
    SET_GPR_U32(ctx, 31, 0x162F28u);
    ctx->pc = 0x162F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162F20u;
    // 0x162f24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FB0u, 0x162F20u, 0x162F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162F28u;
label_162f28:
    // 0x162f28: 0x92230010  lbu         $v1, 0x10($s1)
    ctx->pc = 0x162f28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x162f2c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x162f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x162f30: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162F30u;
    {
        const bool branch_taken_0x162f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162f30) {
            ctx->pc = 0x162F40u;
            goto label_162f40;
        }
    }
    ctx->pc = 0x162F38u;
    // 0x162f38: 0xc064f78  jal         func_193DE0
    ctx->pc = 0x162F38u;
    SET_GPR_U32(ctx, 31, 0x162F40u);
    ctx->pc = 0x162F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162F38u;
    // 0x162f3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DE0u, 0x162F38u, 0x162F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162F40u;
label_162f40:
    // 0x162f40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x162f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_162f44:
    // 0x162f44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x162f44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162f48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x162f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162f4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162f50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162f54: 0x3e00008  jr          $ra
    ctx->pc = 0x162F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F54u;
        // 0x162f58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162F5Cu;
    // 0x162f5c: 0x0  nop
    ctx->pc = 0x162f5cu;
    // NOP
}
