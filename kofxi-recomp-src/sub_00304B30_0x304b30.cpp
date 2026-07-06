#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304B30
// Address: 0x304b30 - 0x305010
void sub_00304B30_0x304b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304B30_0x304b30");
#endif

    switch (ctx->pc) {
        case 0x304bb4u: goto label_304bb4;
        case 0x304d6cu: goto label_304d6c;
        case 0x304db8u: goto label_304db8;
        case 0x304e24u: goto label_304e24;
        case 0x304fb4u: goto label_304fb4;
        case 0x304ff8u: goto label_304ff8;
        default: break;
    }

    ctx->pc = 0x304b30u;

    // 0x304b30: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x304b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
    // 0x304b34: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x304b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x304b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304b3c: 0x90421500  lbu         $v0, 0x1500($v0)
    ctx->pc = 0x304b3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5376)));
    // 0x304b40: 0x5040009f  beql        $v0, $zero, . + 4 + (0x9F << 2)
    ctx->pc = 0x304B40u;
    {
        const bool branch_taken_0x304b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304b40) {
            ctx->pc = 0x304B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304B40u;
            // 0x304b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304DC0u;
            goto label_304dc0;
        }
    }
    ctx->pc = 0x304B48u;
    // 0x304b48: 0x18a00099  blez        $a1, . + 4 + (0x99 << 2)
    ctx->pc = 0x304B48u;
    {
        const bool branch_taken_0x304b48 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x304B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304B48u;
            // 0x304b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b48) {
            ctx->pc = 0x304DB0u;
            goto label_304db0;
        }
    }
    ctx->pc = 0x304B50u;
    // 0x304b50: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x304b50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x304b54: 0x14200074  bnez        $at, . + 4 + (0x74 << 2)
    ctx->pc = 0x304B54u;
    {
        const bool branch_taken_0x304b54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x304B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304B54u;
            // 0x304b58: 0x24a9fff8  addiu       $t1, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b54) {
            ctx->pc = 0x304D28u;
            goto label_304d28;
        }
    }
    ctx->pc = 0x304B5Cu;
    // 0x304b5c: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x304B5Cu;
    {
        const bool branch_taken_0x304b5c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x304B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304B5Cu;
            // 0x304b60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b5c) {
            ctx->pc = 0x304B7Cu;
            goto label_304b7c;
        }
    }
    ctx->pc = 0x304B64u;
    // 0x304b64: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x304b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x304b68: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x304b68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x304b6c: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x304b6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x304b70: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x304B70u;
    {
        const bool branch_taken_0x304b70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x304b70) {
            ctx->pc = 0x304B7Cu;
            goto label_304b7c;
        }
    }
    ctx->pc = 0x304B78u;
    // 0x304b78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304b7c:
    // 0x304b7c: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x304B7Cu;
    {
        const bool branch_taken_0x304b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304b7c) {
            ctx->pc = 0x304D28u;
            goto label_304d28;
        }
    }
    ctx->pc = 0x304B84u;
    // 0x304b84: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x304b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x304b88: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x304b88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x304b8c: 0x8468db30  lh          $t0, -0x24D0($v1)
    ctx->pc = 0x304b8cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957872)));
    // 0x304b90: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x304b90u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304b94: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x304b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x304b98: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x304b98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x304b9c: 0x8467db2c  lh          $a3, -0x24D4($v1)
    ctx->pc = 0x304b9cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957868)));
    // 0x304ba0: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x304ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
    // 0x304ba4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x304ba4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304ba8: 0x0  nop
    ctx->pc = 0x304ba8u;
    // NOP
    // 0x304bac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x304bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x304bb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_304bb4:
    // 0x304bb4: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x304bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304bb8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x304bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x304bbc: 0x49182a  slt         $v1, $v0, $t1
    ctx->pc = 0x304bbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x304bc0: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x304bc0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304bc4: 0xe5430000  swc1        $f3, 0x0($t2)
    ctx->pc = 0x304bc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x304bc8: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x304bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304bcc: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304bccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x304bd0: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x304bd0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304bd4: 0xe5430004  swc1        $f3, 0x4($t2)
    ctx->pc = 0x304bd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x304bd8: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x304bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304bdc: 0xe5430008  swc1        $f3, 0x8($t2)
    ctx->pc = 0x304bdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x304be0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x304be0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x304be4: 0xad47000c  sw          $a3, 0xC($t2)
    ctx->pc = 0x304be4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 7));
    // 0x304be8: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x304be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304bec: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x304becu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304bf0: 0xe5430010  swc1        $f3, 0x10($t2)
    ctx->pc = 0x304bf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x304bf4: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x304bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304bf8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304bf8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x304bfc: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x304bfcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304c00: 0xe5430014  swc1        $f3, 0x14($t2)
    ctx->pc = 0x304c00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x304c04: 0xc4830018  lwc1        $f3, 0x18($a0)
    ctx->pc = 0x304c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304c08: 0xe5430018  swc1        $f3, 0x18($t2)
    ctx->pc = 0x304c08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
    // 0x304c0c: 0x8c87001c  lw          $a3, 0x1C($a0)
    ctx->pc = 0x304c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x304c10: 0xad47001c  sw          $a3, 0x1C($t2)
    ctx->pc = 0x304c10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 7));
    // 0x304c14: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x304c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304c18: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x304c18u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304c1c: 0xe5430020  swc1        $f3, 0x20($t2)
    ctx->pc = 0x304c1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 32), bits); }
    // 0x304c20: 0xc4830024  lwc1        $f3, 0x24($a0)
    ctx->pc = 0x304c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304c24: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304c24u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x304c28: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x304c28u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304c2c: 0xe5430024  swc1        $f3, 0x24($t2)
    ctx->pc = 0x304c2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 36), bits); }
    // 0x304c30: 0xc4830028  lwc1        $f3, 0x28($a0)
    ctx->pc = 0x304c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304c34: 0xe5430028  swc1        $f3, 0x28($t2)
    ctx->pc = 0x304c34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 40), bits); }
    // 0x304c38: 0x8c87002c  lw          $a3, 0x2C($a0)
    ctx->pc = 0x304c38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x304c3c: 0xad47002c  sw          $a3, 0x2C($t2)
    ctx->pc = 0x304c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 7));
    // 0x304c40: 0xc4830030  lwc1        $f3, 0x30($a0)
    ctx->pc = 0x304c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304c44: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x304c44u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304c48: 0xe5430030  swc1        $f3, 0x30($t2)
    ctx->pc = 0x304c48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 48), bits); }
    // 0x304c4c: 0xc4830034  lwc1        $f3, 0x34($a0)
    ctx->pc = 0x304c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304c50: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304c50u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x304c54: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x304c54u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304c58: 0xe5430034  swc1        $f3, 0x34($t2)
    ctx->pc = 0x304c58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 52), bits); }
    // 0x304c5c: 0xc4830038  lwc1        $f3, 0x38($a0)
    ctx->pc = 0x304c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304c60: 0xe5430038  swc1        $f3, 0x38($t2)
    ctx->pc = 0x304c60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 56), bits); }
    // 0x304c64: 0x8c87003c  lw          $a3, 0x3C($a0)
    ctx->pc = 0x304c64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x304c68: 0xad47003c  sw          $a3, 0x3C($t2)
    ctx->pc = 0x304c68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 60), GPR_U32(ctx, 7));
    // 0x304c6c: 0xc4830040  lwc1        $f3, 0x40($a0)
    ctx->pc = 0x304c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304c70: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x304c70u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304c74: 0xe5430040  swc1        $f3, 0x40($t2)
    ctx->pc = 0x304c74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 64), bits); }
    // 0x304c78: 0xc4830044  lwc1        $f3, 0x44($a0)
    ctx->pc = 0x304c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304c7c: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304c7cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x304c80: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x304c80u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304c84: 0xe5430044  swc1        $f3, 0x44($t2)
    ctx->pc = 0x304c84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 68), bits); }
    // 0x304c88: 0xc4830048  lwc1        $f3, 0x48($a0)
    ctx->pc = 0x304c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304c8c: 0xe5430048  swc1        $f3, 0x48($t2)
    ctx->pc = 0x304c8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 72), bits); }
    // 0x304c90: 0x8c87004c  lw          $a3, 0x4C($a0)
    ctx->pc = 0x304c90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x304c94: 0xad47004c  sw          $a3, 0x4C($t2)
    ctx->pc = 0x304c94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 76), GPR_U32(ctx, 7));
    // 0x304c98: 0xc4830050  lwc1        $f3, 0x50($a0)
    ctx->pc = 0x304c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304c9c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x304c9cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304ca0: 0xe5430050  swc1        $f3, 0x50($t2)
    ctx->pc = 0x304ca0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 80), bits); }
    // 0x304ca4: 0xc4830054  lwc1        $f3, 0x54($a0)
    ctx->pc = 0x304ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304ca8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304ca8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x304cac: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x304cacu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304cb0: 0xe5430054  swc1        $f3, 0x54($t2)
    ctx->pc = 0x304cb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 84), bits); }
    // 0x304cb4: 0xc4830058  lwc1        $f3, 0x58($a0)
    ctx->pc = 0x304cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304cb8: 0xe5430058  swc1        $f3, 0x58($t2)
    ctx->pc = 0x304cb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 88), bits); }
    // 0x304cbc: 0x8c87005c  lw          $a3, 0x5C($a0)
    ctx->pc = 0x304cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x304cc0: 0xad47005c  sw          $a3, 0x5C($t2)
    ctx->pc = 0x304cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 92), GPR_U32(ctx, 7));
    // 0x304cc4: 0xc4830060  lwc1        $f3, 0x60($a0)
    ctx->pc = 0x304cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304cc8: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x304cc8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304ccc: 0xe5430060  swc1        $f3, 0x60($t2)
    ctx->pc = 0x304cccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 96), bits); }
    // 0x304cd0: 0xc4830064  lwc1        $f3, 0x64($a0)
    ctx->pc = 0x304cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304cd4: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304cd4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x304cd8: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x304cd8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304cdc: 0xe5430064  swc1        $f3, 0x64($t2)
    ctx->pc = 0x304cdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 100), bits); }
    // 0x304ce0: 0xc4830068  lwc1        $f3, 0x68($a0)
    ctx->pc = 0x304ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304ce4: 0xe5430068  swc1        $f3, 0x68($t2)
    ctx->pc = 0x304ce4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 104), bits); }
    // 0x304ce8: 0x8c87006c  lw          $a3, 0x6C($a0)
    ctx->pc = 0x304ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x304cec: 0xad47006c  sw          $a3, 0x6C($t2)
    ctx->pc = 0x304cecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 108), GPR_U32(ctx, 7));
    // 0x304cf0: 0xc4830070  lwc1        $f3, 0x70($a0)
    ctx->pc = 0x304cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304cf4: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x304cf4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304cf8: 0xe5430070  swc1        $f3, 0x70($t2)
    ctx->pc = 0x304cf8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 112), bits); }
    // 0x304cfc: 0xc4830074  lwc1        $f3, 0x74($a0)
    ctx->pc = 0x304cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304d00: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304d00u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x304d04: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x304d04u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304d08: 0xe5430074  swc1        $f3, 0x74($t2)
    ctx->pc = 0x304d08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 116), bits); }
    // 0x304d0c: 0xc4830078  lwc1        $f3, 0x78($a0)
    ctx->pc = 0x304d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304d10: 0xe5430078  swc1        $f3, 0x78($t2)
    ctx->pc = 0x304d10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 120), bits); }
    // 0x304d14: 0x8c87007c  lw          $a3, 0x7C($a0)
    ctx->pc = 0x304d14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x304d18: 0xad47007c  sw          $a3, 0x7C($t2)
    ctx->pc = 0x304d18u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 124), GPR_U32(ctx, 7));
    // 0x304d1c: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x304d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x304d20: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x304D20u;
    {
        const bool branch_taken_0x304d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x304D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304D20u;
            // 0x304d24: 0x254a0080  addiu       $t2, $t2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304d20) {
            ctx->pc = 0x304BB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304bb4;
        }
    }
    ctx->pc = 0x304D28u;
