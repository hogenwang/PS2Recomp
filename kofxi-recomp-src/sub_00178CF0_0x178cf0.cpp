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

// Function: sub_00178CF0
// Address: 0x178cf0 - 0x17a260
void sub_00178CF0_0x178cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178CF0_0x178cf0");
#endif

    switch (ctx->pc) {
        case 0x178d7cu: goto label_178d7c;
        case 0x178d9cu: goto label_178d9c;
        case 0x178da4u: goto label_178da4;
        case 0x17a1dcu: goto label_17a1dc;
        case 0x17a208u: goto label_17a208;
        case 0x17a22cu: goto label_17a22c;
        default: break;
    }

    ctx->pc = 0x178cf0u;

    // 0x178cf0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x178cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x178cf4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x178cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x178cf8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x178cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x178cfc: 0x24c6b580  addiu       $a2, $a2, -0x4A80
    ctx->pc = 0x178cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948224));
    // 0x178d00: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x178d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x178d04: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x178d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x178d08: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x178d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x178d0c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x178d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x178d10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x178d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x178d14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x178d18: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x178d18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x178d1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x178d1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x178d20: 0x90880019  lbu         $t0, 0x19($a0)
    ctx->pc = 0x178d20u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x178d24: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x178d24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x178d28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x178d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178d2c: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x178d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x178d30: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x178d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x178d34: 0x80c60000  lb          $a2, 0x0($a2)
    ctx->pc = 0x178d34u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x178d38: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x178D38u;
    {
        const bool branch_taken_0x178d38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x178D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D38u;
        // 0x178d3c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d38) {
            ctx->pc = 0x178D60u;
            goto label_178d60;
        }
    }
    ctx->pc = 0x178D40u;
    // 0x178d40: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x178d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x178d44: 0x9063b570  lbu         $v1, -0x4A90($v1)
    ctx->pc = 0x178d44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948208)));
    // 0x178d48: 0x55030006  bnel        $t0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x178D48u;
    {
        const bool branch_taken_0x178d48 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x178d48) {
            ctx->pc = 0x178D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178D48u;
            // 0x178d4c: 0x310200ff  andi        $v0, $t0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x178D64u;
            goto label_178d64;
        }
    }
    ctx->pc = 0x178D50u;
    // 0x178d50: 0x924600ac  lbu         $a2, 0xAC($s2)
    ctx->pc = 0x178d50u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x178d54: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x178d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x178d58: 0x54c30535  bnel        $a2, $v1, . + 4 + (0x535 << 2)
    ctx->pc = 0x178D58u;
    {
        const bool branch_taken_0x178d58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x178d58) {
            ctx->pc = 0x178D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178D58u;
            // 0x178d5c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A230u;
            goto label_17a230;
        }
    }
    ctx->pc = 0x178D60u;
label_178d60:
    // 0x178d60: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x178d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_178d64:
    // 0x178d64: 0x265100c0  addiu       $s1, $s2, 0xC0
    ctx->pc = 0x178d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x178d68: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x178d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x178d6c: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x178d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x178d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178d74: 0xc048930  jal         func_1224C0
    ctx->pc = 0x178D74u;
    SET_GPR_U32(ctx, 31, 0x178D7Cu);
    ctx->pc = 0x178D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178D74u;
    // 0x178d78: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x178D74u, 0x178D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D7Cu;
label_178d7c:
    // 0x178d7c: 0x3c043f84  lui         $a0, 0x3F84
    ctx->pc = 0x178d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16260 << 16));
    // 0x178d80: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x178d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
    // 0x178d84: 0x34847ae1  ori         $a0, $a0, 0x7AE1
    ctx->pc = 0x178d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31457);
    // 0x178d88: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x178d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x178d8c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x178d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x178d90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x178d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d94: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x178D94u;
    SET_GPR_U32(ctx, 31, 0x178D9Cu);
    ctx->pc = 0x178D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178D94u;
    // 0x178d98: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x178D94u, 0x178D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D9Cu;
label_178d9c:
    // 0x178d9c: 0xc048c12  jal         func_123048
    ctx->pc = 0x178D9Cu;
    SET_GPR_U32(ctx, 31, 0x178DA4u);
    ctx->pc = 0x178DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178D9Cu;
    // 0x178da0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123048u, 0x178D9Cu, 0x178DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DA4u;
label_178da4:
    // 0x178da4: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x178da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x178da8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x178da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x178dac: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x178dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x178db0: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x178db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x178db4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x178db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x178db8: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x178db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178dbc: 0x86440040  lh          $a0, 0x40($s2)
    ctx->pc = 0x178dbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x178dc0: 0x96430046  lhu         $v1, 0x46($s2)
    ctx->pc = 0x178dc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x178dc4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x178dc4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x178dc8: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x178dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178dcc: 0x86460042  lh          $a2, 0x42($s2)
    ctx->pc = 0x178dccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x178dd0: 0x96450048  lhu         $a1, 0x48($s2)
    ctx->pc = 0x178dd0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x178dd4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178dd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x178dd8: 0x833818  mult        $a3, $a0, $v1
    ctx->pc = 0x178dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x178ddc: 0x70c52818  mult1       $a1, $a2, $a1
    ctx->pc = 0x178ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x178de0: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x178de0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x178de4: 0x8644003e  lh          $a0, 0x3E($s2)
    ctx->pc = 0x178de4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x178de8: 0x73a03  sra         $a3, $a3, 8
    ctx->pc = 0x178de8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 8));
    // 0x178dec: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x178decu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x178df0: 0x8643003c  lh          $v1, 0x3C($s2)
    ctx->pc = 0x178df0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x178df4: 0xc74823  subu        $t1, $a2, $a3
    ctx->pc = 0x178df4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x178df8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178df8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x178dfc: 0x1243021  addu        $a2, $t1, $a0
    ctx->pc = 0x178dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x178e00: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x178e00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x178e04: 0x0  nop
    ctx->pc = 0x178e04u;
    // NOP
    // 0x178e08: 0x854023  subu        $t0, $a0, $a1
    ctx->pc = 0x178e08u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x178e0c: 0x4c00507  bltz        $a2, . + 4 + (0x507 << 2)
    ctx->pc = 0x178E0Cu;
    {
        const bool branch_taken_0x178e0c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x178E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E0Cu;
        // 0x178e10: 0x1033821  addu        $a3, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e0c) {
            ctx->pc = 0x17A22Cu;
            goto label_17a22c;
        }
    }
    ctx->pc = 0x178E14u;
    // 0x178e14: 0x29210281  slti        $at, $t1, 0x281
    ctx->pc = 0x178e14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x178e18: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x178E18u;
    {
        const bool branch_taken_0x178e18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x178e18) {
            ctx->pc = 0x178E28u;
            goto label_178e28;
        }
    }
    ctx->pc = 0x178E20u;
    // 0x178e20: 0x10000502  b           . + 4 + (0x502 << 2)
    ctx->pc = 0x178E20u;
    {
        const bool branch_taken_0x178e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178e20) {
            ctx->pc = 0x17A22Cu;
            goto label_17a22c;
        }
    }
    ctx->pc = 0x178E28u;
label_178e28:
    // 0x178e28: 0x4e00500  bltz        $a3, . + 4 + (0x500 << 2)
    ctx->pc = 0x178E28u;
    {
        const bool branch_taken_0x178e28 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x178e28) {
            ctx->pc = 0x17A22Cu;
            goto label_17a22c;
        }
    }
    ctx->pc = 0x178E30u;
    // 0x178e30: 0x290101e1  slti        $at, $t0, 0x1E1
    ctx->pc = 0x178e30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)481) ? 1 : 0);
    // 0x178e34: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x178E34u;
    {
        const bool branch_taken_0x178e34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x178e34) {
            ctx->pc = 0x178E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178E34u;
            // 0x178e38: 0x924500ac  lbu         $a1, 0xAC($s2) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178E48u;
            goto label_178e48;
        }
    }
    ctx->pc = 0x178E3Cu;
    // 0x178e3c: 0x100004fb  b           . + 4 + (0x4FB << 2)
    ctx->pc = 0x178E3Cu;
    {
        const bool branch_taken_0x178e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178e3c) {
            ctx->pc = 0x17A22Cu;
            goto label_17a22c;
        }
    }
    ctx->pc = 0x178E44u;
    // 0x178e44: 0x924500ac  lbu         $a1, 0xAC($s2)
    ctx->pc = 0x178e44u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
label_178e48:
    // 0x178e48: 0x10a004f8  beqz        $a1, . + 4 + (0x4F8 << 2)
    ctx->pc = 0x178E48u;
    {
        const bool branch_taken_0x178e48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x178e48) {
            ctx->pc = 0x17A22Cu;
            goto label_17a22c;
        }
    }
    ctx->pc = 0x178E50u;
    // 0x178e50: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x178e50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x178e54: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x178e54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x178e58: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x178e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x178e5c: 0x8e2c0004  lw          $t4, 0x4($s1)
    ctx->pc = 0x178e5cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x178e60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x178e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178e64: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x178E64u;
    {
        const bool branch_taken_0x178e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E64u;
        // 0x178e68: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e64) {
            ctx->pc = 0x178E70u;
            goto label_178e70;
        }
    }
    ctx->pc = 0x178E6Cu;
    // 0x178e6c: 0x1cd  break       0, 7
    ctx->pc = 0x178e6cu;
    runtime->handleBreak(rdram, ctx);
label_178e70:
    // 0x178e70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178e74: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x178e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x178e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178e7c: 0x922a0008  lbu         $t2, 0x8($s1)
    ctx->pc = 0x178e7cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x178e80: 0x1012  mflo        $v0
    ctx->pc = 0x178e80u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x178e84: 0x92250009  lbu         $a1, 0x9($s1)
    ctx->pc = 0x178e84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x178e88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x178e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178e8c: 0x0  nop
    ctx->pc = 0x178e8cu;
    // NOP
    // 0x178e90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x178e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x178e94: 0xa5c00  sll         $t3, $t2, 16
    ctx->pc = 0x178e94u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x178e98: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x178e98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x178e9c: 0x6b5825  or          $t3, $v1, $t3
    ctx->pc = 0x178e9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x178ea0: 0x56a00  sll         $t5, $a1, 8
    ctx->pc = 0x178ea0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x178ea4: 0x1ab6825  or          $t5, $t5, $t3
    ctx->pc = 0x178ea4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 11));
    // 0x178ea8: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x178ea8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x178eac: 0x4d8025  or          $s0, $v0, $t5
    ctx->pc = 0x178eacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x178eb0: 0x916bb570  lbu         $t3, -0x4A90($t3)
    ctx->pc = 0x178eb0u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294948208)));
    // 0x178eb4: 0x924d0019  lbu         $t5, 0x19($s2)
    ctx->pc = 0x178eb4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25)));
    // 0x178eb8: 0x1ab082a  slt         $at, $t5, $t3
    ctx->pc = 0x178eb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x178ebc: 0x10200071  beqz        $at, . + 4 + (0x71 << 2)
    ctx->pc = 0x178EBCu;
    {
        const bool branch_taken_0x178ebc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x178EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EBCu;
        // 0x178ec0: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ebc) {
            ctx->pc = 0x179084u;
            goto label_179084;
        }
    }
    ctx->pc = 0x178EC4u;
    // 0x178ec4: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x178ec4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x178ec8: 0xb7840  sll         $t7, $t3, 1
    ctx->pc = 0x178ec8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x178ecc: 0x25adb580  addiu       $t5, $t5, -0x4A80
    ctx->pc = 0x178eccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294948224));
    // 0x178ed0: 0x1af7021  addu        $t6, $t5, $t7
    ctx->pc = 0x178ed0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x178ed4: 0x81ce0000  lb          $t6, 0x0($t6)
    ctx->pc = 0x178ed4u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x178ed8: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x178ed8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178edc: 0x55cd006a  bnel        $t6, $t5, . + 4 + (0x6A << 2)
    ctx->pc = 0x178EDCu;
    {
        const bool branch_taken_0x178edc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        if (branch_taken_0x178edc) {
            ctx->pc = 0x178EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178EDCu;
            // 0x178ee0: 0xafb000bc  sw          $s0, 0xBC($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179088u;
            goto label_179088;
        }
    }
    ctx->pc = 0x178EE4u;
    // 0x178ee4: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x178ee4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x178ee8: 0x240e00ff  addiu       $t6, $zero, 0xFF
    ctx->pc = 0x178ee8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x178eec: 0x25adb581  addiu       $t5, $t5, -0x4A7F
    ctx->pc = 0x178eecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294948225));
    // 0x178ef0: 0x1af7821  addu        $t7, $t5, $t7
    ctx->pc = 0x178ef0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x178ef4: 0x91ef0000  lbu         $t7, 0x0($t7)
    ctx->pc = 0x178ef4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x178ef8: 0x3c0d437f  lui         $t5, 0x437F
    ctx->pc = 0x178ef8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)17279 << 16));
    // 0x178efc: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x178efcu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178f00: 0x1cf6823  subu        $t5, $t6, $t7
    ctx->pc = 0x178f00u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x178f04: 0x448d1800  mtc1        $t5, $f3
    ctx->pc = 0x178f04u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x178f08: 0x0  nop
    ctx->pc = 0x178f08u;
    // NOP
    // 0x178f0c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x178f0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x178f10: 0x46021d03  div.s       $f20, $f3, $f2
    ctx->pc = 0x178f10u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[20] = ctx->f[3] / ctx->f[2];
    // 0x178f14: 0x0  nop
    ctx->pc = 0x178f14u;
    // NOP
    // 0x178f18: 0x0  nop
    ctx->pc = 0x178f18u;
    // NOP
    // 0x178f1c: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x178F1Cu;
    {
        const bool branch_taken_0x178f1c = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x178f1c) {
            ctx->pc = 0x178F30u;
            goto label_178f30;
        }
    }
    ctx->pc = 0x178F24u;
    // 0x178f24: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x178f24u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178f28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x178F28u;
    {
        const bool branch_taken_0x178f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F28u;
        // 0x178f2c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f28) {
            ctx->pc = 0x178F4Cu;
            goto label_178f4c;
        }
    }
    ctx->pc = 0x178F30u;
