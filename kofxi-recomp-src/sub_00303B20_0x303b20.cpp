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

// Function: sub_00303B20
// Address: 0x303b20 - 0x303d60
void sub_00303B20_0x303b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303B20_0x303b20");
#endif

    switch (ctx->pc) {
        case 0x303c0cu: goto label_303c0c;
        case 0x303c48u: goto label_303c48;
        case 0x303c50u: goto label_303c50;
        case 0x303cc0u: goto label_303cc0;
        default: break;
    }

    ctx->pc = 0x303b20u;

    // 0x303b20: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x303b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x303b24: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x303b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x303b28: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x303b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x303b2c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x303b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x303b30: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x303b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x303b34: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x303b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x303b38: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x303b38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b3c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x303b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x303b40: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x303b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x303b44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x303b44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b48: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x303b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x303b4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x303b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x303b50: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x303b50u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x303b54: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x303b54u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x303b58: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x303b58u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x303b5c: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x303b5cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x303b60: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x303b60u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x303b64: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x303b64u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x303b68: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x303b68u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x303b6c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x303b6cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x303b70: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x303b70u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x303b74: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x303b74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x303b78: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x303b78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x303b7c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x303b7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x303b80: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x303b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303b84: 0x9083008e  lbu         $v1, 0x8E($a0)
    ctx->pc = 0x303b84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 142)));
    // 0x303b88: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x303b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303b8c: 0x84920080  lh          $s2, 0x80($a0)
    ctx->pc = 0x303b8cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x303b90: 0xc49e0010  lwc1        $f30, 0x10($a0)
    ctx->pc = 0x303b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x303b94: 0x94960092  lhu         $s6, 0x92($a0)
    ctx->pc = 0x303b94u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
    // 0x303b98: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x303b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x303b9c: 0x94970094  lhu         $s7, 0x94($a0)
    ctx->pc = 0x303b9cu;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x303ba0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x303ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x303ba4: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x303ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303ba8: 0xc49d0024  lwc1        $f29, 0x24($a0)
    ctx->pc = 0x303ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x303bac: 0xc49c002c  lwc1        $f28, 0x2C($a0)
    ctx->pc = 0x303bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x303bb0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x303bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x303bb4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x303bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x303bb8: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x303bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303bbc: 0xc49b0040  lwc1        $f27, 0x40($a0)
    ctx->pc = 0x303bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x303bc0: 0xc49a0048  lwc1        $f26, 0x48($a0)
    ctx->pc = 0x303bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x303bc4: 0xc499005c  lwc1        $f25, 0x5C($a0)
    ctx->pc = 0x303bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x303bc8: 0xc4980064  lwc1        $f24, 0x64($a0)
    ctx->pc = 0x303bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x303bcc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x303bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x303bd0: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x303bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x303bd4: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x303bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303bd8: 0x4480f800  mtc1        $zero, $f31
    ctx->pc = 0x303bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
    // 0x303bdc: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x303bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x303be0: 0xe7be00d8  swc1        $f30, 0xD8($sp)
    ctx->pc = 0x303be0u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x303be4: 0xe7bd00ec  swc1        $f29, 0xEC($sp)
    ctx->pc = 0x303be4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x303be8: 0xe7bc00f4  swc1        $f28, 0xF4($sp)
    ctx->pc = 0x303be8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x303bec: 0xe7bb0108  swc1        $f27, 0x108($sp)
    ctx->pc = 0x303becu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x303bf0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x303bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x303bf4: 0xe7ba0110  swc1        $f26, 0x110($sp)
    ctx->pc = 0x303bf4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x303bf8: 0xe7b90124  swc1        $f25, 0x124($sp)
    ctx->pc = 0x303bf8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x303bfc: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x303bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x303c00: 0x1860003f  blez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x303C00u;
    {
        const bool branch_taken_0x303c00 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x303C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C00u;
        // 0x303c04: 0xe7b8012c  swc1        $f24, 0x12C($sp) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c00) {
            ctx->pc = 0x303D00u;
            goto label_303d00;
        }
    }
    ctx->pc = 0x303C08u;
    // 0x303c08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x303c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303c0c:
    // 0x303c0c: 0x92a3008d  lbu         $v1, 0x8D($s5)
    ctx->pc = 0x303c0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 141)));
    // 0x303c10: 0x18600035  blez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x303C10u;
    {
        const bool branch_taken_0x303c10 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x303C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C10u;
        // 0x303c14: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c10) {
            ctx->pc = 0x303CE8u;
            goto label_303ce8;
        }
    }
    ctx->pc = 0x303C18u;
    // 0x303c18: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x303c18u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303c1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x303c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x303c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x303c24: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x303c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303c28: 0x460105c0  add.s       $f23, $f0, $f1
    ctx->pc = 0x303c28u;
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x303c2c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x303c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303c30: 0x46010580  add.s       $f22, $f0, $f1
    ctx->pc = 0x303c30u;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x303c34: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x303c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303c38: 0x46010540  add.s       $f21, $f0, $f1
    ctx->pc = 0x303c38u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x303c3c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x303c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303c40: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x303c40u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x303c44: 0x0  nop
    ctx->pc = 0x303c44u;
    // NOP
label_303c48:
    // 0x303c48: 0xc067cdc  jal         func_19F370
    ctx->pc = 0x303C48u;
    SET_GPR_U32(ctx, 31, 0x303C50u);
    ctx->pc = 0x303C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303C48u;
    // 0x303c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F370u, 0x303C48u, 0x303C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303C50u;