label_304d28:
    // 0x304d28: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x304d28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x304d2c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x304D2Cu;
    {
        const bool branch_taken_0x304d2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x304d2c) {
            ctx->pc = 0x304DB0u;
            goto label_304db0;
        }
    }
    ctx->pc = 0x304D34u;
    // 0x304d34: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x304d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x304d38: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x304d38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x304d3c: 0x8468db30  lh          $t0, -0x24D0($v1)
    ctx->pc = 0x304d3cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957872)));
    // 0x304d40: 0xfd3821  addu        $a3, $a3, $sp
    ctx->pc = 0x304d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x304d44: 0x24e90010  addiu       $t1, $a3, 0x10
    ctx->pc = 0x304d44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x304d48: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x304d48u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304d4c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x304d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x304d50: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x304d50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x304d54: 0x8467db2c  lh          $a3, -0x24D4($v1)
    ctx->pc = 0x304d54u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957868)));
    // 0x304d58: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x304d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
    // 0x304d5c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x304d5cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304d60: 0x0  nop
    ctx->pc = 0x304d60u;
    // NOP
    // 0x304d64: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x304d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x304d68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x304d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_304d6c:
    // 0x304d6c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x304d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304d70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304d74: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x304d74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x304d78: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x304d78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304d7c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x304d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x304d80: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x304d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304d84: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x304d84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x304d88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x304d88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304d8c: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x304d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x304d90: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x304d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304d94: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x304d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x304d98: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x304d98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x304d9c: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x304d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x304da0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x304da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x304da4: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x304DA4u;
    {
        const bool branch_taken_0x304da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x304DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304DA4u;
            // 0x304da8: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304da4) {
            ctx->pc = 0x304D6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304d6c;
        }
    }
    ctx->pc = 0x304DACu;
    // 0x304dac: 0x0  nop
    ctx->pc = 0x304dacu;
    // NOP