label_178f30:
    // 0x178f30: 0xa6842  srl         $t5, $t2, 1
    ctx->pc = 0x178f30u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x178f34: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x178f34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x178f38: 0x1aa6825  or          $t5, $t5, $t2
    ctx->pc = 0x178f38u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 10));
    // 0x178f3c: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x178f3cu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178f40: 0x0  nop
    ctx->pc = 0x178f40u;
    // NOP
    // 0x178f44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x178f44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x178f48: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x178f48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_178f4c:
    // 0x178f4c: 0x461410c2  mul.s       $f3, $f2, $f20
    ctx->pc = 0x178f4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x178f50: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x178f50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
    // 0x178f54: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x178f54u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178f58: 0x0  nop
    ctx->pc = 0x178f58u;
    // NOP
    // 0x178f5c: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x178f5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x178f60: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x178F60u;
    {
        const bool branch_taken_0x178f60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x178f60) {
            ctx->pc = 0x178F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178F60u;
            // 0x178f64: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x178F7Cu;
            goto label_178f7c;
        }
    }
    ctx->pc = 0x178F68u;
    // 0x178f68: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178f68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x178f6c: 0x440d1000  mfc1        $t5, $f2
    ctx->pc = 0x178f6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x178f70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x178F70u;
    {
        const bool branch_taken_0x178f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F70u;
        // 0x178f74: 0xd5400  sll         $t2, $t5, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f70) {
            ctx->pc = 0x178F94u;
            goto label_178f94;
        }
    }
    ctx->pc = 0x178F78u;
    // 0x178f78: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x178f78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_178f7c:
    // 0x178f7c: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x178f7cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x178f80: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x178f84: 0x440d1000  mfc1        $t5, $f2
    ctx->pc = 0x178f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x178f88: 0x0  nop
    ctx->pc = 0x178f88u;
    // NOP
    // 0x178f8c: 0x1aa6825  or          $t5, $t5, $t2
    ctx->pc = 0x178f8cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 10));
    // 0x178f90: 0xd5400  sll         $t2, $t5, 16
    ctx->pc = 0x178f90u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
label_178f94:
    // 0x178f94: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x178F94u;
    {
        const bool branch_taken_0x178f94 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x178F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F94u;
        // 0x178f98: 0x6a6825  or          $t5, $v1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f94) {
            ctx->pc = 0x178FA8u;
            goto label_178fa8;
        }
    }
    ctx->pc = 0x178F9Cu;
    // 0x178f9c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x178f9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178fa0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x178FA0u;
    {
        const bool branch_taken_0x178fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FA0u;
        // 0x178fa4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x178fa0) {
            ctx->pc = 0x178FC4u;
            goto label_178fc4;
        }
    }
    ctx->pc = 0x178FA8u;
label_178fa8:
    // 0x178fa8: 0x55042  srl         $t2, $a1, 1
    ctx->pc = 0x178fa8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x178fac: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x178facu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x178fb0: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x178fb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x178fb4: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x178fb4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178fb8: 0x0  nop
    ctx->pc = 0x178fb8u;
    // NOP
    // 0x178fbc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x178fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x178fc0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x178fc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_178fc4:
    // 0x178fc4: 0x461410c2  mul.s       $f3, $f2, $f20
    ctx->pc = 0x178fc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x178fc8: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x178fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x178fcc: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x178fccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178fd0: 0x0  nop
    ctx->pc = 0x178fd0u;
    // NOP
    // 0x178fd4: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x178fd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x178fd8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x178FD8u;
    {
        const bool branch_taken_0x178fd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x178fd8) {
            ctx->pc = 0x178FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178FD8u;
            // 0x178fdc: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x178FF4u;
            goto label_178ff4;
        }
    }
    ctx->pc = 0x178FE0u;
    // 0x178fe0: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178fe0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x178fe4: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x178fe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x178fe8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x178FE8u;
    {
        const bool branch_taken_0x178fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FE8u;
        // 0x178fec: 0xa2a00  sll         $a1, $t2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178fe8) {
            ctx->pc = 0x17900Cu;
            goto label_17900c;
        }
    }
    ctx->pc = 0x178FF0u;
    // 0x178ff0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x178ff0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_178ff4:
    // 0x178ff4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x178ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x178ff8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178ff8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x178ffc: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x178ffcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x179000: 0x0  nop
    ctx->pc = 0x179000u;
    // NOP
    // 0x179004: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x179004u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x179008: 0xa2a00  sll         $a1, $t2, 8
    ctx->pc = 0x179008u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_17900c:
    // 0x17900c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17900Cu;
    {
        const bool branch_taken_0x17900c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x179010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17900Cu;
        // 0x179010: 0x1a55025  or          $t2, $t5, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17900c) {
            ctx->pc = 0x179020u;
            goto label_179020;
        }
    }
    ctx->pc = 0x179014u;
    // 0x179014: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x179014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179018: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179018u;
    {
        const bool branch_taken_0x179018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179018u;
        // 0x17901c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179018) {
            ctx->pc = 0x17903Cu;
            goto label_17903c;
        }
    }
    ctx->pc = 0x179020u;
label_179020:
    // 0x179020: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x179020u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x179024: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x179024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x179028: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x179028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x17902c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x17902cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179030: 0x0  nop
    ctx->pc = 0x179030u;
    // NOP
    // 0x179034: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x179038: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x179038u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_17903c:
    // 0x17903c: 0x461410c2  mul.s       $f3, $f2, $f20
    ctx->pc = 0x17903cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x179040: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x179040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x179044: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x179044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179048: 0x0  nop
    ctx->pc = 0x179048u;
    // NOP
    // 0x17904c: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x17904cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179050: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x179050u;
    {
        const bool branch_taken_0x179050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179050) {
            ctx->pc = 0x179054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179050u;
            // 0x179054: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17906Cu;
            goto label_17906c;
        }
    }
    ctx->pc = 0x179058u;
    // 0x179058: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179058u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x17905c: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x17905cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x179060: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179060u;
    {
        const bool branch_taken_0x179060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179060u;
        // 0x179064: 0xaa8025  or          $s0, $a1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179060) {
            ctx->pc = 0x179084u;
            goto label_179084;
        }
    }
    ctx->pc = 0x179068u;
    // 0x179068: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x179068u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_17906c:
    // 0x17906c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x17906cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x179070: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179070u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179074: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x179074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x179078: 0x0  nop
    ctx->pc = 0x179078u;
    // NOP
    // 0x17907c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x17907cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x179080: 0xaa8025  or          $s0, $a1, $t2
    ctx->pc = 0x179080u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
label_179084:
    // 0x179084: 0xafb000bc  sw          $s0, 0xBC($sp)
    ctx->pc = 0x179084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 16));
label_179088:
    // 0x179088: 0xafb000cc  sw          $s0, 0xCC($sp)
    ctx->pc = 0x179088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 16));
    // 0x17908c: 0xafb000dc  sw          $s0, 0xDC($sp)
    ctx->pc = 0x17908cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 16));
    // 0x179090: 0xafb000ec  sw          $s0, 0xEC($sp)
    ctx->pc = 0x179090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 16));
    // 0x179094: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x179094u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x179098: 0x50400423  beql        $v0, $zero, . + 4 + (0x423 << 2)
    ctx->pc = 0x179098u;
    {
        const bool branch_taken_0x179098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179098) {
            ctx->pc = 0x17909Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179098u;
            // 0x17909c: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A128u;
            goto label_17a128;
        }
    }
    ctx->pc = 0x1790A0u;
    // 0x1790a0: 0x9222000b  lbu         $v0, 0xB($s1)
    ctx->pc = 0x1790a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x1790a4: 0x922a000c  lbu         $t2, 0xC($s1)
    ctx->pc = 0x1790a4u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1790a8: 0x924d0019  lbu         $t5, 0x19($s2)
    ctx->pc = 0x1790a8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25)));
    // 0x1790ac: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x1790acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1790b0: 0x922e000d  lbu         $t6, 0xD($s1)
    ctx->pc = 0x1790b0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x1790b4: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x1790b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1790b8: 0xa7a00  sll         $t7, $t2, 8
    ctx->pc = 0x1790b8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1790bc: 0x1e52825  or          $a1, $t7, $a1
    ctx->pc = 0x1790bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) | GPR_U64(ctx, 5));
    // 0x1790c0: 0x1ab082a  slt         $at, $t5, $t3
    ctx->pc = 0x1790c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1790c4: 0x10200064  beqz        $at, . + 4 + (0x64 << 2)
    ctx->pc = 0x1790C4u;
    {
        const bool branch_taken_0x1790c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1790C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790C4u;
        // 0x1790c8: 0x1c52825  or          $a1, $t6, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 14) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1790c4) {
            ctx->pc = 0x179258u;
            goto label_179258;
        }
    }
    ctx->pc = 0x1790CCu;
    // 0x1790cc: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x1790ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x1790d0: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x1790d0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x1790d4: 0xb7840  sll         $t7, $t3, 1
    ctx->pc = 0x1790d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1790d8: 0x25adb580  addiu       $t5, $t5, -0x4A80
    ctx->pc = 0x1790d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294948224));
    // 0x1790dc: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x1790dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x1790e0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1790e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1790e4: 0x81ad0000  lb          $t5, 0x0($t5)
    ctx->pc = 0x1790e4u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1790e8: 0x55ab005c  bnel        $t5, $t3, . + 4 + (0x5C << 2)
    ctx->pc = 0x1790E8u;
    {
        const bool branch_taken_0x1790e8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 11));
        if (branch_taken_0x1790e8) {
            ctx->pc = 0x1790ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1790E8u;
            // 0x1790ec: 0x240a013b  addiu       $t2, $zero, 0x13B (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 315));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17925Cu;
            goto label_17925c;
        }
    }
    ctx->pc = 0x1790F0u;
    // 0x1790f0: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1790F0u;
    {
        const bool branch_taken_0x1790f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1790f0) {
            ctx->pc = 0x1790F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1790F0u;
            // 0x1790f4: 0x25842  srl         $t3, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179108u;
            goto label_179108;
        }
    }
    ctx->pc = 0x1790F8u;
    // 0x1790f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1790f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1790fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1790FCu;
    {
        const bool branch_taken_0x1790fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790FCu;
        // 0x179100: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1790fc) {
            ctx->pc = 0x179120u;
            goto label_179120;
        }
    }
    ctx->pc = 0x179104u;
    // 0x179104: 0x25842  srl         $t3, $v0, 1
    ctx->pc = 0x179104u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_179108:
    // 0x179108: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x179108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17910c: 0x1655825  or          $t3, $t3, $a1
    ctx->pc = 0x17910cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x179110: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x179110u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179114: 0x0  nop
    ctx->pc = 0x179114u;
    // NOP
    // 0x179118: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17911c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x17911cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_179120:
    // 0x179120: 0x461410c2  mul.s       $f3, $f2, $f20
    ctx->pc = 0x179120u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x179124: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x179124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x179128: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x179128u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17912c: 0x0  nop
    ctx->pc = 0x17912cu;
    // NOP
    // 0x179130: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x179130u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179134: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x179134u;
    {
        const bool branch_taken_0x179134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179134) {
            ctx->pc = 0x179138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179134u;
            // 0x179138: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179150u;
            goto label_179150;
        }
    }
    ctx->pc = 0x17913Cu;
    // 0x17913c: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17913cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179140: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x179140u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x179144: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179144u;
    {
        const bool branch_taken_0x179144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179144u;
        // 0x179148: 0xb2c00  sll         $a1, $t3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179144) {
            ctx->pc = 0x179168u;
            goto label_179168;
        }
    }
    ctx->pc = 0x17914Cu;
    // 0x17914c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x17914cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_179150:
    // 0x179150: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x179150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x179154: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179154u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179158: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x179158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x17915c: 0x0  nop
    ctx->pc = 0x17915cu;
    // NOP
    // 0x179160: 0x1655825  or          $t3, $t3, $a1
    ctx->pc = 0x179160u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x179164: 0xb2c00  sll         $a1, $t3, 16
    ctx->pc = 0x179164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
label_179168:
    // 0x179168: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x179168u;
    {
        const bool branch_taken_0x179168 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x17916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179168u;
        // 0x17916c: 0x656825  or          $t5, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179168) {
            ctx->pc = 0x17917Cu;
            goto label_17917c;
        }
    }
    ctx->pc = 0x179170u;
    // 0x179170: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x179170u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179174: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179174u;
    {
        const bool branch_taken_0x179174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179174u;
        // 0x179178: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179174) {
            ctx->pc = 0x179198u;
            goto label_179198;
        }
    }
    ctx->pc = 0x17917Cu;
label_17917c:
    // 0x17917c: 0xa5842  srl         $t3, $t2, 1
    ctx->pc = 0x17917cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x179180: 0x31450001  andi        $a1, $t2, 0x1
    ctx->pc = 0x179180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x179184: 0x1655825  or          $t3, $t3, $a1
    ctx->pc = 0x179184u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x179188: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x179188u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17918c: 0x0  nop
    ctx->pc = 0x17918cu;
    // NOP
    // 0x179190: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x179194: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x179194u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_179198:
    // 0x179198: 0x461410c2  mul.s       $f3, $f2, $f20
    ctx->pc = 0x179198u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x17919c: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x17919cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x1791a0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1791a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1791a4: 0x0  nop
    ctx->pc = 0x1791a4u;
    // NOP
    // 0x1791a8: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x1791a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1791ac: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1791ACu;
    {
        const bool branch_taken_0x1791ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1791ac) {
            ctx->pc = 0x1791B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1791ACu;
            // 0x1791b0: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1791C8u;
            goto label_1791c8;
        }
    }
    ctx->pc = 0x1791B4u;
    // 0x1791b4: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1791b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1791b8: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x1791b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x1791bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1791BCu;
    {
        const bool branch_taken_0x1791bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791BCu;
        // 0x1791c0: 0xa2a00  sll         $a1, $t2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791bc) {
            ctx->pc = 0x1791E0u;
            goto label_1791e0;
        }
    }
    ctx->pc = 0x1791C4u;
    // 0x1791c4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1791c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1791c8:
    // 0x1791c8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1791c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1791cc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1791ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1791d0: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x1791d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x1791d4: 0x0  nop
    ctx->pc = 0x1791d4u;
    // NOP
    // 0x1791d8: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x1791d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x1791dc: 0xa2a00  sll         $a1, $t2, 8
    ctx->pc = 0x1791dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_1791e0:
    // 0x1791e0: 0x5c00004  bltz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1791E0u;
    {
        const bool branch_taken_0x1791e0 = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x1791E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791E0u;
        // 0x1791e4: 0x1a55825  or          $t3, $t5, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791e0) {
            ctx->pc = 0x1791F4u;
            goto label_1791f4;
        }
    }
    ctx->pc = 0x1791E8u;
    // 0x1791e8: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x1791e8u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1791ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1791ECu;
    {
        const bool branch_taken_0x1791ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791ECu;
        // 0x1791f0: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791ec) {
            ctx->pc = 0x179210u;
            goto label_179210;
        }
    }
    ctx->pc = 0x1791F4u;
