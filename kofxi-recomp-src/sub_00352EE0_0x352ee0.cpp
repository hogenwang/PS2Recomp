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

// Function: sub_00352EE0
// Address: 0x352ee0 - 0x3532a0
void sub_00352EE0_0x352ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352EE0_0x352ee0");
#endif

    switch (ctx->pc) {
        case 0x352f10u: goto label_352f10;
        case 0x352f28u: goto label_352f28;
        case 0x352f80u: goto label_352f80;
        case 0x353088u: goto label_353088;
        case 0x3530d0u: goto label_3530d0;
        case 0x353134u: goto label_353134;
        case 0x353238u: goto label_353238;
        case 0x353280u: goto label_353280;
        default: break;
    }

    ctx->pc = 0x352ee0u;

    // 0x352ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x352ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x352ee4: 0x2407a847  addiu       $a3, $zero, -0x57B9
    ctx->pc = 0x352ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944839));
    // 0x352ee8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x352ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x352eec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x352eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x352ef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x352ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x352ef4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x352ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352ef8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x352ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352efc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x352efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x352f00: 0x24849784  addiu       $a0, $a0, -0x687C
    ctx->pc = 0x352f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940548));
    // 0x352f04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x352f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f08: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x352F08u;
    SET_GPR_U32(ctx, 31, 0x352F10u);
    ctx->pc = 0x352F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352F08u;
    // 0x352f0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x352F08u, 0x352F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352F10u;
label_352f10:
    // 0x352f10: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x352f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x352f14: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x352f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x352f18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x352f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f1c: 0x24849790  addiu       $a0, $a0, -0x6870
    ctx->pc = 0x352f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940560));
    // 0x352f20: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x352F20u;
    SET_GPR_U32(ctx, 31, 0x352F28u);
    ctx->pc = 0x352F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352F20u;
    // 0x352f24: 0x2407a847  addiu       $a3, $zero, -0x57B9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944839));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x352F20u, 0x352F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352F28u;
label_352f28:
    // 0x352f28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x352f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352f2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x352f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x352f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352f34: 0x3e00008  jr          $ra
    ctx->pc = 0x352F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352F34u;
        // 0x352f38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352F3Cu;
    // 0x352f3c: 0x0  nop
    ctx->pc = 0x352f3cu;
    // NOP
    // 0x352f40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x352f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x352f44: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x352f48: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x352f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x352f4c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x352f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x352f50: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x352f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x352f54: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x352f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x352f58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x352f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x352f5c: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x352f5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x352f60: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x352f60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x352f64: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x352F64u;
    {
        const bool branch_taken_0x352f64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x352f64) {
            ctx->pc = 0x352F78u;
            goto label_352f78;
        }
    }
    ctx->pc = 0x352F6Cu;
    // 0x352f6c: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x352f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x352f70: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x352F70u;
    {
        const bool branch_taken_0x352f70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x352f70) {
            ctx->pc = 0x352F88u;
            goto label_352f88;
        }
    }
    ctx->pc = 0x352F78u;
label_352f78:
    // 0x352f78: 0xc055728  jal         func_155CA0
    ctx->pc = 0x352F78u;
    SET_GPR_U32(ctx, 31, 0x352F80u);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x352F78u, 0x352F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352F80u;
label_352f80:
    // 0x352f80: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x352F80u;
    {
        const bool branch_taken_0x352f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352F80u;
        // 0x352f84: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352f80) {
            ctx->pc = 0x3530D4u;
            goto label_3530d4;
        }
    }
    ctx->pc = 0x352F88u;
label_352f88:
    // 0x352f88: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x352f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x352f8c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x352f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x352f90: 0xc441bf28  lwc1        $f1, -0x40D8($v0)
    ctx->pc = 0x352f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352f94: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x352f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x352f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x352f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352f9c: 0x0  nop
    ctx->pc = 0x352f9cu;
    // NOP
    // 0x352fa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x352fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x352fa4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x352FA4u;
    {
        const bool branch_taken_0x352fa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x352fa4) {
            ctx->pc = 0x352FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352FA4u;
            // 0x352fa8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352FBCu;
            goto label_352fbc;
        }
    }
    ctx->pc = 0x352FACu;
    // 0x352fac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x352facu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x352fb0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x352fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x352fb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x352FB4u;
    {
        const bool branch_taken_0x352fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352FB4u;
        // 0x352fb8: 0xe440bf28  swc1        $f0, -0x40D8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294950696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x352fb4) {
            ctx->pc = 0x352FCCu;
            goto label_352fcc;
        }
    }
    ctx->pc = 0x352FBCu;
label_352fbc:
    // 0x352fbc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x352fc0: 0xa043e810  sb          $v1, -0x17F0($v0)
    ctx->pc = 0x352fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 3));
    // 0x352fc4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x352fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x352fc8: 0xac40bf28  sw          $zero, -0x40D8($v0)
    ctx->pc = 0x352fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950696), GPR_U32(ctx, 0));