label_304db0:
    // 0x304db0: 0xc067cfc  jal         func_19F3F0
    ctx->pc = 0x304DB0u;
    SET_GPR_U32(ctx, 31, 0x304DB8u);
    ctx->pc = 0x304DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304DB0u;
            // 0x304db4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F3F0u;
    if (runtime->hasFunction(0x19F3F0u)) {
        auto targetFn = runtime->lookupFunction(0x19F3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304DB8u; }
        if (ctx->pc != 0x304DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F3F0_0x19f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304DB8u; }
        if (ctx->pc != 0x304DB8u) { return; }
    }
    ctx->pc = 0x304DB8u;
label_304db8:
    // 0x304db8: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x304DB8u;
    {
        const bool branch_taken_0x304db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304DB8u;
            // 0x304dbc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304db8) {
            ctx->pc = 0x304FFCu;
            goto label_304ffc;
        }
    }
    ctx->pc = 0x304DC0u;
label_304dc0:
    // 0x304dc0: 0x18a0008b  blez        $a1, . + 4 + (0x8B << 2)
    ctx->pc = 0x304DC0u;
    {
        const bool branch_taken_0x304dc0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x304dc0) {
            ctx->pc = 0x304FF0u;
            goto label_304ff0;
        }
    }
    ctx->pc = 0x304DC8u;
    // 0x304dc8: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x304dc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x304dcc: 0x1420006a  bnez        $at, . + 4 + (0x6A << 2)
    ctx->pc = 0x304DCCu;
    {
        const bool branch_taken_0x304dcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x304DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304DCCu;
            // 0x304dd0: 0x24a7fff8  addiu       $a3, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304dcc) {
            ctx->pc = 0x304F78u;
            goto label_304f78;
        }
    }
    ctx->pc = 0x304DD4u;
    // 0x304dd4: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x304DD4u;
    {
        const bool branch_taken_0x304dd4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x304DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304DD4u;
            // 0x304dd8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304dd4) {
            ctx->pc = 0x304DF4u;
            goto label_304df4;
        }
    }
    ctx->pc = 0x304DDCu;
    // 0x304ddc: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x304ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x304de0: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x304de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x304de4: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x304de4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x304de8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x304DE8u;
    {
        const bool branch_taken_0x304de8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x304de8) {
            ctx->pc = 0x304DF4u;
            goto label_304df4;
        }
    }
    ctx->pc = 0x304DF0u;
    // 0x304df0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304df4:
    // 0x304df4: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x304DF4u;
    {
        const bool branch_taken_0x304df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304df4) {
            ctx->pc = 0x304F78u;
            goto label_304f78;
        }
    }
    ctx->pc = 0x304DFCu;
    // 0x304dfc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x304dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x304e00: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x304e00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x304e04: 0x8466db30  lh          $a2, -0x24D0($v1)
    ctx->pc = 0x304e04u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957872)));
    // 0x304e08: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x304e08u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304e0c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x304e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x304e10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x304e10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x304e14: 0x8463db2c  lh          $v1, -0x24D4($v1)
    ctx->pc = 0x304e14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957868)));
    // 0x304e18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304e1c: 0x0  nop
    ctx->pc = 0x304e1cu;
    // NOP
    // 0x304e20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_304e24:
    // 0x304e24: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x304e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304e28: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x304e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x304e2c: 0x47182a  slt         $v1, $v0, $a3
    ctx->pc = 0x304e2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x304e30: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x304e30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x304e34: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x304e34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x304e38: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x304e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304e3c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x304e3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x304e40: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x304e40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x304e44: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x304e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304e48: 0xe5020008  swc1        $f2, 0x8($t0)
    ctx->pc = 0x304e48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x304e4c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x304e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x304e50: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x304e50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x304e54: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x304e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304e58: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x304e58u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x304e5c: 0xe5020010  swc1        $f2, 0x10($t0)
    ctx->pc = 0x304e5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x304e60: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x304e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304e64: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x304e64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x304e68: 0xe5020014  swc1        $f2, 0x14($t0)
    ctx->pc = 0x304e68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x304e6c: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x304e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304e70: 0xe5020018  swc1        $f2, 0x18($t0)
    ctx->pc = 0x304e70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x304e74: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x304e74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x304e78: 0xad06001c  sw          $a2, 0x1C($t0)
    ctx->pc = 0x304e78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 6));
    // 0x304e7c: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x304e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304e80: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x304e80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x304e84: 0xe5020020  swc1        $f2, 0x20($t0)
    ctx->pc = 0x304e84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x304e88: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x304e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304e8c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x304e8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x304e90: 0xe5020024  swc1        $f2, 0x24($t0)
    ctx->pc = 0x304e90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
    // 0x304e94: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x304e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304e98: 0xe5020028  swc1        $f2, 0x28($t0)
    ctx->pc = 0x304e98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
    // 0x304e9c: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x304e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x304ea0: 0xad06002c  sw          $a2, 0x2C($t0)
    ctx->pc = 0x304ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 6));
    // 0x304ea4: 0xc4820030  lwc1        $f2, 0x30($a0)
    ctx->pc = 0x304ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304ea8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x304ea8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x304eac: 0xe5020030  swc1        $f2, 0x30($t0)
    ctx->pc = 0x304eacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 48), bits); }
    // 0x304eb0: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x304eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304eb4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x304eb4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x304eb8: 0xe5020034  swc1        $f2, 0x34($t0)
    ctx->pc = 0x304eb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 52), bits); }
    // 0x304ebc: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x304ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304ec0: 0xe5020038  swc1        $f2, 0x38($t0)
    ctx->pc = 0x304ec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 56), bits); }
    // 0x304ec4: 0x8c86003c  lw          $a2, 0x3C($a0)
    ctx->pc = 0x304ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x304ec8: 0xad06003c  sw          $a2, 0x3C($t0)
    ctx->pc = 0x304ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 6));
    // 0x304ecc: 0xc4820040  lwc1        $f2, 0x40($a0)
    ctx->pc = 0x304eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304ed0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x304ed0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x304ed4: 0xe5020040  swc1        $f2, 0x40($t0)
    ctx->pc = 0x304ed4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x304ed8: 0xc4820044  lwc1        $f2, 0x44($a0)
    ctx->pc = 0x304ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304edc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x304edcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x304ee0: 0xe5020044  swc1        $f2, 0x44($t0)
    ctx->pc = 0x304ee0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 68), bits); }
    // 0x304ee4: 0xc4820048  lwc1        $f2, 0x48($a0)
    ctx->pc = 0x304ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304ee8: 0xe5020048  swc1        $f2, 0x48($t0)
    ctx->pc = 0x304ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 72), bits); }
    // 0x304eec: 0x8c86004c  lw          $a2, 0x4C($a0)
    ctx->pc = 0x304eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x304ef0: 0xad06004c  sw          $a2, 0x4C($t0)
    ctx->pc = 0x304ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 6));
    // 0x304ef4: 0xc4820050  lwc1        $f2, 0x50($a0)
    ctx->pc = 0x304ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304ef8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x304ef8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x304efc: 0xe5020050  swc1        $f2, 0x50($t0)
    ctx->pc = 0x304efcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 80), bits); }
    // 0x304f00: 0xc4820054  lwc1        $f2, 0x54($a0)
    ctx->pc = 0x304f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304f04: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x304f04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x304f08: 0xe5020054  swc1        $f2, 0x54($t0)
    ctx->pc = 0x304f08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 84), bits); }
    // 0x304f0c: 0xc4820058  lwc1        $f2, 0x58($a0)
    ctx->pc = 0x304f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304f10: 0xe5020058  swc1        $f2, 0x58($t0)
    ctx->pc = 0x304f10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 88), bits); }
    // 0x304f14: 0x8c86005c  lw          $a2, 0x5C($a0)
    ctx->pc = 0x304f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x304f18: 0xad06005c  sw          $a2, 0x5C($t0)
    ctx->pc = 0x304f18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 6));
    // 0x304f1c: 0xc4820060  lwc1        $f2, 0x60($a0)
    ctx->pc = 0x304f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304f20: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x304f20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x304f24: 0xe5020060  swc1        $f2, 0x60($t0)
    ctx->pc = 0x304f24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 96), bits); }
    // 0x304f28: 0xc4820064  lwc1        $f2, 0x64($a0)
    ctx->pc = 0x304f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304f2c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x304f2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x304f30: 0xe5020064  swc1        $f2, 0x64($t0)
    ctx->pc = 0x304f30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 100), bits); }
    // 0x304f34: 0xc4820068  lwc1        $f2, 0x68($a0)
    ctx->pc = 0x304f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304f38: 0xe5020068  swc1        $f2, 0x68($t0)
    ctx->pc = 0x304f38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 104), bits); }
    // 0x304f3c: 0x8c86006c  lw          $a2, 0x6C($a0)
    ctx->pc = 0x304f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x304f40: 0xad06006c  sw          $a2, 0x6C($t0)
    ctx->pc = 0x304f40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 108), GPR_U32(ctx, 6));
    // 0x304f44: 0xc4820070  lwc1        $f2, 0x70($a0)
    ctx->pc = 0x304f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304f48: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x304f48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x304f4c: 0xe5020070  swc1        $f2, 0x70($t0)
    ctx->pc = 0x304f4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 112), bits); }
    // 0x304f50: 0xc4820074  lwc1        $f2, 0x74($a0)
    ctx->pc = 0x304f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304f54: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x304f54u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x304f58: 0xe5020074  swc1        $f2, 0x74($t0)
    ctx->pc = 0x304f58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 116), bits); }
    // 0x304f5c: 0xc4820078  lwc1        $f2, 0x78($a0)
    ctx->pc = 0x304f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304f60: 0xe5020078  swc1        $f2, 0x78($t0)
    ctx->pc = 0x304f60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 120), bits); }
    // 0x304f64: 0x8c86007c  lw          $a2, 0x7C($a0)
    ctx->pc = 0x304f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x304f68: 0xad06007c  sw          $a2, 0x7C($t0)
    ctx->pc = 0x304f68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 124), GPR_U32(ctx, 6));
    // 0x304f6c: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x304f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x304f70: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x304F70u;
    {
        const bool branch_taken_0x304f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x304F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304F70u;
            // 0x304f74: 0x25080080  addiu       $t0, $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f70) {
            ctx->pc = 0x304E24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304e24;
        }
    }
    ctx->pc = 0x304F78u;