label_1791f4:
    // 0x1791f4: 0xe5042  srl         $t2, $t6, 1
    ctx->pc = 0x1791f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
    // 0x1791f8: 0x31c50001  andi        $a1, $t6, 0x1
    ctx->pc = 0x1791f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x1791fc: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x1791fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x179200: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x179200u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179204: 0x0  nop
    ctx->pc = 0x179204u;
    // NOP
    // 0x179208: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17920c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x17920cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_179210:
    // 0x179210: 0x461410c2  mul.s       $f3, $f2, $f20
    ctx->pc = 0x179210u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x179214: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x179214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x179218: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x179218u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17921c: 0x0  nop
    ctx->pc = 0x17921cu;
    // NOP
    // 0x179220: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x179220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179224: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x179224u;
    {
        const bool branch_taken_0x179224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179224) {
            ctx->pc = 0x179228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179224u;
            // 0x179228: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179240u;
            goto label_179240;
        }
    }
    ctx->pc = 0x17922Cu;
    // 0x17922c: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17922cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179230: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x179230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x179234: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179234u;
    {
        const bool branch_taken_0x179234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179234u;
        // 0x179238: 0x14b2825  or          $a1, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179234) {
            ctx->pc = 0x179258u;
            goto label_179258;
        }
    }
    ctx->pc = 0x17923Cu;
    // 0x17923c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x17923cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_179240:
    // 0x179240: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x179240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x179244: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179244u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179248: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x179248u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x17924c: 0x0  nop
    ctx->pc = 0x17924cu;
    // NOP
    // 0x179250: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x179250u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x179254: 0x14b2825  or          $a1, $t2, $t3
    ctx->pc = 0x179254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_179258:
    // 0x179258: 0x240a013b  addiu       $t2, $zero, 0x13B
    ctx->pc = 0x179258u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 315));
label_17925c:
    // 0x17925c: 0x518a02cf  beql        $t4, $t2, . + 4 + (0x2CF << 2)
    ctx->pc = 0x17925Cu;
    {
        const bool branch_taken_0x17925c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 10));
        if (branch_taken_0x17925c) {
            ctx->pc = 0x179260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17925Cu;
            // 0x179260: 0x922a0008  lbu         $t2, 0x8($s1) (Delay Slot)
            SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179D9Cu;
            goto label_179d9c;
        }
    }
    ctx->pc = 0x179264u;
    // 0x179264: 0x240a010e  addiu       $t2, $zero, 0x10E
    ctx->pc = 0x179264u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x179268: 0x518a02c9  beql        $t4, $t2, . + 4 + (0x2C9 << 2)
    ctx->pc = 0x179268u;
    {
        const bool branch_taken_0x179268 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 10));
        if (branch_taken_0x179268) {
            ctx->pc = 0x17926Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179268u;
            // 0x17926c: 0xafa500bc  sw          $a1, 0xBC($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179D90u;
            goto label_179d90;
        }
    }
    ctx->pc = 0x179270u;
    // 0x179270: 0x240a00e1  addiu       $t2, $zero, 0xE1
    ctx->pc = 0x179270u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x179274: 0x518a01e2  beql        $t4, $t2, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x179274u;
    {
        const bool branch_taken_0x179274 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 10));
        if (branch_taken_0x179274) {
            ctx->pc = 0x179278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179274u;
            // 0x179278: 0x922d0008  lbu         $t5, 0x8($s1) (Delay Slot)
            SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179A00u;
            goto label_179a00;
        }
    }
    ctx->pc = 0x17927Cu;
    // 0x17927c: 0x240a00b4  addiu       $t2, $zero, 0xB4
    ctx->pc = 0x17927cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x179280: 0x518a01dc  beql        $t4, $t2, . + 4 + (0x1DC << 2)
    ctx->pc = 0x179280u;
    {
        const bool branch_taken_0x179280 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 10));
        if (branch_taken_0x179280) {
            ctx->pc = 0x179284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179280u;
            // 0x179284: 0xafa500bc  sw          $a1, 0xBC($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1799F4u;
            goto label_1799f4;
        }
    }
    ctx->pc = 0x179288u;
    // 0x179288: 0x240a0087  addiu       $t2, $zero, 0x87
    ctx->pc = 0x179288u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x17928c: 0x518a00f5  beql        $t4, $t2, . + 4 + (0xF5 << 2)
    ctx->pc = 0x17928Cu;
    {
        const bool branch_taken_0x17928c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 10));
        if (branch_taken_0x17928c) {
            ctx->pc = 0x179290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17928Cu;
            // 0x179290: 0x922d0008  lbu         $t5, 0x8($s1) (Delay Slot)
            SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179664u;
            goto label_179664;
        }
    }
    ctx->pc = 0x179294u;
    // 0x179294: 0x240a005a  addiu       $t2, $zero, 0x5A
    ctx->pc = 0x179294u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x179298: 0x518a00ef  beql        $t4, $t2, . + 4 + (0xEF << 2)
    ctx->pc = 0x179298u;
    {
        const bool branch_taken_0x179298 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 10));
        if (branch_taken_0x179298) {
            ctx->pc = 0x17929Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179298u;
            // 0x17929c: 0xafa500cc  sw          $a1, 0xCC($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179658u;
            goto label_179658;
        }
    }
    ctx->pc = 0x1792A0u;
    // 0x1792a0: 0x240a002d  addiu       $t2, $zero, 0x2D
    ctx->pc = 0x1792a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1792a4: 0x518a0009  beql        $t4, $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1792A4u;
    {
        const bool branch_taken_0x1792a4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 10));
        if (branch_taken_0x1792a4) {
            ctx->pc = 0x1792A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1792A4u;
            // 0x1792a8: 0x92250008  lbu         $a1, 0x8($s1) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1792CCu;
            goto label_1792cc;
        }
    }
    ctx->pc = 0x1792ACu;
    // 0x1792ac: 0x51800004  beql        $t4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1792ACu;
    {
        const bool branch_taken_0x1792ac = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1792ac) {
            ctx->pc = 0x1792B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1792ACu;
            // 0x1792b0: 0xafa500dc  sw          $a1, 0xDC($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1792C0u;
            goto label_1792c0;
        }
    }
    ctx->pc = 0x1792B4u;
    // 0x1792b4: 0x1000039b  b           . + 4 + (0x39B << 2)
    ctx->pc = 0x1792B4u;
    {
        const bool branch_taken_0x1792b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1792b4) {
            ctx->pc = 0x17A124u;
            goto label_17a124;
        }
    }
    ctx->pc = 0x1792BCu;
    // 0x1792bc: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x1792bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
label_1792c0:
    // 0x1792c0: 0x10000398  b           . + 4 + (0x398 << 2)
    ctx->pc = 0x1792C0u;
    {
        const bool branch_taken_0x1792c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1792C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792C0u;
        // 0x1792c4: 0xafa500ec  sw          $a1, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792c0) {
            ctx->pc = 0x17A124u;
            goto label_17a124;
        }
    }
    ctx->pc = 0x1792C8u;
    // 0x1792c8: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x1792c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_1792cc:
    // 0x1792cc: 0x4a20005  bltzl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1792CCu;
    {
        const bool branch_taken_0x1792cc = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1792cc) {
            ctx->pc = 0x1792D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1792CCu;
            // 0x1792d0: 0x55842  srl         $t3, $a1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1792E4u;
            goto label_1792e4;
        }
    }
    ctx->pc = 0x1792D4u;
    // 0x1792d4: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1792d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1792d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1792D8u;
    {
        const bool branch_taken_0x1792d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1792DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792D8u;
        // 0x1792dc: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792d8) {
            ctx->pc = 0x1792FCu;
            goto label_1792fc;
        }
    }
    ctx->pc = 0x1792E0u;
    // 0x1792e0: 0x55842  srl         $t3, $a1, 1
    ctx->pc = 0x1792e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_1792e4:
    // 0x1792e4: 0x30aa0001  andi        $t2, $a1, 0x1
    ctx->pc = 0x1792e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1792e8: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x1792e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x1792ec: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x1792ecu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1792f0: 0x0  nop
    ctx->pc = 0x1792f0u;
    // NOP
    // 0x1792f4: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x1792f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1792f8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1792f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1792fc:
    // 0x1792fc: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1792FCu;
    {
        const bool branch_taken_0x1792fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1792fc) {
            ctx->pc = 0x179300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1792FCu;
            // 0x179300: 0x25842  srl         $t3, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179314u;
            goto label_179314;
        }
    }
    ctx->pc = 0x179304u;
    // 0x179304: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x179304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179308: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179308u;
    {
        const bool branch_taken_0x179308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179308u;
        // 0x17930c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179308) {
            ctx->pc = 0x17932Cu;
            goto label_17932c;
        }
    }
    ctx->pc = 0x179310u;
    // 0x179310: 0x25842  srl         $t3, $v0, 1
    ctx->pc = 0x179310u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_179314:
    // 0x179314: 0x304a0001  andi        $t2, $v0, 0x1
    ctx->pc = 0x179314u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x179318: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x179318u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x17931c: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x17931cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179320: 0x0  nop
    ctx->pc = 0x179320u;
    // NOP
    // 0x179324: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x179328: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x179328u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_17932c:
    // 0x17932c: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x17932cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x179330: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x179330u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
    // 0x179334: 0x460118dc  madd.s      $f3, $f3, $f1
    ctx->pc = 0x179334u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x179338: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x179338u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17933c: 0x0  nop
    ctx->pc = 0x17933cu;
    // NOP
    // 0x179340: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x179340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179344: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x179344u;
    {
        const bool branch_taken_0x179344 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179344) {
            ctx->pc = 0x179348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179344u;
            // 0x179348: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179360u;
            goto label_179360;
        }
    }
    ctx->pc = 0x17934Cu;
    // 0x17934c: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17934cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179350: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x179350u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x179354: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179354u;
    {
        const bool branch_taken_0x179354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179354u;
        // 0x179358: 0x316bffff  andi        $t3, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179354) {
            ctx->pc = 0x179378u;
            goto label_179378;
        }
    }
    ctx->pc = 0x17935Cu;
    // 0x17935c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x17935cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_179360:
    // 0x179360: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x179360u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x179364: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179368: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x179368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x17936c: 0x0  nop
    ctx->pc = 0x17936cu;
    // NOP
    // 0x179370: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x179370u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x179374: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x179374u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_179378:
    // 0x179378: 0x922d0009  lbu         $t5, 0x9($s1)
    ctx->pc = 0x179378u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x17937c: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x17937Cu;
    {
        const bool branch_taken_0x17937c = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x179380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17937Cu;
        // 0x179380: 0x316cffff  andi        $t4, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17937c) {
            ctx->pc = 0x179390u;
            goto label_179390;
        }
    }
    ctx->pc = 0x179384u;
    // 0x179384: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x179384u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179388: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179388u;
    {
        const bool branch_taken_0x179388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179388u;
        // 0x17938c: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179388) {
            ctx->pc = 0x1793ACu;
            goto label_1793ac;
        }
    }
    ctx->pc = 0x179390u;
label_179390:
    // 0x179390: 0xd5842  srl         $t3, $t5, 1
    ctx->pc = 0x179390u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x179394: 0x31aa0001  andi        $t2, $t5, 0x1
    ctx->pc = 0x179394u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x179398: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x179398u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x17939c: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x17939cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1793a0: 0x0  nop
    ctx->pc = 0x1793a0u;
    // NOP
    // 0x1793a4: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x1793a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1793a8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1793a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1793ac:
    // 0x1793ac: 0x5a20005  bltzl       $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1793ACu;
    {
        const bool branch_taken_0x1793ac = (GPR_S32(ctx, 13) < 0);
        if (branch_taken_0x1793ac) {
            ctx->pc = 0x1793B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1793ACu;
            // 0x1793b0: 0xd5842  srl         $t3, $t5, 1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1793C4u;
            goto label_1793c4;
        }
    }
    ctx->pc = 0x1793B4u;
    // 0x1793b4: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x1793b4u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1793b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1793B8u;
    {
        const bool branch_taken_0x1793b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1793BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793B8u;
        // 0x1793bc: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1793b8) {
            ctx->pc = 0x1793DCu;
            goto label_1793dc;
        }
    }
    ctx->pc = 0x1793C0u;
    // 0x1793c0: 0xd5842  srl         $t3, $t5, 1
    ctx->pc = 0x1793c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
label_1793c4:
    // 0x1793c4: 0x31aa0001  andi        $t2, $t5, 0x1
    ctx->pc = 0x1793c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x1793c8: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x1793c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x1793cc: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x1793ccu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1793d0: 0x0  nop
    ctx->pc = 0x1793d0u;
    // NOP
    // 0x1793d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1793d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1793d8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1793d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1793dc:
    // 0x1793dc: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x1793dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x1793e0: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x1793e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
    // 0x1793e4: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x1793e4u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x1793e8: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x1793e8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1793ec: 0x0  nop
    ctx->pc = 0x1793ecu;
    // NOP
    // 0x1793f0: 0x46051036  c.le.s      $f2, $f5
    ctx->pc = 0x1793f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1793f4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1793F4u;
    {
        const bool branch_taken_0x1793f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1793f4) {
            ctx->pc = 0x1793F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1793F4u;
            // 0x1793f8: 0x46022881  sub.s       $f2, $f5, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179410u;
            goto label_179410;
        }
    }
    ctx->pc = 0x1793FCu;
    // 0x1793fc: 0x460028a4  .word       0x460028A4                   # cvt.w.s     $f2, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1793fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179400: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x179400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x179404: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179404u;
    {
        const bool branch_taken_0x179404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179404u;
        // 0x179408: 0x316bffff  andi        $t3, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179404) {
            ctx->pc = 0x179428u;
            goto label_179428;
        }
    }
    ctx->pc = 0x17940Cu;
    // 0x17940c: 0x46022881  sub.s       $f2, $f5, $f2
    ctx->pc = 0x17940cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_179410:
    // 0x179410: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x179410u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x179414: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179414u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179418: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x179418u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x17941c: 0x0  nop
    ctx->pc = 0x17941cu;
    // NOP
    // 0x179420: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x179420u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x179424: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x179424u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_179428:
    // 0x179428: 0x5c00004  bltz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x179428u;
    {
        const bool branch_taken_0x179428 = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x17942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179428u;
        // 0x17942c: 0x316bffff  andi        $t3, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179428) {
            ctx->pc = 0x17943Cu;
            goto label_17943c;
        }
    }
    ctx->pc = 0x179430u;
    // 0x179430: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x179430u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179434: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179434u;
    {
        const bool branch_taken_0x179434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179434u;
        // 0x179438: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179434) {
            ctx->pc = 0x179458u;
            goto label_179458;
        }
    }
    ctx->pc = 0x17943Cu;