label_352fcc:
    // 0x352fcc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x352fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x352fd0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x352fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x352fd4: 0xc442bf28  lwc1        $f2, -0x40D8($v0)
    ctx->pc = 0x352fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x352fd8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x352fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x352fdc: 0x3c034340  lui         $v1, 0x4340
    ctx->pc = 0x352fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17216 << 16));
    // 0x352fe0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x352fe0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x352fe4: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x352fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x352fe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x352fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352fec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x352fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x352ff0: 0x0  nop
    ctx->pc = 0x352ff0u;
    // NOP
    // 0x352ff4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x352ff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x352ff8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x352ff8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x352ffc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x352ffcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x353000: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x353000u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x353004: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x353004u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x353008: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x353008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x35300c: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x35300Cu;
    {
        const bool branch_taken_0x35300c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x353010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35300Cu;
        // 0x353010: 0x131843  sra         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35300c) {
            ctx->pc = 0x35301Cu;
            goto label_35301c;
        }
    }
    ctx->pc = 0x353014u;
    // 0x353014: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x353014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x353018: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x353018u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_35301c:
    // 0x35301c: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x35301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x353020: 0x122043  sra         $a0, $s2, 1
    ctx->pc = 0x353020u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 18), 1));
    // 0x353024: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x353024u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x353028: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x353028u;
    {
        const bool branch_taken_0x353028 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x35302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353028u;
        // 0x35302c: 0x2451fff0  addiu       $s1, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353028) {
            ctx->pc = 0x353038u;
            goto label_353038;
        }
    }
    ctx->pc = 0x353030u;
    // 0x353030: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x353030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x353034: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x353034u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_353038:
    // 0x353038: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x353038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35303c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x35303cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x353040: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x353040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x353044: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x353044u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x353048: 0x240200d0  addiu       $v0, $zero, 0xD0
    ctx->pc = 0x353048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x35304c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35304cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x353050: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x353050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x353054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353058: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x353058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x35305c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x35305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x353060: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x353060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x353064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x353064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353068: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x353068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x35306c: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x35306cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x353070: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x353070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353074: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x353074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353078: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x353078u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x35307c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x35307cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353080: 0xc0c0bd4  jal         func_302F50
    ctx->pc = 0x353080u;
    SET_GPR_U32(ctx, 31, 0x353088u);
    ctx->pc = 0x353084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353080u;
    // 0x353084: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302F50u, 0x353080u, 0x353088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353088u;
label_353088:
    // 0x353088: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x353088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35308c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x35308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353090: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x353090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x353094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353098: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x353098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x35309c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3530a0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x3530a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x3530a4: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x3530a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x3530a8: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x3530a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x3530ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3530acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3530b0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3530b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3530b4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3530b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3530b8: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x3530b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x3530bc: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x3530bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3530c0: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x3530c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x3530c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3530c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3530c8: 0xc0c0bd4  jal         func_302F50
    ctx->pc = 0x3530C8u;
    SET_GPR_U32(ctx, 31, 0x3530D0u);
    ctx->pc = 0x3530CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3530C8u;
    // 0x3530cc: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302F50u, 0x3530C8u, 0x3530D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3530D0u;
label_3530d0:
    // 0x3530d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3530d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3530d4:
    // 0x3530d4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3530d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3530d8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3530d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3530dc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3530dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3530e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3530e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3530e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3530E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3530E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3530E4u;
        // 0x3530e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3530E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3530ECu;
    // 0x3530ec: 0x0  nop
    ctx->pc = 0x3530ecu;
    // NOP
    // 0x3530f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3530f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3530f4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3530f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3530f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3530f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3530fc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3530fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x353100: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x353100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x353104: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x353104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x353108: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x353108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35310c: 0x9043e818  lbu         $v1, -0x17E8($v0)
    ctx->pc = 0x35310cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x353110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353114: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353114u;
    {
        const bool branch_taken_0x353114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x353114) {
            ctx->pc = 0x35312Cu;
            goto label_35312c;
        }
    }
    ctx->pc = 0x35311Cu;
    // 0x35311c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35311cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x353120: 0x90429738  lbu         $v0, -0x68C8($v0)
    ctx->pc = 0x353120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940472)));
    // 0x353124: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353124u;
    {
        const bool branch_taken_0x353124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353124) {
            ctx->pc = 0x35313Cu;
            goto label_35313c;
        }
    }
    ctx->pc = 0x35312Cu;
label_35312c:
    // 0x35312c: 0xc055728  jal         func_155CA0
    ctx->pc = 0x35312Cu;
    SET_GPR_U32(ctx, 31, 0x353134u);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x35312Cu, 0x353134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353134u;
label_353134:
    // 0x353134: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x353134u;
    {
        const bool branch_taken_0x353134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353134u;
        // 0x353138: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353134) {
            ctx->pc = 0x353284u;
            goto label_353284;
        }
    }
    ctx->pc = 0x35313Cu;