label_303c50:
    // 0x303c50: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x303c50u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303c54: 0x26a40008  addiu       $a0, $s5, 0x8
    ctx->pc = 0x303c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x303c58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x303c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x303c5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x303c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x303c60: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x303c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303c64: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x303c64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x303c68: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x303c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x303c6c: 0x461ff000  add.s       $f0, $f30, $f31
    ctx->pc = 0x303c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[30], ctx->f[31]);
    // 0x303c70: 0xe6b7000c  swc1        $f23, 0xC($s5)
    ctx->pc = 0x303c70u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x303c74: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x303c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x303c78: 0x4601e800  add.s       $f0, $f29, $f1
    ctx->pc = 0x303c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[29], ctx->f[1]);
    // 0x303c7c: 0xe6a00024  swc1        $f0, 0x24($s5)
    ctx->pc = 0x303c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x303c80: 0x461fe000  add.s       $f0, $f28, $f31
    ctx->pc = 0x303c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[28], ctx->f[31]);
    // 0x303c84: 0xe6b60028  swc1        $f22, 0x28($s5)
    ctx->pc = 0x303c84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x303c88: 0xe6a0002c  swc1        $f0, 0x2C($s5)
    ctx->pc = 0x303c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 44), bits); }
    // 0x303c8c: 0x4601d800  add.s       $f0, $f27, $f1
    ctx->pc = 0x303c8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[1]);
    // 0x303c90: 0xe6a00040  swc1        $f0, 0x40($s5)
    ctx->pc = 0x303c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 64), bits); }
    // 0x303c94: 0x4601c800  add.s       $f0, $f25, $f1
    ctx->pc = 0x303c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[25], ctx->f[1]);
    // 0x303c98: 0x461fd040  add.s       $f1, $f26, $f31
    ctx->pc = 0x303c98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[26], ctx->f[31]);
    // 0x303c9c: 0xe6b50044  swc1        $f21, 0x44($s5)
    ctx->pc = 0x303c9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 68), bits); }
    // 0x303ca0: 0xe6a10048  swc1        $f1, 0x48($s5)
    ctx->pc = 0x303ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 72), bits); }
    // 0x303ca4: 0xe6a0005c  swc1        $f0, 0x5C($s5)
    ctx->pc = 0x303ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 92), bits); }
    // 0x303ca8: 0x461fc000  add.s       $f0, $f24, $f31
    ctx->pc = 0x303ca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[31]);
    // 0x303cac: 0xe6b40060  swc1        $f20, 0x60($s5)
    ctx->pc = 0x303cacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 96), bits); }
    // 0x303cb0: 0xe6a00064  swc1        $f0, 0x64($s5)
    ctx->pc = 0x303cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 100), bits); }
    // 0x303cb4: 0x8ea6007c  lw          $a2, 0x7C($s5)
    ctx->pc = 0x303cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x303cb8: 0xc0c0f58  jal         func_303D60
    ctx->pc = 0x303CB8u;
    SET_GPR_U32(ctx, 31, 0x303CC0u);
    ctx->pc = 0x303CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303CB8u;
    // 0x303cbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303D60u, 0x303CB8u, 0x303CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303CC0u;
label_303cc0:
    // 0x303cc0: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x303cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
    // 0x303cc4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x303cc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x303cc8: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x303cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
    // 0x303ccc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x303cccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x303cd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303cd4: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x303cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x303cd8: 0x92a3008d  lbu         $v1, 0x8D($s5)
    ctx->pc = 0x303cd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 141)));
    // 0x303cdc: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x303cdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x303ce0: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x303CE0u;
    {
        const bool branch_taken_0x303ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x303CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303CE0u;
        // 0x303ce4: 0x4600ffc0  add.s       $f31, $f31, $f0 (Delay Slot)
        ctx->f[31] = FPU_ADD_S(ctx->f[31], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ce0) {
            ctx->pc = 0x303C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_303c48;
        }
    }
    ctx->pc = 0x303CE8u;
label_303ce8:
    // 0x303ce8: 0x92a3008e  lbu         $v1, 0x8E($s5)
    ctx->pc = 0x303ce8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 142)));
    // 0x303cec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x303cecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x303cf0: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x303cf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x303cf4: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x303CF4u;
    {
        const bool branch_taken_0x303cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x303CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303CF4u;
        // 0x303cf8: 0x2378821  addu        $s1, $s1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303cf4) {
            ctx->pc = 0x303C0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_303c0c;
        }
    }
    ctx->pc = 0x303CFCu;
    // 0x303cfc: 0x0  nop
    ctx->pc = 0x303cfcu;
    // NOP
label_303d00:
    // 0x303d00: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x303d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x303d04: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x303d04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x303d08: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x303d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x303d0c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x303d0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x303d10: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x303d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x303d14: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x303d14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x303d18: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x303d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x303d1c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x303d1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x303d20: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x303d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x303d24: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x303d24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x303d28: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x303d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x303d2c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x303d2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x303d30: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x303d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x303d34: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x303d34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x303d38: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x303d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x303d3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x303d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x303d40: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x303d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x303d44: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x303d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x303d48: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x303d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x303d4c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x303d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x303d50: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x303d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x303d54: 0x3e00008  jr          $ra
    ctx->pc = 0x303D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D54u;
        // 0x303d58: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303D5Cu;
    // 0x303d5c: 0x0  nop
    ctx->pc = 0x303d5cu;
    // NOP
}