label_17943c:
    // 0x17943c: 0xe6842  srl         $t5, $t6, 1
    ctx->pc = 0x17943cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
    // 0x179440: 0x31ca0001  andi        $t2, $t6, 0x1
    ctx->pc = 0x179440u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x179444: 0x1aa6825  or          $t5, $t5, $t2
    ctx->pc = 0x179444u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 10));
    // 0x179448: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x179448u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17944c: 0x0  nop
    ctx->pc = 0x17944cu;
    // NOP
    // 0x179450: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x179450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x179454: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x179454u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_179458:
    // 0x179458: 0x5c20005  bltzl       $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x179458u;
    {
        const bool branch_taken_0x179458 = (GPR_S32(ctx, 14) < 0);
        if (branch_taken_0x179458) {
            ctx->pc = 0x17945Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179458u;
            // 0x17945c: 0xe6842  srl         $t5, $t6, 1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179470u;
            goto label_179470;
        }
    }
    ctx->pc = 0x179460u;
    // 0x179460: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x179460u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179464: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179464u;
    {
        const bool branch_taken_0x179464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179464u;
        // 0x179468: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179464) {
            ctx->pc = 0x179488u;
            goto label_179488;
        }
    }
    ctx->pc = 0x17946Cu;
    // 0x17946c: 0xe6842  srl         $t5, $t6, 1
    ctx->pc = 0x17946cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
label_179470:
    // 0x179470: 0x31ca0001  andi        $t2, $t6, 0x1
    ctx->pc = 0x179470u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x179474: 0x1aa6825  or          $t5, $t5, $t2
    ctx->pc = 0x179474u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 10));
    // 0x179478: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x179478u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17947c: 0x0  nop
    ctx->pc = 0x17947cu;
    // NOP
    // 0x179480: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x179484: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x179484u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_179488:
    // 0x179488: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x179488u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x17948c: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x17948cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
    // 0x179490: 0x4601191c  madd.s      $f4, $f3, $f1
    ctx->pc = 0x179490u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x179494: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x179494u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179498: 0x0  nop
    ctx->pc = 0x179498u;
    // NOP
    // 0x17949c: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x17949cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1794a0: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1794A0u;
    {
        const bool branch_taken_0x1794a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1794a0) {
            ctx->pc = 0x1794A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1794A0u;
            // 0x1794a4: 0x46022081  sub.s       $f2, $f4, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1794BCu;
            goto label_1794bc;
        }
    }
    ctx->pc = 0x1794A8u;
    // 0x1794a8: 0x460020a4  .word       0x460020A4                   # cvt.w.s     $f2, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1794a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1794ac: 0x440d1000  mfc1        $t5, $f2
    ctx->pc = 0x1794acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x1794b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1794B0u;
    {
        const bool branch_taken_0x1794b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1794B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794B0u;
        // 0x1794b4: 0x31adffff  andi        $t5, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794b0) {
            ctx->pc = 0x1794D4u;
            goto label_1794d4;
        }
    }
    ctx->pc = 0x1794B8u;
    // 0x1794b8: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x1794b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_1794bc:
    // 0x1794bc: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x1794bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x1794c0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1794c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1794c4: 0x440d1000  mfc1        $t5, $f2
    ctx->pc = 0x1794c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x1794c8: 0x0  nop
    ctx->pc = 0x1794c8u;
    // NOP
    // 0x1794cc: 0x1aa6825  or          $t5, $t5, $t2
    ctx->pc = 0x1794ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 10));
    // 0x1794d0: 0x31adffff  andi        $t5, $t5, 0xFFFF
    ctx->pc = 0x1794d0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
label_1794d4:
    // 0x1794d4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1794D4u;
    {
        const bool branch_taken_0x1794d4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1794D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794D4u;
        // 0x1794d8: 0x31aaffff  andi        $t2, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794d4) {
            ctx->pc = 0x1794E8u;
            goto label_1794e8;
        }
    }
    ctx->pc = 0x1794DCu;
    // 0x1794dc: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1794dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1794e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1794E0u;
    {
        const bool branch_taken_0x1794e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1794E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794E0u;
        // 0x1794e4: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794e0) {
            ctx->pc = 0x179504u;
            goto label_179504;
        }
    }
    ctx->pc = 0x1794E8u;
label_1794e8:
    // 0x1794e8: 0x56842  srl         $t5, $a1, 1
    ctx->pc = 0x1794e8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1794ec: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1794ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1794f0: 0x1a56825  or          $t5, $t5, $a1
    ctx->pc = 0x1794f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 5));
    // 0x1794f4: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x1794f4u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1794f8: 0x0  nop
    ctx->pc = 0x1794f8u;
    // NOP
    // 0x1794fc: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x1794fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x179500: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x179500u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_179504:
    // 0x179504: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179504u;
    {
        const bool branch_taken_0x179504 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x179504) {
            ctx->pc = 0x179508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179504u;
            // 0x179508: 0x22842  srl         $a1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17951Cu;
            goto label_17951c;
        }
    }
    ctx->pc = 0x17950Cu;
    // 0x17950c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17950cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179510: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179510u;
    {
        const bool branch_taken_0x179510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179510u;
        // 0x179514: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179510) {
            ctx->pc = 0x179534u;
            goto label_179534;
        }
    }
    ctx->pc = 0x179518u;
    // 0x179518: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x179518u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_17951c:
    // 0x17951c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17951cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x179520: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x179520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x179524: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x179524u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179528: 0x0  nop
    ctx->pc = 0x179528u;
    // NOP
    // 0x17952c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17952cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x179530: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x179530u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_179534:
    // 0x179534: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x179534u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x179538: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x179538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x17953c: 0x4600185c  madd.s      $f1, $f3, $f0
    ctx->pc = 0x17953cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x179540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179544: 0x0  nop
    ctx->pc = 0x179544u;
    // NOP
    // 0x179548: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x179548u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17954c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x17954Cu;
    {
        const bool branch_taken_0x17954c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17954c) {
            ctx->pc = 0x179550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17954Cu;
            // 0x179550: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179568u;
            goto label_179568;
        }
    }
    ctx->pc = 0x179554u;
    // 0x179554: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179554u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x179558: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x179558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x17955c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17955Cu;
    {
        const bool branch_taken_0x17955c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17955Cu;
        // 0x179560: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17955c) {
            ctx->pc = 0x179580u;
            goto label_179580;
        }
    }
    ctx->pc = 0x179564u;
    // 0x179564: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x179564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_179568:
    // 0x179568: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x179568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x17956c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17956cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x179570: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x179570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x179574: 0x0  nop
    ctx->pc = 0x179574u;
    // NOP
    // 0x179578: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x179578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x17957c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x17957cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_179580:
    // 0x179580: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x179580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x179584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179588: 0x0  nop
    ctx->pc = 0x179588u;
    // NOP
    // 0x17958c: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x17958cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179590: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x179590u;
    {
        const bool branch_taken_0x179590 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x179594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179590u;
        // 0x179594: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179590) {
            ctx->pc = 0x1795A8u;
            goto label_1795a8;
        }
    }
    ctx->pc = 0x179598u;
    // 0x179598: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179598u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17959c: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x17959cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x1795a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1795A0u;
    {
        const bool branch_taken_0x1795a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1795A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795A0u;
        // 0x1795a4: 0x31adffff  andi        $t5, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1795a0) {
            ctx->pc = 0x1795C4u;
            goto label_1795c4;
        }
    }
    ctx->pc = 0x1795A8u;
label_1795a8:
    // 0x1795a8: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x1795a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1795ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1795acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1795b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1795b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1795b4: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x1795b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x1795b8: 0x0  nop
    ctx->pc = 0x1795b8u;
    // NOP
    // 0x1795bc: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x1795bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x1795c0: 0x31adffff  andi        $t5, $t5, 0xFFFF
    ctx->pc = 0x1795c0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
label_1795c4:
    // 0x1795c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1795c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1795c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1795c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1795cc: 0x0  nop
    ctx->pc = 0x1795ccu;
    // NOP
    // 0x1795d0: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1795d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1795d4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1795D4u;
    {
        const bool branch_taken_0x1795d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1795D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795D4u;
        // 0x1795d8: 0x31aeffff  andi        $t6, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1795d4) {
            ctx->pc = 0x1795ECu;
            goto label_1795ec;
        }
    }
    ctx->pc = 0x1795DCu;
    // 0x1795dc: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1795dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1795e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1795e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1795e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1795E4u;
    {
        const bool branch_taken_0x1795e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1795E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795E4u;
        // 0x1795e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1795e4) {
            ctx->pc = 0x179608u;
            goto label_179608;
        }
    }
    ctx->pc = 0x1795ECu;
label_1795ec:
    // 0x1795ec: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x1795ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1795f0: 0x3c0d8000  lui         $t5, 0x8000
    ctx->pc = 0x1795f0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32768 << 16));
    // 0x1795f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1795f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1795f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1795f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1795fc: 0x0  nop
    ctx->pc = 0x1795fcu;
    // NOP
    // 0x179600: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x179600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x179604: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x179604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_179608:
    // 0x179608: 0x316d00ff  andi        $t5, $t3, 0xFF
    ctx->pc = 0x179608u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x17960c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x17960cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x179610: 0x318b00ff  andi        $t3, $t4, 0xFF
    ctx->pc = 0x179610u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x179614: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x179614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x179618: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x179618u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x17961c: 0xd6a00  sll         $t5, $t5, 8
    ctx->pc = 0x17961cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x179620: 0x6b6025  or          $t4, $v1, $t3
    ctx->pc = 0x179620u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x179624: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x179624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179628: 0x314b00ff  andi        $t3, $t2, 0xFF
    ctx->pc = 0x179628u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x17962c: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x17962cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x179630: 0x31ca00ff  andi        $t2, $t6, 0xFF
    ctx->pc = 0x179630u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x179634: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x179634u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x179638: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x179638u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x17963c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x17963cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x179640: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x179640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x179644: 0xafab00cc  sw          $t3, 0xCC($sp)
    ctx->pc = 0x179644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 11));
    // 0x179648: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17964c: 0x100002b5  b           . + 4 + (0x2B5 << 2)
    ctx->pc = 0x17964Cu;
    {
        const bool branch_taken_0x17964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17964Cu;
        // 0x179650: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17964c) {
            ctx->pc = 0x17A124u;
            goto label_17a124;
        }
    }
    ctx->pc = 0x179654u;
    // 0x179654: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x179654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
label_179658:
    // 0x179658: 0x100002b2  b           . + 4 + (0x2B2 << 2)
    ctx->pc = 0x179658u;
    {
        const bool branch_taken_0x179658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179658u;
        // 0x17965c: 0xafa500ec  sw          $a1, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179658) {
            ctx->pc = 0x17A124u;
            goto label_17a124;
        }
    }
    ctx->pc = 0x179660u;
    // 0x179660: 0x922d0008  lbu         $t5, 0x8($s1)
    ctx->pc = 0x179660u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_179664:
    // 0x179664: 0x5a20005  bltzl       $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x179664u;
    {
        const bool branch_taken_0x179664 = (GPR_S32(ctx, 13) < 0);
        if (branch_taken_0x179664) {
            ctx->pc = 0x179668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179664u;
            // 0x179668: 0xd5842  srl         $t3, $t5, 1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17967Cu;
            goto label_17967c;
        }
    }
    ctx->pc = 0x17966Cu;
    // 0x17966c: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x17966cu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179670: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179670u;
    {
        const bool branch_taken_0x179670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179670u;
        // 0x179674: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179670) {
            ctx->pc = 0x179694u;
            goto label_179694;
        }
    }
    ctx->pc = 0x179678u;
    // 0x179678: 0xd5842  srl         $t3, $t5, 1
    ctx->pc = 0x179678u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
label_17967c:
    // 0x17967c: 0x31aa0001  andi        $t2, $t5, 0x1
    ctx->pc = 0x17967cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x179680: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x179680u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x179684: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x179684u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179688: 0x0  nop
    ctx->pc = 0x179688u;
    // NOP
    // 0x17968c: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x17968cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x179690: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x179690u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_179694:
    // 0x179694: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179694u;
    {
        const bool branch_taken_0x179694 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x179694) {
            ctx->pc = 0x179698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179694u;
            // 0x179698: 0x25842  srl         $t3, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1796ACu;
            goto label_1796ac;
        }
    }
    ctx->pc = 0x17969Cu;
    // 0x17969c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17969cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1796a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1796A0u;
    {
        const bool branch_taken_0x1796a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1796A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796A0u;
        // 0x1796a4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1796a0) {
            ctx->pc = 0x1796C4u;
            goto label_1796c4;
        }
    }
    ctx->pc = 0x1796A8u;
    // 0x1796a8: 0x25842  srl         $t3, $v0, 1
    ctx->pc = 0x1796a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1796ac:
    // 0x1796ac: 0x304a0001  andi        $t2, $v0, 0x1
    ctx->pc = 0x1796acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1796b0: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x1796b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x1796b4: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x1796b4u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1796b8: 0x0  nop
    ctx->pc = 0x1796b8u;
    // NOP
    // 0x1796bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1796bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1796c0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1796c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1796c4:
    // 0x1796c4: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x1796c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x1796c8: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x1796c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
    // 0x1796cc: 0x460118dc  madd.s      $f3, $f3, $f1
    ctx->pc = 0x1796ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x1796d0: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x1796d0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1796d4: 0x0  nop
    ctx->pc = 0x1796d4u;
    // NOP
    // 0x1796d8: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x1796d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1796dc: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1796DCu;
    {
        const bool branch_taken_0x1796dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1796dc) {
            ctx->pc = 0x1796E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1796DCu;
            // 0x1796e0: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1796F8u;
            goto label_1796f8;
        }
    }
    ctx->pc = 0x1796E4u;
    // 0x1796e4: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1796e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1796e8: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x1796e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x1796ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1796ECu;
    {
        const bool branch_taken_0x1796ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1796F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796ECu;
        // 0x1796f0: 0x316bffff  andi        $t3, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1796ec) {
            ctx->pc = 0x179710u;
            goto label_179710;
        }
    }
    ctx->pc = 0x1796F4u;
    // 0x1796f4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1796f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1796f8:
    // 0x1796f8: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x1796f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x1796fc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1796fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179700: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x179700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x179704: 0x0  nop
    ctx->pc = 0x179704u;
    // NOP
    // 0x179708: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x179708u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x17970c: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x17970cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_179710:
    // 0x179710: 0x922f0009  lbu         $t7, 0x9($s1)
    ctx->pc = 0x179710u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x179714: 0x5e00004  bltz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x179714u;
    {
        const bool branch_taken_0x179714 = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x179718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179714u;
        // 0x179718: 0x316cffff  andi        $t4, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179714) {
            ctx->pc = 0x179728u;
            goto label_179728;
        }
    }
    ctx->pc = 0x17971Cu;
    // 0x17971c: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x17971cu;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179720: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179720u;
    {
        const bool branch_taken_0x179720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179720u;
        // 0x179724: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179720) {
            ctx->pc = 0x179744u;
            goto label_179744;
        }
    }
    ctx->pc = 0x179728u;