label_35313c:
    // 0x35313c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35313cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x353140: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x353140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x353144: 0xc441bf28  lwc1        $f1, -0x40D8($v0)
    ctx->pc = 0x353144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353148: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x353148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x35314c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35314cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353150: 0x0  nop
    ctx->pc = 0x353150u;
    // NOP
    // 0x353154: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x353154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x353158: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x353158u;
    {
        const bool branch_taken_0x353158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x353158) {
            ctx->pc = 0x35315Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353158u;
            // 0x35315c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353170u;
            goto label_353170;
        }
    }
    ctx->pc = 0x353160u;
    // 0x353160: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x353160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x353164: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x353168: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x353168u;
    {
        const bool branch_taken_0x353168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353168u;
        // 0x35316c: 0xe440bf28  swc1        $f0, -0x40D8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294950696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353168) {
            ctx->pc = 0x353180u;
            goto label_353180;
        }
    }
    ctx->pc = 0x353170u;
label_353170:
    // 0x353170: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x353170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x353174: 0xa043e810  sb          $v1, -0x17F0($v0)
    ctx->pc = 0x353174u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 3));
    // 0x353178: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35317c: 0xac40bf28  sw          $zero, -0x40D8($v0)
    ctx->pc = 0x35317cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950696), GPR_U32(ctx, 0));
label_353180:
    // 0x353180: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x353184: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x353184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x353188: 0xc442bf28  lwc1        $f2, -0x40D8($v0)
    ctx->pc = 0x353188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35318c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x35318cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x353190: 0x3c034340  lui         $v1, 0x4340
    ctx->pc = 0x353190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17216 << 16));
    // 0x353194: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x353194u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x353198: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x353198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x35319c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35319cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3531a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3531a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3531a4: 0x0  nop
    ctx->pc = 0x3531a4u;
    // NOP
    // 0x3531a8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3531a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3531ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3531acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3531b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3531b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3531b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3531b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3531b8: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x3531b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x3531bc: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x3531bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x3531c0: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3531C0u;
    {
        const bool branch_taken_0x3531c0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x3531C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3531C0u;
        // 0x3531c4: 0x131843  sra         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3531c0) {
            ctx->pc = 0x3531D0u;
            goto label_3531d0;
        }
    }
    ctx->pc = 0x3531C8u;
    // 0x3531c8: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x3531c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3531cc: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x3531ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_3531d0:
    // 0x3531d0: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x3531d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x3531d4: 0x122043  sra         $a0, $s2, 1
    ctx->pc = 0x3531d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 18), 1));
    // 0x3531d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3531d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3531dc: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3531DCu;
    {
        const bool branch_taken_0x3531dc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x3531E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3531DCu;
        // 0x3531e0: 0x2451fff0  addiu       $s1, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3531dc) {
            ctx->pc = 0x3531ECu;
            goto label_3531ec;
        }
    }
    ctx->pc = 0x3531E4u;
    // 0x3531e4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x3531e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3531e8: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x3531e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_3531ec:
    // 0x3531ec: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x3531ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x3531f0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x3531f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3531f4: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x3531f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3531f8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3531f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3531fc: 0x240300d0  addiu       $v1, $zero, 0xD0
    ctx->pc = 0x3531fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x353200: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x353200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x353204: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x353204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x353208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35320c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x35320cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x353210: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x353210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353214: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x353214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x353218: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x353218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x35321c: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x35321cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x353220: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x353220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353224: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x353224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353228: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x353228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x35322c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x35322cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353230: 0xc0c0bd4  jal         func_302F50
    ctx->pc = 0x353230u;
    SET_GPR_U32(ctx, 31, 0x353238u);
    ctx->pc = 0x353234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353230u;
    // 0x353234: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302F50u, 0x353230u, 0x353238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353238u;
label_353238:
    // 0x353238: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x353238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35323c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x35323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353240: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x353240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x353244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353248: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x353248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x35324c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35324cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353250: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x353250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x353254: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x353254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x353258: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x353258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x35325c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35325cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353260: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x353260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353264: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x353264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353268: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x353268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x35326c: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x35326cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x353270: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x353270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x353274: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x353274u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353278: 0xc0c0bd4  jal         func_302F50
    ctx->pc = 0x353278u;
    SET_GPR_U32(ctx, 31, 0x353280u);
    ctx->pc = 0x35327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353278u;
    // 0x35327c: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302F50u, 0x353278u, 0x353280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353280u;
label_353280:
    // 0x353280: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x353280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_353284:
    // 0x353284: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x353284u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x353288: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x353288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35328c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x35328cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x353290: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x353290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x353294: 0x3e00008  jr          $ra
    ctx->pc = 0x353294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353294u;
        // 0x353298: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35329Cu;
    // 0x35329c: 0x0  nop
    ctx->pc = 0x35329cu;
    // NOP
}