label_304f78:
    // 0x304f78: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x304f78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x304f7c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x304F7Cu;
    {
        const bool branch_taken_0x304f7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x304f7c) {
            ctx->pc = 0x304FF0u;
            goto label_304ff0;
        }
    }
    ctx->pc = 0x304F84u;
    // 0x304f84: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x304f84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x304f88: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x304f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x304f8c: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x304f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x304f90: 0x8466db30  lh          $a2, -0x24D0($v1)
    ctx->pc = 0x304f90u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957872)));
    // 0x304f94: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x304f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x304f98: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x304f98u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304f9c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x304f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x304fa0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x304fa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x304fa4: 0x8463db2c  lh          $v1, -0x24D4($v1)
    ctx->pc = 0x304fa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957868)));
    // 0x304fa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304fac: 0x0  nop
    ctx->pc = 0x304facu;
    // NOP
    // 0x304fb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x304fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_304fb4:
    // 0x304fb4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x304fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304fb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304fbc: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x304fbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x304fc0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x304fc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x304fc4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x304fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x304fc8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x304fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304fcc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x304fccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x304fd0: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x304fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x304fd4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x304fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304fd8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x304fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x304fdc: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x304fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x304fe0: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x304fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x304fe4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x304fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x304fe8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x304FE8u;
    {
        const bool branch_taken_0x304fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x304FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304FE8u;
            // 0x304fec: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304fe8) {
            ctx->pc = 0x304FB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304fb4;
        }
    }
    ctx->pc = 0x304FF0u;
label_304ff0:
    // 0x304ff0: 0xc0c4ad0  jal         func_312B40
    ctx->pc = 0x304FF0u;
    SET_GPR_U32(ctx, 31, 0x304FF8u);
    ctx->pc = 0x304FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304FF0u;
            // 0x304ff4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x312B40u;
    if (runtime->hasFunction(0x312B40u)) {
        auto targetFn = runtime->lookupFunction(0x312B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304FF8u; }
        if (ctx->pc != 0x304FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00312B40_0x312b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304FF8u; }
        if (ctx->pc != 0x304FF8u) { return; }
    }
    ctx->pc = 0x304FF8u;
label_304ff8:
    // 0x304ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304ffc:
    // 0x304ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x304FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304FFCu;
            // 0x305000: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x305004u;
    // 0x305004: 0x0  nop
    ctx->pc = 0x305004u;
    // NOP
    // 0x305008: 0x0  nop
    ctx->pc = 0x305008u;
    // NOP
    // 0x30500c: 0x0  nop
    ctx->pc = 0x30500cu;
    // NOP
    ctx->pc = 0x305010u;
}