label_179728:
    // 0x179728: 0xf5842  srl         $t3, $t7, 1
    ctx->pc = 0x179728u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
    // 0x17972c: 0x31ea0001  andi        $t2, $t7, 0x1
    ctx->pc = 0x17972cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x179730: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x179730u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x179734: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x179734u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179738: 0x0  nop
    ctx->pc = 0x179738u;
    // NOP
    // 0x17973c: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x17973cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x179740: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x179740u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_179744:
    // 0x179744: 0x5e20005  bltzl       $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x179744u;
    {
        const bool branch_taken_0x179744 = (GPR_S32(ctx, 15) < 0);
        if (branch_taken_0x179744) {
            ctx->pc = 0x179748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179744u;
            // 0x179748: 0xf5842  srl         $t3, $t7, 1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17975Cu;
            goto label_17975c;
        }
    }
    ctx->pc = 0x17974Cu;
    // 0x17974c: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x17974cu;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179750: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179750u;
    {
        const bool branch_taken_0x179750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179750u;
        // 0x179754: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179750) {
            ctx->pc = 0x179774u;
            goto label_179774;
        }
    }
    ctx->pc = 0x179758u;
    // 0x179758: 0xf5842  srl         $t3, $t7, 1
    ctx->pc = 0x179758u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
label_17975c:
    // 0x17975c: 0x31ea0001  andi        $t2, $t7, 0x1
    ctx->pc = 0x17975cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x179760: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x179760u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x179764: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x179764u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179768: 0x0  nop
    ctx->pc = 0x179768u;
    // NOP
    // 0x17976c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17976cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x179770: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x179770u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_179774:
    // 0x179774: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x179774u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x179778: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x179778u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
    // 0x17977c: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x17977cu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x179780: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x179780u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179784: 0x0  nop
    ctx->pc = 0x179784u;
    // NOP
    // 0x179788: 0x46051036  c.le.s      $f2, $f5
    ctx->pc = 0x179788u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17978c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x17978Cu;
    {
        const bool branch_taken_0x17978c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17978c) {
            ctx->pc = 0x179790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17978Cu;
            // 0x179790: 0x46022881  sub.s       $f2, $f5, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1797A8u;
            goto label_1797a8;
        }
    }
    ctx->pc = 0x179794u;
    // 0x179794: 0x460028a4  .word       0x460028A4                   # cvt.w.s     $f2, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179798: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x179798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x17979c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17979Cu;
    {
        const bool branch_taken_0x17979c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1797A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17979Cu;
        // 0x1797a0: 0x316bffff  andi        $t3, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17979c) {
            ctx->pc = 0x1797C0u;
            goto label_1797c0;
        }
    }
    ctx->pc = 0x1797A4u;
    // 0x1797a4: 0x46022881  sub.s       $f2, $f5, $f2
    ctx->pc = 0x1797a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_1797a8:
    // 0x1797a8: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x1797a8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x1797ac: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1797acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1797b0: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x1797b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x1797b4: 0x0  nop
    ctx->pc = 0x1797b4u;
    // NOP
    // 0x1797b8: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x1797b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x1797bc: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x1797bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_1797c0:
    // 0x1797c0: 0x5c00004  bltz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1797C0u;
    {
        const bool branch_taken_0x1797c0 = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x1797C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1797C0u;
        // 0x1797c4: 0x316bffff  andi        $t3, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1797c0) {
            ctx->pc = 0x1797D4u;
            goto label_1797d4;
        }
    }
    ctx->pc = 0x1797C8u;
    // 0x1797c8: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x1797c8u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1797cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1797CCu;
    {
        const bool branch_taken_0x1797cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1797D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1797CCu;
        // 0x1797d0: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1797cc) {
            ctx->pc = 0x1797F0u;
            goto label_1797f0;
        }
    }
    ctx->pc = 0x1797D4u;
label_1797d4:
    // 0x1797d4: 0xe7842  srl         $t7, $t6, 1
    ctx->pc = 0x1797d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
    // 0x1797d8: 0x31ca0001  andi        $t2, $t6, 0x1
    ctx->pc = 0x1797d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x1797dc: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x1797dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x1797e0: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x1797e0u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1797e4: 0x0  nop
    ctx->pc = 0x1797e4u;
    // NOP
    // 0x1797e8: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x1797e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1797ec: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1797ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1797f0:
    // 0x1797f0: 0x5c20005  bltzl       $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1797F0u;
    {
        const bool branch_taken_0x1797f0 = (GPR_S32(ctx, 14) < 0);
        if (branch_taken_0x1797f0) {
            ctx->pc = 0x1797F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1797F0u;
            // 0x1797f4: 0xe7842  srl         $t7, $t6, 1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179808u;
            goto label_179808;
        }
    }
    ctx->pc = 0x1797F8u;
    // 0x1797f8: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x1797f8u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1797fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1797FCu;
    {
        const bool branch_taken_0x1797fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1797FCu;
        // 0x179800: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1797fc) {
            ctx->pc = 0x179820u;
            goto label_179820;
        }
    }
    ctx->pc = 0x179804u;
    // 0x179804: 0xe7842  srl         $t7, $t6, 1
    ctx->pc = 0x179804u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
label_179808:
    // 0x179808: 0x31ca0001  andi        $t2, $t6, 0x1
    ctx->pc = 0x179808u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x17980c: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x17980cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x179810: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x179810u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179814: 0x0  nop
    ctx->pc = 0x179814u;
    // NOP
    // 0x179818: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17981c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x17981cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_179820:
    // 0x179820: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x179820u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x179824: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x179824u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
    // 0x179828: 0x4601191c  madd.s      $f4, $f3, $f1
    ctx->pc = 0x179828u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x17982c: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x17982cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179830: 0x0  nop
    ctx->pc = 0x179830u;
    // NOP
    // 0x179834: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x179834u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179838: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x179838u;
    {
        const bool branch_taken_0x179838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179838) {
            ctx->pc = 0x17983Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179838u;
            // 0x17983c: 0x46022081  sub.s       $f2, $f4, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179854u;
            goto label_179854;
        }
    }
    ctx->pc = 0x179840u;
    // 0x179840: 0x460020a4  .word       0x460020A4                   # cvt.w.s     $f2, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179840u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179844: 0x440e1000  mfc1        $t6, $f2
    ctx->pc = 0x179844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x179848: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179848u;
    {
        const bool branch_taken_0x179848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179848u;
        // 0x17984c: 0x31ceffff  andi        $t6, $t6, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179848) {
            ctx->pc = 0x17986Cu;
            goto label_17986c;
        }
    }
    ctx->pc = 0x179850u;
    // 0x179850: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x179850u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_179854:
    // 0x179854: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x179854u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x179858: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179858u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x17985c: 0x440e1000  mfc1        $t6, $f2
    ctx->pc = 0x17985cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x179860: 0x0  nop
    ctx->pc = 0x179860u;
    // NOP
    // 0x179864: 0x1ca7025  or          $t6, $t6, $t2
    ctx->pc = 0x179864u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 10));
    // 0x179868: 0x31ceffff  andi        $t6, $t6, 0xFFFF
    ctx->pc = 0x179868u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
label_17986c:
    // 0x17986c: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x17986Cu;
    {
        const bool branch_taken_0x17986c = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x179870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17986Cu;
        // 0x179870: 0x31caffff  andi        $t2, $t6, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17986c) {
            ctx->pc = 0x179880u;
            goto label_179880;
        }
    }
    ctx->pc = 0x179874u;
    // 0x179874: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x179874u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179878: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179878u;
    {
        const bool branch_taken_0x179878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179878u;
        // 0x17987c: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179878) {
            ctx->pc = 0x17989Cu;
            goto label_17989c;
        }
    }
    ctx->pc = 0x179880u;
label_179880:
    // 0x179880: 0xd7042  srl         $t6, $t5, 1
    ctx->pc = 0x179880u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x179884: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x179884u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x179888: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x179888u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x17988c: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x17988cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179890: 0x0  nop
    ctx->pc = 0x179890u;
    // NOP
    // 0x179894: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x179894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x179898: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x179898u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_17989c:
    // 0x17989c: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17989Cu;
    {
        const bool branch_taken_0x17989c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17989c) {
            ctx->pc = 0x1798A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17989Cu;
            // 0x1798a0: 0x26842  srl         $t5, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1798B4u;
            goto label_1798b4;
        }
    }
    ctx->pc = 0x1798A4u;
    // 0x1798a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1798a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1798a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1798A8u;
    {
        const bool branch_taken_0x1798a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1798ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1798A8u;
        // 0x1798ac: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1798a8) {
            ctx->pc = 0x1798CCu;
            goto label_1798cc;
        }
    }
    ctx->pc = 0x1798B0u;
    // 0x1798b0: 0x26842  srl         $t5, $v0, 1
    ctx->pc = 0x1798b0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1798b4:
    // 0x1798b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1798b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1798b8: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x1798b8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x1798bc: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x1798bcu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1798c0: 0x0  nop
    ctx->pc = 0x1798c0u;
    // NOP
    // 0x1798c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1798c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1798c8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1798c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1798cc:
    // 0x1798cc: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x1798ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1798d0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1798d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1798d4: 0x4600185c  madd.s      $f1, $f3, $f0
    ctx->pc = 0x1798d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1798d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1798d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1798dc: 0x0  nop
    ctx->pc = 0x1798dcu;
    // NOP
    // 0x1798e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1798e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1798e4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1798E4u;
    {
        const bool branch_taken_0x1798e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1798e4) {
            ctx->pc = 0x1798E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1798E4u;
            // 0x1798e8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179900u;
            goto label_179900;
        }
    }
    ctx->pc = 0x1798ECu;
    // 0x1798ec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1798ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1798f0: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x1798f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x1798f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1798F4u;
    {
        const bool branch_taken_0x1798f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1798F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1798F4u;
        // 0x1798f8: 0x31adffff  andi        $t5, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1798f4) {
            ctx->pc = 0x179918u;
            goto label_179918;
        }
    }
    ctx->pc = 0x1798FCu;
    // 0x1798fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1798fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_179900:
    // 0x179900: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x179900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x179904: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179904u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x179908: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x179908u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x17990c: 0x0  nop
    ctx->pc = 0x17990cu;
    // NOP
    // 0x179910: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x179910u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x179914: 0x31adffff  andi        $t5, $t5, 0xFFFF
    ctx->pc = 0x179914u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
label_179918:
    // 0x179918: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x179918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x17991c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17991cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179920: 0x0  nop
    ctx->pc = 0x179920u;
    // NOP
    // 0x179924: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x179924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179928: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x179928u;
    {
        const bool branch_taken_0x179928 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179928u;
        // 0x17992c: 0x31afffff  andi        $t7, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179928) {
            ctx->pc = 0x179940u;
            goto label_179940;
        }
    }
    ctx->pc = 0x179930u;
    // 0x179930: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179930u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x179934: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x179934u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x179938: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179938u;
    {
        const bool branch_taken_0x179938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179938u;
        // 0x17993c: 0x31adffff  andi        $t5, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179938) {
            ctx->pc = 0x17995Cu;
            goto label_17995c;
        }
    }
    ctx->pc = 0x179940u;
label_179940:
    // 0x179940: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x179940u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x179944: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x179944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x179948: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179948u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17994c: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x17994cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x179950: 0x0  nop
    ctx->pc = 0x179950u;
    // NOP
    // 0x179954: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x179954u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x179958: 0x31adffff  andi        $t5, $t5, 0xFFFF
    ctx->pc = 0x179958u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
label_17995c:
    // 0x17995c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x17995cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x179960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179964: 0x0  nop
    ctx->pc = 0x179964u;
    // NOP
    // 0x179968: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x179968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17996c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17996Cu;
    {
        const bool branch_taken_0x17996c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x179970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17996Cu;
        // 0x179970: 0x31aeffff  andi        $t6, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17996c) {
            ctx->pc = 0x179984u;
            goto label_179984;
        }
    }
    ctx->pc = 0x179974u;
    // 0x179974: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179974u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x179978: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x179978u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x17997c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17997Cu;
    {
        const bool branch_taken_0x17997c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17997Cu;
        // 0x179980: 0x31adffff  andi        $t5, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17997c) {
            ctx->pc = 0x1799A0u;
            goto label_1799a0;
        }
    }
    ctx->pc = 0x179984u;
label_179984:
    // 0x179984: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x179984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x179988: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x179988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x17998c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17998cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x179990: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x179990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x179994: 0x0  nop
    ctx->pc = 0x179994u;
    // NOP
    // 0x179998: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x179998u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x17999c: 0x31adffff  andi        $t5, $t5, 0xFFFF
    ctx->pc = 0x17999cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
label_1799a0:
    // 0x1799a0: 0x31c200ff  andi        $v0, $t6, 0xFF
    ctx->pc = 0x1799a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x1799a4: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x1799a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x1799a8: 0x27200  sll         $t6, $v0, 8
    ctx->pc = 0x1799a8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1799ac: 0x31ad00ff  andi        $t5, $t5, 0xFF
    ctx->pc = 0x1799acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x1799b0: 0x31e200ff  andi        $v0, $t7, 0xFF
    ctx->pc = 0x1799b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x1799b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1799b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1799b8: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1799b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1799bc: 0x316200ff  andi        $v0, $t3, 0xFF
    ctx->pc = 0x1799bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x1799c0: 0x1c55825  or          $t3, $t6, $a1
    ctx->pc = 0x1799c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) | GPR_U64(ctx, 5));
    // 0x1799c4: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x1799c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1799c8: 0x1ab5825  or          $t3, $t5, $t3
    ctx->pc = 0x1799c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) | GPR_U64(ctx, 11));
    // 0x1799cc: 0x318200ff  andi        $v0, $t4, 0xFF
    ctx->pc = 0x1799ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x1799d0: 0xafab00bc  sw          $t3, 0xBC($sp)
    ctx->pc = 0x1799d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 11));
    // 0x1799d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1799d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1799d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1799d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1799dc: 0x314200ff  andi        $v0, $t2, 0xFF
    ctx->pc = 0x1799dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x1799e0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1799e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1799e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1799e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1799e8: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x1799E8u;
    {
        const bool branch_taken_0x1799e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1799ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1799E8u;
        // 0x1799ec: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1799e8) {
            ctx->pc = 0x17A124u;
            goto label_17a124;
        }
    }
    ctx->pc = 0x1799F0u;
    // 0x1799f0: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x1799f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
label_1799f4:
    // 0x1799f4: 0x100001cb  b           . + 4 + (0x1CB << 2)
    ctx->pc = 0x1799F4u;
    {
        const bool branch_taken_0x1799f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1799F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1799F4u;
        // 0x1799f8: 0xafa500cc  sw          $a1, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1799f4) {
            ctx->pc = 0x17A124u;
            goto label_17a124;
        }
    }
    ctx->pc = 0x1799FCu;
    // 0x1799fc: 0x922d0008  lbu         $t5, 0x8($s1)
    ctx->pc = 0x1799fcu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_179a00:
    // 0x179a00: 0x5a20005  bltzl       $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x179A00u;
    {
        const bool branch_taken_0x179a00 = (GPR_S32(ctx, 13) < 0);
        if (branch_taken_0x179a00) {
            ctx->pc = 0x179A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179A00u;
            // 0x179a04: 0xd5842  srl         $t3, $t5, 1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179A18u;
            goto label_179a18;
        }
    }
    ctx->pc = 0x179A08u;
    // 0x179a08: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x179a08u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179a0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179A0Cu;
    {
        const bool branch_taken_0x179a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A0Cu;
        // 0x179a10: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a0c) {
            ctx->pc = 0x179A30u;
            goto label_179a30;
        }
    }
    ctx->pc = 0x179A14u;
    // 0x179a14: 0xd5842  srl         $t3, $t5, 1
    ctx->pc = 0x179a14u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
label_179a18:
    // 0x179a18: 0x31aa0001  andi        $t2, $t5, 0x1
    ctx->pc = 0x179a18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x179a1c: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x179a1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x179a20: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x179a20u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179a24: 0x0  nop
    ctx->pc = 0x179a24u;
    // NOP
    // 0x179a28: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x179a28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x179a2c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x179a2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_179a30:
    // 0x179a30: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179A30u;
    {
        const bool branch_taken_0x179a30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x179a30) {
            ctx->pc = 0x179A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179A30u;
            // 0x179a34: 0x25842  srl         $t3, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179A48u;
            goto label_179a48;
        }
    }
    ctx->pc = 0x179A38u;
    // 0x179a38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x179a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179a3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179A3Cu;
    {
        const bool branch_taken_0x179a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A3Cu;
        // 0x179a40: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a3c) {
            ctx->pc = 0x179A60u;
            goto label_179a60;
        }
    }
    ctx->pc = 0x179A44u;
    // 0x179a44: 0x25842  srl         $t3, $v0, 1
    ctx->pc = 0x179a44u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_179a48:
    // 0x179a48: 0x304a0001  andi        $t2, $v0, 0x1
    ctx->pc = 0x179a48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x179a4c: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x179a4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x179a50: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x179a50u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179a54: 0x0  nop
    ctx->pc = 0x179a54u;
    // NOP
    // 0x179a58: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179a58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x179a5c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x179a5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_179a60:
    // 0x179a60: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x179a60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x179a64: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x179a64u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
    // 0x179a68: 0x460118dc  madd.s      $f3, $f3, $f1
    ctx->pc = 0x179a68u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x179a6c: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x179a6cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179a70: 0x0  nop
    ctx->pc = 0x179a70u;
    // NOP
    // 0x179a74: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x179a74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179a78: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x179A78u;
    {
        const bool branch_taken_0x179a78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179a78) {
            ctx->pc = 0x179A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179A78u;
            // 0x179a7c: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179A94u;
            goto label_179a94;
        }
    }
    ctx->pc = 0x179A80u;
    // 0x179a80: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179a80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179a84: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x179a84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x179a88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179A88u;
    {
        const bool branch_taken_0x179a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A88u;
        // 0x179a8c: 0x316bffff  andi        $t3, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a88) {
            ctx->pc = 0x179AACu;
            goto label_179aac;
        }
    }
    ctx->pc = 0x179A90u;
    // 0x179a90: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x179a90u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_179a94:
    // 0x179a94: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x179a94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x179a98: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179a98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179a9c: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x179a9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x179aa0: 0x0  nop
    ctx->pc = 0x179aa0u;
    // NOP
    // 0x179aa4: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x179aa4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x179aa8: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x179aa8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_179aac:
    // 0x179aac: 0x922f0009  lbu         $t7, 0x9($s1)
    ctx->pc = 0x179aacu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x179ab0: 0x5e00004  bltz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x179AB0u;
    {
        const bool branch_taken_0x179ab0 = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x179AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AB0u;
        // 0x179ab4: 0x316cffff  andi        $t4, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ab0) {
            ctx->pc = 0x179AC4u;
            goto label_179ac4;
        }
    }
    ctx->pc = 0x179AB8u;
    // 0x179ab8: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x179ab8u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179abc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179ABCu;
    {
        const bool branch_taken_0x179abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179ABCu;
        // 0x179ac0: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179abc) {
            ctx->pc = 0x179AE0u;
            goto label_179ae0;
        }
    }
    ctx->pc = 0x179AC4u;
label_179ac4:
    // 0x179ac4: 0xf5842  srl         $t3, $t7, 1
    ctx->pc = 0x179ac4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
    // 0x179ac8: 0x31ea0001  andi        $t2, $t7, 0x1
    ctx->pc = 0x179ac8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x179acc: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x179accu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x179ad0: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x179ad0u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179ad4: 0x0  nop
    ctx->pc = 0x179ad4u;
    // NOP
    // 0x179ad8: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x179ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x179adc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x179adcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_179ae0:
    // 0x179ae0: 0x5e20005  bltzl       $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x179AE0u;
    {
        const bool branch_taken_0x179ae0 = (GPR_S32(ctx, 15) < 0);
        if (branch_taken_0x179ae0) {
            ctx->pc = 0x179AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179AE0u;
            // 0x179ae4: 0xf5842  srl         $t3, $t7, 1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179AF8u;
            goto label_179af8;
        }
    }
    ctx->pc = 0x179AE8u;
    // 0x179ae8: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x179ae8u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179aec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179AECu;
    {
        const bool branch_taken_0x179aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AECu;
        // 0x179af0: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179aec) {
            ctx->pc = 0x179B10u;
            goto label_179b10;
        }
    }
    ctx->pc = 0x179AF4u;
    // 0x179af4: 0xf5842  srl         $t3, $t7, 1
    ctx->pc = 0x179af4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
label_179af8:
    // 0x179af8: 0x31ea0001  andi        $t2, $t7, 0x1
    ctx->pc = 0x179af8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x179afc: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x179afcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x179b00: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x179b00u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179b04: 0x0  nop
    ctx->pc = 0x179b04u;
    // NOP
    // 0x179b08: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179b08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x179b0c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x179b0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_179b10:
    // 0x179b10: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x179b10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x179b14: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x179b14u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
    // 0x179b18: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x179b18u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x179b1c: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x179b1cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179b20: 0x0  nop
    ctx->pc = 0x179b20u;
    // NOP
    // 0x179b24: 0x46051036  c.le.s      $f2, $f5
    ctx->pc = 0x179b24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179b28: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x179B28u;
    {
        const bool branch_taken_0x179b28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179b28) {
            ctx->pc = 0x179B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179B28u;
            // 0x179b2c: 0x46022881  sub.s       $f2, $f5, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179B44u;
            goto label_179b44;
        }
    }
    ctx->pc = 0x179B30u;
    // 0x179b30: 0x460028a4  .word       0x460028A4                   # cvt.w.s     $f2, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179b30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179b34: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x179b34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x179b38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179B38u;
    {
        const bool branch_taken_0x179b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B38u;
        // 0x179b3c: 0x316bffff  andi        $t3, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b38) {
            ctx->pc = 0x179B5Cu;
            goto label_179b5c;
        }
    }
    ctx->pc = 0x179B40u;
    // 0x179b40: 0x46022881  sub.s       $f2, $f5, $f2
    ctx->pc = 0x179b40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_179b44:
    // 0x179b44: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x179b44u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x179b48: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179b48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179b4c: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x179b4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x179b50: 0x0  nop
    ctx->pc = 0x179b50u;
    // NOP
    // 0x179b54: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x179b54u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x179b58: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x179b58u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_179b5c:
    // 0x179b5c: 0x5c00004  bltz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x179B5Cu;
    {
        const bool branch_taken_0x179b5c = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x179B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B5Cu;
        // 0x179b60: 0x316bffff  andi        $t3, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b5c) {
            ctx->pc = 0x179B70u;
            goto label_179b70;
        }
    }
    ctx->pc = 0x179B64u;
    // 0x179b64: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x179b64u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179b68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179B68u;
    {
        const bool branch_taken_0x179b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B68u;
        // 0x179b6c: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b68) {
            ctx->pc = 0x179B8Cu;
            goto label_179b8c;
        }
    }
    ctx->pc = 0x179B70u;
label_179b70:
    // 0x179b70: 0xe7842  srl         $t7, $t6, 1
    ctx->pc = 0x179b70u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
    // 0x179b74: 0x31ca0001  andi        $t2, $t6, 0x1
    ctx->pc = 0x179b74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x179b78: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x179b78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x179b7c: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x179b7cu;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179b80: 0x0  nop
    ctx->pc = 0x179b80u;
    // NOP
    // 0x179b84: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x179b84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x179b88: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x179b88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_179b8c:
    // 0x179b8c: 0x5c20005  bltzl       $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x179B8Cu;
    {
        const bool branch_taken_0x179b8c = (GPR_S32(ctx, 14) < 0);
        if (branch_taken_0x179b8c) {
            ctx->pc = 0x179B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179B8Cu;
            // 0x179b90: 0xe7842  srl         $t7, $t6, 1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179BA4u;
            goto label_179ba4;
        }
    }
    ctx->pc = 0x179B94u;
    // 0x179b94: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x179b94u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179b98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179B98u;
    {
        const bool branch_taken_0x179b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B98u;
        // 0x179b9c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b98) {
            ctx->pc = 0x179BBCu;
            goto label_179bbc;
        }
    }
    ctx->pc = 0x179BA0u;
    // 0x179ba0: 0xe7842  srl         $t7, $t6, 1
    ctx->pc = 0x179ba0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
label_179ba4:
    // 0x179ba4: 0x31ca0001  andi        $t2, $t6, 0x1
    ctx->pc = 0x179ba4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x179ba8: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x179ba8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x179bac: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x179bacu;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179bb0: 0x0  nop
    ctx->pc = 0x179bb0u;
    // NOP
    // 0x179bb4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179bb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x179bb8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x179bb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_179bbc:
    // 0x179bbc: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x179bbcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x179bc0: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x179bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
    // 0x179bc4: 0x4601191c  madd.s      $f4, $f3, $f1
    ctx->pc = 0x179bc4u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x179bc8: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x179bc8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179bcc: 0x0  nop
    ctx->pc = 0x179bccu;
    // NOP
    // 0x179bd0: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x179bd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179bd4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x179BD4u;
    {
        const bool branch_taken_0x179bd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179bd4) {
            ctx->pc = 0x179BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179BD4u;
            // 0x179bd8: 0x46022081  sub.s       $f2, $f4, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179BF0u;
            goto label_179bf0;
        }
    }
    ctx->pc = 0x179BDCu;
    // 0x179bdc: 0x460020a4  .word       0x460020A4                   # cvt.w.s     $f2, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179bdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179be0: 0x440e1000  mfc1        $t6, $f2
    ctx->pc = 0x179be0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x179be4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179BE4u;
    {
        const bool branch_taken_0x179be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BE4u;
        // 0x179be8: 0x31ceffff  andi        $t6, $t6, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179be4) {
            ctx->pc = 0x179C08u;
            goto label_179c08;
        }
    }
    ctx->pc = 0x179BECu;
    // 0x179bec: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x179becu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_179bf0:
    // 0x179bf0: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x179bf0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x179bf4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179bf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179bf8: 0x440e1000  mfc1        $t6, $f2
    ctx->pc = 0x179bf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x179bfc: 0x0  nop
    ctx->pc = 0x179bfcu;
    // NOP
    // 0x179c00: 0x1ca7025  or          $t6, $t6, $t2
    ctx->pc = 0x179c00u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 10));
    // 0x179c04: 0x31ceffff  andi        $t6, $t6, 0xFFFF
    ctx->pc = 0x179c04u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
label_179c08:
    // 0x179c08: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x179C08u;
    {
        const bool branch_taken_0x179c08 = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x179C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C08u;
        // 0x179c0c: 0x31caffff  andi        $t2, $t6, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c08) {
            ctx->pc = 0x179C1Cu;
            goto label_179c1c;
        }
    }
    ctx->pc = 0x179C10u;
    // 0x179c10: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x179c10u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179c14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179C14u;
    {
        const bool branch_taken_0x179c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C14u;
        // 0x179c18: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c14) {
            ctx->pc = 0x179C38u;
            goto label_179c38;
        }
    }
    ctx->pc = 0x179C1Cu;
label_179c1c:
    // 0x179c1c: 0xd7042  srl         $t6, $t5, 1
    ctx->pc = 0x179c1cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x179c20: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x179c20u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x179c24: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x179c24u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x179c28: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x179c28u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179c2c: 0x0  nop
    ctx->pc = 0x179c2cu;
    // NOP
    // 0x179c30: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x179c30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x179c34: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x179c34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_179c38:
    // 0x179c38: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179C38u;
    {
        const bool branch_taken_0x179c38 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x179c38) {
            ctx->pc = 0x179C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179C38u;
            // 0x179c3c: 0x26842  srl         $t5, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179C50u;
            goto label_179c50;
        }
    }
    ctx->pc = 0x179C40u;
    // 0x179c40: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x179c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179c44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179C44u;
    {
        const bool branch_taken_0x179c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C44u;
        // 0x179c48: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c44) {
            ctx->pc = 0x179C68u;
            goto label_179c68;
        }
    }
    ctx->pc = 0x179C4Cu;
    // 0x179c4c: 0x26842  srl         $t5, $v0, 1
    ctx->pc = 0x179c4cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_179c50:
    // 0x179c50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x179c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x179c54: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x179c54u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x179c58: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x179c58u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179c5c: 0x0  nop
    ctx->pc = 0x179c5cu;
    // NOP
    // 0x179c60: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x179c64: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x179c64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_179c68:
    // 0x179c68: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x179c68u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x179c6c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x179c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x179c70: 0x4600185c  madd.s      $f1, $f3, $f0
    ctx->pc = 0x179c70u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x179c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179c78: 0x0  nop
    ctx->pc = 0x179c78u;
    // NOP
    // 0x179c7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x179c7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179c80: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x179C80u;
    {
        const bool branch_taken_0x179c80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179c80) {
            ctx->pc = 0x179C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179C80u;
            // 0x179c84: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179C9Cu;
            goto label_179c9c;
        }
    }
    ctx->pc = 0x179C88u;
    // 0x179c88: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179c88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x179c8c: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x179c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x179c90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179C90u;
    {
        const bool branch_taken_0x179c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C90u;
        // 0x179c94: 0x31adffff  andi        $t5, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c90) {
            ctx->pc = 0x179CB4u;
            goto label_179cb4;
        }
    }
    ctx->pc = 0x179C98u;
    // 0x179c98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x179c98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_179c9c:
    // 0x179c9c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x179c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x179ca0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179ca0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x179ca4: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x179ca4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x179ca8: 0x0  nop
    ctx->pc = 0x179ca8u;
    // NOP
    // 0x179cac: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x179cacu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x179cb0: 0x31adffff  andi        $t5, $t5, 0xFFFF
    ctx->pc = 0x179cb0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
label_179cb4:
    // 0x179cb4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x179cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x179cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179cbc: 0x0  nop
    ctx->pc = 0x179cbcu;
    // NOP
    // 0x179cc0: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x179cc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179cc4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x179CC4u;
    {
        const bool branch_taken_0x179cc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x179CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CC4u;
        // 0x179cc8: 0x31afffff  andi        $t7, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cc4) {
            ctx->pc = 0x179CDCu;
            goto label_179cdc;
        }
    }
    ctx->pc = 0x179CCCu;
    // 0x179ccc: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179cccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x179cd0: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x179cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x179cd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179CD4u;
    {
        const bool branch_taken_0x179cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CD4u;
        // 0x179cd8: 0x31adffff  andi        $t5, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cd4) {
            ctx->pc = 0x179CF8u;
            goto label_179cf8;
        }
    }
    ctx->pc = 0x179CDCu;
label_179cdc:
    // 0x179cdc: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x179cdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x179ce0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x179ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x179ce4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179ce4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x179ce8: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x179ce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x179cec: 0x0  nop
    ctx->pc = 0x179cecu;
    // NOP
    // 0x179cf0: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x179cf0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x179cf4: 0x31adffff  andi        $t5, $t5, 0xFFFF
    ctx->pc = 0x179cf4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
label_179cf8:
    // 0x179cf8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x179cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x179cfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179d00: 0x0  nop
    ctx->pc = 0x179d00u;
    // NOP
    // 0x179d04: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x179d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179d08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x179D08u;
    {
        const bool branch_taken_0x179d08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x179D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D08u;
        // 0x179d0c: 0x31aeffff  andi        $t6, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d08) {
            ctx->pc = 0x179D20u;
            goto label_179d20;
        }
    }
    ctx->pc = 0x179D10u;
    // 0x179d10: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179d10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x179d14: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x179d14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x179d18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179D18u;
    {
        const bool branch_taken_0x179d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D18u;
        // 0x179d1c: 0x31adffff  andi        $t5, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d18) {
            ctx->pc = 0x179D3Cu;
            goto label_179d3c;
        }
    }
    ctx->pc = 0x179D20u;
label_179d20:
    // 0x179d20: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x179d20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x179d24: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x179d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x179d28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179d28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x179d2c: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x179d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x179d30: 0x0  nop
    ctx->pc = 0x179d30u;
    // NOP
    // 0x179d34: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x179d34u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x179d38: 0x31adffff  andi        $t5, $t5, 0xFFFF
    ctx->pc = 0x179d38u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
label_179d3c:
    // 0x179d3c: 0x31c200ff  andi        $v0, $t6, 0xFF
    ctx->pc = 0x179d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x179d40: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x179d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
    // 0x179d44: 0x27200  sll         $t6, $v0, 8
    ctx->pc = 0x179d44u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x179d48: 0x31ad00ff  andi        $t5, $t5, 0xFF
    ctx->pc = 0x179d48u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x179d4c: 0x31e200ff  andi        $v0, $t7, 0xFF
    ctx->pc = 0x179d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x179d50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x179d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x179d54: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x179d54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x179d58: 0x316200ff  andi        $v0, $t3, 0xFF
    ctx->pc = 0x179d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x179d5c: 0x1c55825  or          $t3, $t6, $a1
    ctx->pc = 0x179d5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) | GPR_U64(ctx, 5));
    // 0x179d60: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x179d60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x179d64: 0x1ab5825  or          $t3, $t5, $t3
    ctx->pc = 0x179d64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) | GPR_U64(ctx, 11));
    // 0x179d68: 0x318200ff  andi        $v0, $t4, 0xFF
    ctx->pc = 0x179d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x179d6c: 0xafab00cc  sw          $t3, 0xCC($sp)
    ctx->pc = 0x179d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 11));
    // 0x179d70: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x179d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x179d74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x179d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x179d78: 0x314200ff  andi        $v0, $t2, 0xFF
    ctx->pc = 0x179d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x179d7c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x179d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x179d80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179d84: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x179D84u;
    {
        const bool branch_taken_0x179d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D84u;
        // 0x179d88: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d84) {
            ctx->pc = 0x17A124u;
            goto label_17a124;
        }
    }
    ctx->pc = 0x179D8Cu;
    // 0x179d8c: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x179d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
label_179d90:
    // 0x179d90: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x179D90u;
    {
        const bool branch_taken_0x179d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D90u;
        // 0x179d94: 0xafa500dc  sw          $a1, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d90) {
            ctx->pc = 0x17A124u;
            goto label_17a124;
        }
    }
    ctx->pc = 0x179D98u;
    // 0x179d98: 0x922a0008  lbu         $t2, 0x8($s1)
    ctx->pc = 0x179d98u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_179d9c:
    // 0x179d9c: 0x5420005  bltzl       $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x179D9Cu;
    {
        const bool branch_taken_0x179d9c = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x179d9c) {
            ctx->pc = 0x179DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179D9Cu;
            // 0x179da0: 0xa6042  srl         $t4, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179DB4u;
            goto label_179db4;
        }
    }
    ctx->pc = 0x179DA4u;
    // 0x179da4: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x179da4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179da8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179DA8u;
    {
        const bool branch_taken_0x179da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DA8u;
        // 0x179dac: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179da8) {
            ctx->pc = 0x179DCCu;
            goto label_179dcc;
        }
    }
    ctx->pc = 0x179DB0u;
    // 0x179db0: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x179db0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
label_179db4:
    // 0x179db4: 0x314b0001  andi        $t3, $t2, 0x1
    ctx->pc = 0x179db4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x179db8: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x179db8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x179dbc: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x179dbcu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179dc0: 0x0  nop
    ctx->pc = 0x179dc0u;
    // NOP
    // 0x179dc4: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x179dc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x179dc8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x179dc8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_179dcc:
    // 0x179dcc: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179DCCu;
    {
        const bool branch_taken_0x179dcc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x179dcc) {
            ctx->pc = 0x179DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179DCCu;
            // 0x179dd0: 0x26042  srl         $t4, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179DE4u;
            goto label_179de4;
        }
    }
    ctx->pc = 0x179DD4u;
    // 0x179dd4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x179dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179dd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179DD8u;
    {
        const bool branch_taken_0x179dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DD8u;
        // 0x179ddc: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179dd8) {
            ctx->pc = 0x179DFCu;
            goto label_179dfc;
        }
    }
    ctx->pc = 0x179DE0u;
    // 0x179de0: 0x26042  srl         $t4, $v0, 1
    ctx->pc = 0x179de0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_179de4:
    // 0x179de4: 0x304b0001  andi        $t3, $v0, 0x1
    ctx->pc = 0x179de4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x179de8: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x179de8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x179dec: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x179decu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179df0: 0x0  nop
    ctx->pc = 0x179df0u;
    // NOP
    // 0x179df4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x179df8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x179df8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_179dfc:
    // 0x179dfc: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x179dfcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x179e00: 0x3c0b4f00  lui         $t3, 0x4F00
    ctx->pc = 0x179e00u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)20224 << 16));
    // 0x179e04: 0x460118dc  madd.s      $f3, $f3, $f1
    ctx->pc = 0x179e04u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x179e08: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x179e08u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179e0c: 0x0  nop
    ctx->pc = 0x179e0cu;
    // NOP
    // 0x179e10: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x179e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179e14: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x179E14u;
    {
        const bool branch_taken_0x179e14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179e14) {
            ctx->pc = 0x179E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179E14u;
            // 0x179e18: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179E30u;
            goto label_179e30;
        }
    }
    ctx->pc = 0x179E1Cu;
    // 0x179e1c: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179e1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179e20: 0x440c1000  mfc1        $t4, $f2
    ctx->pc = 0x179e20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x179e24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179E24u;
    {
        const bool branch_taken_0x179e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E24u;
        // 0x179e28: 0x318cffff  andi        $t4, $t4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e24) {
            ctx->pc = 0x179E48u;
            goto label_179e48;
        }
    }
    ctx->pc = 0x179E2Cu;
    // 0x179e2c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x179e2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_179e30:
    // 0x179e30: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x179e30u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x179e34: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179e34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179e38: 0x440c1000  mfc1        $t4, $f2
    ctx->pc = 0x179e38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x179e3c: 0x0  nop
    ctx->pc = 0x179e3cu;
    // NOP
    // 0x179e40: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x179e40u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x179e44: 0x318cffff  andi        $t4, $t4, 0xFFFF
    ctx->pc = 0x179e44u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
label_179e48:
    // 0x179e48: 0x922f0009  lbu         $t7, 0x9($s1)
    ctx->pc = 0x179e48u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x179e4c: 0x5e00004  bltz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x179E4Cu;
    {
        const bool branch_taken_0x179e4c = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x179E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E4Cu;
        // 0x179e50: 0x318dffff  andi        $t5, $t4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e4c) {
            ctx->pc = 0x179E60u;
            goto label_179e60;
        }
    }
    ctx->pc = 0x179E54u;
    // 0x179e54: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x179e54u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179e58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179E58u;
    {
        const bool branch_taken_0x179e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E58u;
        // 0x179e5c: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e58) {
            ctx->pc = 0x179E7Cu;
            goto label_179e7c;
        }
    }
    ctx->pc = 0x179E60u;
label_179e60:
    // 0x179e60: 0xf6042  srl         $t4, $t7, 1
    ctx->pc = 0x179e60u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
    // 0x179e64: 0x31eb0001  andi        $t3, $t7, 0x1
    ctx->pc = 0x179e64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x179e68: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x179e68u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x179e6c: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x179e6cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179e70: 0x0  nop
    ctx->pc = 0x179e70u;
    // NOP
    // 0x179e74: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x179e74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x179e78: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x179e78u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_179e7c:
    // 0x179e7c: 0x5e20005  bltzl       $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x179E7Cu;
    {
        const bool branch_taken_0x179e7c = (GPR_S32(ctx, 15) < 0);
        if (branch_taken_0x179e7c) {
            ctx->pc = 0x179E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179E7Cu;
            // 0x179e80: 0xf6042  srl         $t4, $t7, 1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179E94u;
            goto label_179e94;
        }
    }
    ctx->pc = 0x179E84u;
    // 0x179e84: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x179e84u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179e88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179E88u;
    {
        const bool branch_taken_0x179e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E88u;
        // 0x179e8c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e88) {
            ctx->pc = 0x179EACu;
            goto label_179eac;
        }
    }
    ctx->pc = 0x179E90u;
    // 0x179e90: 0xf6042  srl         $t4, $t7, 1
    ctx->pc = 0x179e90u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
label_179e94:
    // 0x179e94: 0x31eb0001  andi        $t3, $t7, 0x1
    ctx->pc = 0x179e94u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x179e98: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x179e98u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x179e9c: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x179e9cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179ea0: 0x0  nop
    ctx->pc = 0x179ea0u;
    // NOP
    // 0x179ea4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179ea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x179ea8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x179ea8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_179eac:
    // 0x179eac: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x179eacu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x179eb0: 0x3c0b4f00  lui         $t3, 0x4F00
    ctx->pc = 0x179eb0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)20224 << 16));
    // 0x179eb4: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x179eb4u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x179eb8: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x179eb8u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179ebc: 0x0  nop
    ctx->pc = 0x179ebcu;
    // NOP
    // 0x179ec0: 0x46051036  c.le.s      $f2, $f5
    ctx->pc = 0x179ec0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179ec4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x179EC4u;
    {
        const bool branch_taken_0x179ec4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179ec4) {
            ctx->pc = 0x179EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179EC4u;
            // 0x179ec8: 0x46022881  sub.s       $f2, $f5, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179EE0u;
            goto label_179ee0;
        }
    }
    ctx->pc = 0x179ECCu;
    // 0x179ecc: 0x460028a4  .word       0x460028A4                   # cvt.w.s     $f2, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179eccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179ed0: 0x440c1000  mfc1        $t4, $f2
    ctx->pc = 0x179ed0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x179ed4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179ED4u;
    {
        const bool branch_taken_0x179ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179ED4u;
        // 0x179ed8: 0x318cffff  andi        $t4, $t4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ed4) {
            ctx->pc = 0x179EF8u;
            goto label_179ef8;
        }
    }
    ctx->pc = 0x179EDCu;
    // 0x179edc: 0x46022881  sub.s       $f2, $f5, $f2
    ctx->pc = 0x179edcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_179ee0:
    // 0x179ee0: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x179ee0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x179ee4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179ee4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179ee8: 0x440c1000  mfc1        $t4, $f2
    ctx->pc = 0x179ee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x179eec: 0x0  nop
    ctx->pc = 0x179eecu;
    // NOP
    // 0x179ef0: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x179ef0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x179ef4: 0x318cffff  andi        $t4, $t4, 0xFFFF
    ctx->pc = 0x179ef4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
label_179ef8:
    // 0x179ef8: 0x5c00004  bltz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x179EF8u;
    {
        const bool branch_taken_0x179ef8 = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x179EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EF8u;
        // 0x179efc: 0x318cffff  andi        $t4, $t4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ef8) {
            ctx->pc = 0x179F0Cu;
            goto label_179f0c;
        }
    }
    ctx->pc = 0x179F00u;
    // 0x179f00: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x179f00u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179f04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179F04u;
    {
        const bool branch_taken_0x179f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F04u;
        // 0x179f08: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f04) {
            ctx->pc = 0x179F28u;
            goto label_179f28;
        }
    }
    ctx->pc = 0x179F0Cu;
label_179f0c:
    // 0x179f0c: 0xe7842  srl         $t7, $t6, 1
    ctx->pc = 0x179f0cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
    // 0x179f10: 0x31cb0001  andi        $t3, $t6, 0x1
    ctx->pc = 0x179f10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x179f14: 0x1eb7825  or          $t7, $t7, $t3
    ctx->pc = 0x179f14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x179f18: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x179f18u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179f1c: 0x0  nop
    ctx->pc = 0x179f1cu;
    // NOP
    // 0x179f20: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x179f20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x179f24: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x179f24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_179f28:
    // 0x179f28: 0x5c20005  bltzl       $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x179F28u;
    {
        const bool branch_taken_0x179f28 = (GPR_S32(ctx, 14) < 0);
        if (branch_taken_0x179f28) {
            ctx->pc = 0x179F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179F28u;
            // 0x179f2c: 0xe7842  srl         $t7, $t6, 1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179F40u;
            goto label_179f40;
        }
    }
    ctx->pc = 0x179F30u;
    // 0x179f30: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x179f30u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179f34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179F34u;
    {
        const bool branch_taken_0x179f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F34u;
        // 0x179f38: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f34) {
            ctx->pc = 0x179F58u;
            goto label_179f58;
        }
    }
    ctx->pc = 0x179F3Cu;
    // 0x179f3c: 0xe7842  srl         $t7, $t6, 1
    ctx->pc = 0x179f3cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
label_179f40:
    // 0x179f40: 0x31cb0001  andi        $t3, $t6, 0x1
    ctx->pc = 0x179f40u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x179f44: 0x1eb7825  or          $t7, $t7, $t3
    ctx->pc = 0x179f44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x179f48: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x179f48u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179f4c: 0x0  nop
    ctx->pc = 0x179f4cu;
    // NOP
    // 0x179f50: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x179f54: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x179f54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_179f58:
    // 0x179f58: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x179f58u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x179f5c: 0x3c0b4f00  lui         $t3, 0x4F00
    ctx->pc = 0x179f5cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)20224 << 16));
    // 0x179f60: 0x4601191c  madd.s      $f4, $f3, $f1
    ctx->pc = 0x179f60u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x179f64: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x179f64u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179f68: 0x0  nop
    ctx->pc = 0x179f68u;
    // NOP
    // 0x179f6c: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x179f6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179f70: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x179F70u;
    {
        const bool branch_taken_0x179f70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179f70) {
            ctx->pc = 0x179F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179F70u;
            // 0x179f74: 0x46022081  sub.s       $f2, $f4, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179F8Cu;
            goto label_179f8c;
        }
    }
    ctx->pc = 0x179F78u;
    // 0x179f78: 0x460020a4  .word       0x460020A4                   # cvt.w.s     $f2, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179f78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179f7c: 0x440e1000  mfc1        $t6, $f2
    ctx->pc = 0x179f7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x179f80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179F80u;
    {
        const bool branch_taken_0x179f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F80u;
        // 0x179f84: 0x31ceffff  andi        $t6, $t6, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f80) {
            ctx->pc = 0x179FA4u;
            goto label_179fa4;
        }
    }
    ctx->pc = 0x179F88u;
    // 0x179f88: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x179f88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_179f8c:
    // 0x179f8c: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x179f8cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x179f90: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179f90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179f94: 0x440e1000  mfc1        $t6, $f2
    ctx->pc = 0x179f94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x179f98: 0x0  nop
    ctx->pc = 0x179f98u;
    // NOP
    // 0x179f9c: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x179f9cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
    // 0x179fa0: 0x31ceffff  andi        $t6, $t6, 0xFFFF
    ctx->pc = 0x179fa0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
label_179fa4:
    // 0x179fa4: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x179FA4u;
    {
        const bool branch_taken_0x179fa4 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x179FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FA4u;
        // 0x179fa8: 0x31cbffff  andi        $t3, $t6, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179fa4) {
            ctx->pc = 0x179FB8u;
            goto label_179fb8;
        }
    }
    ctx->pc = 0x179FACu;
    // 0x179fac: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x179facu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179fb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179FB0u;
    {
        const bool branch_taken_0x179fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FB0u;
        // 0x179fb4: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179fb0) {
            ctx->pc = 0x179FD4u;
            goto label_179fd4;
        }
    }
    ctx->pc = 0x179FB8u;
label_179fb8:
    // 0x179fb8: 0xa7042  srl         $t6, $t2, 1
    ctx->pc = 0x179fb8u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x179fbc: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x179fbcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x179fc0: 0x1ca7025  or          $t6, $t6, $t2
    ctx->pc = 0x179fc0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 10));
    // 0x179fc4: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x179fc4u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179fc8: 0x0  nop
    ctx->pc = 0x179fc8u;
    // NOP
    // 0x179fcc: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x179fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x179fd0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x179fd0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_179fd4:
    // 0x179fd4: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179FD4u;
    {
        const bool branch_taken_0x179fd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x179fd4) {
            ctx->pc = 0x179FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179FD4u;
            // 0x179fd8: 0x25042  srl         $t2, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179FECu;
            goto label_179fec;
        }
    }
    ctx->pc = 0x179FDCu;
    // 0x179fdc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x179fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179fe0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179FE0u;
    {
        const bool branch_taken_0x179fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FE0u;
        // 0x179fe4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179fe0) {
            ctx->pc = 0x17A004u;
            goto label_17a004;
        }
    }
    ctx->pc = 0x179FE8u;
    // 0x179fe8: 0x25042  srl         $t2, $v0, 1
    ctx->pc = 0x179fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_179fec:
    // 0x179fec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x179fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x179ff0: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x179ff0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x179ff4: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x179ff4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179ff8: 0x0  nop
    ctx->pc = 0x179ff8u;
    // NOP
    // 0x179ffc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17a000: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x17a000u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_17a004:
    // 0x17a004: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x17a004u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x17a008: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x17a008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x17a00c: 0x4600185c  madd.s      $f1, $f3, $f0
    ctx->pc = 0x17a00cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x17a010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17a010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a014: 0x0  nop
    ctx->pc = 0x17a014u;
    // NOP
    // 0x17a018: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17a018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17a01c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x17A01Cu;
    {
        const bool branch_taken_0x17a01c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17a01c) {
            ctx->pc = 0x17A020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A01Cu;
            // 0x17a020: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A038u;
            goto label_17a038;
        }
    }
    ctx->pc = 0x17A024u;
    // 0x17a024: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17a024u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17a028: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x17a028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x17a02c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17A02Cu;
    {
        const bool branch_taken_0x17a02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A02Cu;
        // 0x17a030: 0x314affff  andi        $t2, $t2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a02c) {
            ctx->pc = 0x17A050u;
            goto label_17a050;
        }
    }
    ctx->pc = 0x17A034u;
    // 0x17a034: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17a034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17a038:
    // 0x17a038: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x17a038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x17a03c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17a03cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17a040: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x17a040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x17a044: 0x0  nop
    ctx->pc = 0x17a044u;
    // NOP
    // 0x17a048: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x17a048u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x17a04c: 0x314affff  andi        $t2, $t2, 0xFFFF
    ctx->pc = 0x17a04cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_17a050:
    // 0x17a050: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x17a050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x17a054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17a054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a058: 0x0  nop
    ctx->pc = 0x17a058u;
    // NOP
    // 0x17a05c: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x17a05cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17a060: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17A060u;
    {
        const bool branch_taken_0x17a060 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A060u;
        // 0x17a064: 0x314affff  andi        $t2, $t2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a060) {
            ctx->pc = 0x17A078u;
            goto label_17a078;
        }
    }
    ctx->pc = 0x17A068u;
    // 0x17a068: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17a068u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17a06c: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x17a06cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x17a070: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17A070u;
    {
        const bool branch_taken_0x17a070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A070u;
        // 0x17a074: 0x31ceffff  andi        $t6, $t6, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a070) {
            ctx->pc = 0x17A094u;
            goto label_17a094;
        }
    }
    ctx->pc = 0x17A078u;
label_17a078:
    // 0x17a078: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x17a078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x17a07c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x17a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x17a080: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17a080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17a084: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x17a084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x17a088: 0x0  nop
    ctx->pc = 0x17a088u;
    // NOP
    // 0x17a08c: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x17a08cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x17a090: 0x31ceffff  andi        $t6, $t6, 0xFFFF
    ctx->pc = 0x17a090u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
label_17a094:
    // 0x17a094: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x17a094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x17a098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17a098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a09c: 0x0  nop
    ctx->pc = 0x17a09cu;
    // NOP
    // 0x17a0a0: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x17a0a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17a0a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17A0A4u;
    {
        const bool branch_taken_0x17a0a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0A4u;
        // 0x17a0a8: 0x31cfffff  andi        $t7, $t6, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0a4) {
            ctx->pc = 0x17A0BCu;
            goto label_17a0bc;
        }
    }
    ctx->pc = 0x17A0ACu;
    // 0x17a0ac: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17a0acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17a0b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17a0b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x17a0b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17A0B4u;
    {
        const bool branch_taken_0x17a0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0B4u;
        // 0x17a0b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0b4) {
            ctx->pc = 0x17A0D8u;
            goto label_17a0d8;
        }
    }
    ctx->pc = 0x17A0BCu;
label_17a0bc:
    // 0x17a0bc: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x17a0bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x17a0c0: 0x3c0e8000  lui         $t6, 0x8000
    ctx->pc = 0x17a0c0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32768 << 16));
    // 0x17a0c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17a0c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17a0c8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17a0c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x17a0cc: 0x0  nop
    ctx->pc = 0x17a0ccu;
    // NOP
    // 0x17a0d0: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x17a0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x17a0d4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17a0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_17a0d8:
    // 0x17a0d8: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x17a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
    // 0x17a0dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17a0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a0e0: 0x318500ff  andi        $a1, $t4, 0xFF
    ctx->pc = 0x17a0e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x17a0e4: 0x57200  sll         $t6, $a1, 8
    ctx->pc = 0x17a0e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x17a0e8: 0x316c00ff  andi        $t4, $t3, 0xFF
    ctx->pc = 0x17a0e8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x17a0ec: 0x31a500ff  andi        $a1, $t5, 0xFF
    ctx->pc = 0x17a0ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x17a0f0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x17a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x17a0f4: 0x655825  or          $t3, $v1, $a1
    ctx->pc = 0x17a0f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x17a0f8: 0x1cb6825  or          $t5, $t6, $t3
    ctx->pc = 0x17a0f8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
    // 0x17a0fc: 0x31e500ff  andi        $a1, $t7, 0xFF
    ctx->pc = 0x17a0fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x17a100: 0x55a00  sll         $t3, $a1, 8
    ctx->pc = 0x17a100u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x17a104: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x17a104u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x17a108: 0x314500ff  andi        $a1, $t2, 0xFF
    ctx->pc = 0x17a108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x17a10c: 0xafac00bc  sw          $t4, 0xBC($sp)
    ctx->pc = 0x17a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 12));
    // 0x17a110: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x17a110u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x17a114: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x17a114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x17a118: 0x1631825  or          $v1, $t3, $v1
    ctx->pc = 0x17a118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x17a11c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17a11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17a120: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x17a120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_17a124:
    // 0x17a124: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x17a124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_17a128:
    // 0x17a128: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x17a128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x17a12c: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x17a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
    // 0x17a130: 0x92420044  lbu         $v0, 0x44($s2)
    ctx->pc = 0x17a130u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x17a134: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A134u;
    {
        const bool branch_taken_0x17a134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a134) {
            ctx->pc = 0x17A138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A134u;
            // 0x17a138: 0x92420045  lbu         $v0, 0x45($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A14Cu;
            goto label_17a14c;
        }
    }
    ctx->pc = 0x17A13Cu;
    // 0x17a13c: 0x8642003e  lh          $v0, 0x3E($s2)
    ctx->pc = 0x17a13cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x17a140: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x17a140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a144: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x17a144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x17a148: 0x92420045  lbu         $v0, 0x45($s2)
    ctx->pc = 0x17a148u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
label_17a14c:
    // 0x17a14c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A14Cu;
    {
        const bool branch_taken_0x17a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a14c) {
            ctx->pc = 0x17A160u;
            goto label_17a160;
        }
    }
    ctx->pc = 0x17A154u;
    // 0x17a154: 0x8642003c  lh          $v0, 0x3C($s2)
    ctx->pc = 0x17a154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x17a158: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x17a158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a15c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x17a15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_17a160:
    // 0x17a160: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x17a160u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a164: 0x0  nop
    ctx->pc = 0x17a164u;
    // NOP
    // 0x17a168: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17a168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17a16c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x17a16cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a170: 0x0  nop
    ctx->pc = 0x17a170u;
    // NOP
    // 0x17a174: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x17a174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x17a178: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x17a178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x17a17c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17a17cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17a180: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x17a180u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a184: 0x0  nop
    ctx->pc = 0x17a184u;
    // NOP
    // 0x17a188: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x17a188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x17a18c: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x17a18cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x17a190: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17a190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17a194: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x17a194u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a198: 0x0  nop
    ctx->pc = 0x17a198u;
    // NOP
    // 0x17a19c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17a19cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17a1a0: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x17a1a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x17a1a4: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x17a1a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x17a1a8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x17a1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17a1ac: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x17A1ACu;
    {
        const bool branch_taken_0x17a1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1ACu;
        // 0x17a1b0: 0xe7a000e0  swc1        $f0, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1ac) {
            ctx->pc = 0x17A220u;
            goto label_17a220;
        }
    }
    ctx->pc = 0x17A1B4u;
    // 0x17a1b4: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x17a1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a1b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17a1b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a1bc: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x17a1bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17a1c0: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x17a1c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17a1c4: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x17a1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17a1c8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x17a1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x17a1cc: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x17a1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a1d0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x17a1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x17a1d4: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x17a1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a1d8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x17a1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_17a1dc:
    // 0x17a1dc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x17a1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a1e0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x17a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17a1e4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x17a1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a1e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17a1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a1ec: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x17a1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17a1f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x17a1f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a1f4: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x17a1f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x17a1f8: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x17a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x17a1fc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x17a1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x17a200: 0xc05a9d4  jal         func_16A750
    ctx->pc = 0x17A200u;
    SET_GPR_U32(ctx, 31, 0x17A208u);
    ctx->pc = 0x17A204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A200u;
    // 0x17a204: 0xe6350008  swc1        $f21, 0x8($s1) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A750u, 0x17A200u, 0x17A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A208u;
label_17a208:
    // 0x17a208: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x17a208u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x17a20c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x17a20cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x17a210: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x17a210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17a214: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x17a214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x17a218: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x17A218u;
    {
        const bool branch_taken_0x17a218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A218u;
        // 0x17a21c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a218) {
            ctx->pc = 0x17A1DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17a1dc;
        }
    }
    ctx->pc = 0x17A220u;
label_17a220:
    // 0x17a220: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17a220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17a224: 0xc0c4ad0  jal         func_312B40
    ctx->pc = 0x17A224u;
    SET_GPR_U32(ctx, 31, 0x17A22Cu);
    ctx->pc = 0x17A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A224u;
    // 0x17a228: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B40u, 0x17A224u, 0x17A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A22Cu;
label_17a22c:
    // 0x17a22c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17a22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_17a230:
    // 0x17a230: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17a234: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17a234u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a238: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17a238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17a23c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17a23cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a240: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17a240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a244: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17a244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a248: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17a248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a24c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A24Cu;
        // 0x17a250: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A254u;
    // 0x17a254: 0x0  nop
    ctx->pc = 0x17a254u;
    // NOP
    // 0x17a258: 0x0  nop
    ctx->pc = 0x17a258u;
    // NOP
    // 0x17a25c: 0x0  nop
    ctx->pc = 0x17a25cu;
    // NOP
    if (ctx->pc == 0x17a25cu) { ctx->pc = 0x17a260u; }
}
