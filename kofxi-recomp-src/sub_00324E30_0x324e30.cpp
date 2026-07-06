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

// Function: sub_00324E30
// Address: 0x324e30 - 0x3250e0
void sub_00324E30_0x324e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324E30_0x324e30");
#endif

    switch (ctx->pc) {
        case 0x324e58u: goto label_324e58;
        case 0x324e64u: goto label_324e64;
        case 0x324e74u: goto label_324e74;
        case 0x324f0cu: goto label_324f0c;
        case 0x324f14u: goto label_324f14;
        case 0x324f20u: goto label_324f20;
        case 0x324f68u: goto label_324f68;
        case 0x324f70u: goto label_324f70;
        case 0x324f7cu: goto label_324f7c;
        case 0x3250b8u: goto label_3250b8;
        default: break;
    }

    ctx->pc = 0x324e30u;

    // 0x324e30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x324e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x324e34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x324e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x324e38: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x324e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x324e3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x324e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x324e40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x324e40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x324e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x324e48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x324e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x324e4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x324e4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x324e50: 0xc0c87dc  jal         func_321F70
    ctx->pc = 0x324E50u;
    SET_GPR_U32(ctx, 31, 0x324E58u);
    ctx->pc = 0x324E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E50u;
    // 0x324e54: 0x848400dc  lh          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F70u, 0x324E50u, 0x324E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E58u;
label_324e58:
    // 0x324e58: 0x866500dc  lh          $a1, 0xDC($s3)
    ctx->pc = 0x324e58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x324e5c: 0xc0c87e4  jal         func_321F90
    ctx->pc = 0x324E5Cu;
    SET_GPR_U32(ctx, 31, 0x324E64u);
    ctx->pc = 0x324E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E5Cu;
    // 0x324e60: 0x966400da  lhu         $a0, 0xDA($s3) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 218)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F90u, 0x324E5Cu, 0x324E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E64u;
label_324e64:
    // 0x324e64: 0x966400da  lhu         $a0, 0xDA($s3)
    ctx->pc = 0x324e64u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 218)));
    // 0x324e68: 0x866500dc  lh          $a1, 0xDC($s3)
    ctx->pc = 0x324e68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x324e6c: 0xc0c87f8  jal         func_321FE0
    ctx->pc = 0x324E6Cu;
    SET_GPR_U32(ctx, 31, 0x324E74u);
    ctx->pc = 0x324E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E6Cu;
    // 0x324e70: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321FE0u, 0x324E6Cu, 0x324E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E74u;
label_324e74:
    // 0x324e74: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x324e74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x324e78: 0x54600090  bnel        $v1, $zero, . + 4 + (0x90 << 2)
    ctx->pc = 0x324E78u;
    {
        const bool branch_taken_0x324e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x324e78) {
            ctx->pc = 0x324E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324E78u;
            // 0x324e7c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3250BCu;
            goto label_3250bc;
        }
    }
    ctx->pc = 0x324E80u;
    // 0x324e80: 0x96670000  lhu         $a3, 0x0($s3)
    ctx->pc = 0x324e80u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x324e84: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x324e84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x324e88: 0x8e6300c8  lw          $v1, 0xC8($s3)
    ctx->pc = 0x324e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x324e8c: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x324e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x324e90: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x324e90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
    // 0x324e94: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x324e94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x324e98: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x324e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x324e9c: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x324e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x324ea0: 0x668021  addu        $s0, $v1, $a2
    ctx->pc = 0x324ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x324ea4: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x324ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
    // 0x324ea8: 0x8663000c  lh          $v1, 0xC($s3)
    ctx->pc = 0x324ea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x324eac: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x324eacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x324eb0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x324eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x324eb4: 0xa6620014  sh          $v0, 0x14($s3)
    ctx->pc = 0x324eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x324eb8: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x324eb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x324ebc: 0x8663000e  lh          $v1, 0xE($s3)
    ctx->pc = 0x324ebcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x324ec0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x324ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x324ec4: 0xa6620016  sh          $v0, 0x16($s3)
    ctx->pc = 0x324ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x324ec8: 0x866300ec  lh          $v1, 0xEC($s3)
    ctx->pc = 0x324ec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 236)));
    // 0x324ecc: 0xc6630024  lwc1        $f3, 0x24($s3)
    ctx->pc = 0x324eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x324ed0: 0x866200ea  lh          $v0, 0xEA($s3)
    ctx->pc = 0x324ed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
    // 0x324ed4: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x324ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x324ed8: 0xc66000f8  lwc1        $f0, 0xF8($s3)
    ctx->pc = 0x324ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324edc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x324edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324ee0: 0x0  nop
    ctx->pc = 0x324ee0u;
    // NOP
    // 0x324ee4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x324ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x324ee8: 0x46011d03  div.s       $f20, $f3, $f1
    ctx->pc = 0x324ee8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[20] = ctx->f[3] / ctx->f[1];
    // 0x324eec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324ef0: 0x0  nop
    ctx->pc = 0x324ef0u;
    // NOP
    // 0x324ef4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x324ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x324ef8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x324ef8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x324efc: 0x0  nop
    ctx->pc = 0x324efcu;
    // NOP
    // 0x324f00: 0x0  nop
    ctx->pc = 0x324f00u;
    // NOP
    // 0x324f04: 0xc048930  jal         func_1224C0
    ctx->pc = 0x324F04u;
    SET_GPR_U32(ctx, 31, 0x324F0Cu);
    ctx->pc = 0x324F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F04u;
    // 0x324f08: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x324F04u, 0x324F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F0Cu;
label_324f0c:
    // 0x324f0c: 0xc067d1c  jal         func_19F470
    ctx->pc = 0x324F0Cu;
    SET_GPR_U32(ctx, 31, 0x324F14u);
    ctx->pc = 0x324F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F0Cu;
    // 0x324f10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F470u, 0x324F0Cu, 0x324F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F14u;
label_324f14:
    // 0x324f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324f18: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x324F18u;
    SET_GPR_U32(ctx, 31, 0x324F20u);
    ctx->pc = 0x324F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F18u;
    // 0x324f1c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x324F18u, 0x324F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F20u;
label_324f20:
    // 0x324f20: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x324f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x324f24: 0x86630014  lh          $v1, 0x14($s3)
    ctx->pc = 0x324f24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x324f28: 0x8442db30  lh          $v0, -0x24D0($v0)
    ctx->pc = 0x324f28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x324f2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x324f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x324f30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324f34: 0x0  nop
    ctx->pc = 0x324f34u;
    // NOP
    // 0x324f38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x324f38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x324f3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x324f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x324f40: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x324f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x324f44: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x324f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x324f48: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x324f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324f4c: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x324f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324f50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x324f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x324f54: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x324f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x324f58: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x324f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x324f5c: 0xc66000fc  lwc1        $f0, 0xFC($s3)
    ctx->pc = 0x324f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324f60: 0xc048930  jal         func_1224C0
    ctx->pc = 0x324F60u;
    SET_GPR_U32(ctx, 31, 0x324F68u);
    ctx->pc = 0x324F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F60u;
    // 0x324f64: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x324F60u, 0x324F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F68u;
label_324f68:
    // 0x324f68: 0xc067d1c  jal         func_19F470
    ctx->pc = 0x324F68u;
    SET_GPR_U32(ctx, 31, 0x324F70u);
    ctx->pc = 0x324F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F68u;
    // 0x324f6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F470u, 0x324F68u, 0x324F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F70u;
label_324f70:
    // 0x324f70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324f74: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x324F74u;
    SET_GPR_U32(ctx, 31, 0x324F7Cu);
    ctx->pc = 0x324F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F74u;
    // 0x324f78: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x324F74u, 0x324F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F7Cu;
label_324f7c:
    // 0x324f7c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x324f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x324f80: 0x86640016  lh          $a0, 0x16($s3)
    ctx->pc = 0x324f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x324f84: 0x8443db2c  lh          $v1, -0x24D4($v0)
    ctx->pc = 0x324f84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x324f88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x324f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x324f8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x324f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x324f90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x324f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324f94: 0x0  nop
    ctx->pc = 0x324f94u;
    // NOP
    // 0x324f98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x324f98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x324f9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x324f9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x324fa0: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x324fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x324fa4: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x324fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324fa8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x324fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x324fac: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x324facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x324fb0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x324fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324fb4: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x324fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x324fb8: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x324fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324fbc: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x324fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x324fc0: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x324fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x324fc4: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x324fc4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x324fc8: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x324fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x324fcc: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x324fccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x324fd0: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x324fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x324fd4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x324fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x324fd8: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x324fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x324fdc: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x324fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x324fe0: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x324fe0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x324fe4: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x324fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x324fe8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x324fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x324fec: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x324fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x324ff0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x324ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x324ff4: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x324ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x324ff8: 0x8e630124  lw          $v1, 0x124($s3)
    ctx->pc = 0x324ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x324ffc: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x324ffcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x325000: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x325000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x325004: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x325004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x325008: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x325008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x32500c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x32500cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x325010: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x325010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
    // 0x325014: 0x8e630134  lw          $v1, 0x134($s3)
    ctx->pc = 0x325014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
    // 0x325018: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x325018u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x32501c: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x32501cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x325020: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x325020u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x325024: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x325024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x325028: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x325028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32502c: 0xae430070  sw          $v1, 0x70($s2)
    ctx->pc = 0x32502cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
    // 0x325030: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x325030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325034: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x325034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x325038: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x325038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32503c: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x32503cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x325040: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x325040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325044: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x325044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x325048: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x325048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32504c: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x32504cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x325050: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x325050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x325054: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x325054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x325058: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x325058u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x32505c: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x32505cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    // 0x325060: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x325060u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x325064: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x325064u;
    {
        const bool branch_taken_0x325064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x325064) {
            ctx->pc = 0x325068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325064u;
            // 0x325068: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325088u;
            goto label_325088;
        }
    }
    ctx->pc = 0x32506Cu;
    // 0x32506c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32506cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325070: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x325070u;
    {
        const bool branch_taken_0x325070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x325070) {
            ctx->pc = 0x325074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325070u;
            // 0x325074: 0xae400078  sw          $zero, 0x78($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32508Cu;
            goto label_32508c;
        }
    }
    ctx->pc = 0x325078u;
    // 0x325078: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x325078u;
    {
        const bool branch_taken_0x325078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x325078) {
            ctx->pc = 0x32507Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325078u;
            // 0x32507c: 0xae400078  sw          $zero, 0x78($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32508Cu;
            goto label_32508c;
        }
    }
    ctx->pc = 0x325080u;
    // 0x325080: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x325080u;
    {
        const bool branch_taken_0x325080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325080u;
        // 0x325084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325080) {
            ctx->pc = 0x325090u;
            goto label_325090;
        }
    }
    ctx->pc = 0x325088u;
label_325088:
    // 0x325088: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x325088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
label_32508c:
    // 0x32508c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32508cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_325090:
    // 0x325090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325094: 0xae45007c  sw          $a1, 0x7C($s2)
    ctx->pc = 0x325094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 5));
    // 0x325098: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x325098u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32509c: 0xa6420080  sh          $v0, 0x80($s2)
    ctx->pc = 0x32509cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x3250a0: 0xa6400086  sh          $zero, 0x86($s2)
    ctx->pc = 0x3250a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 134), (uint16_t)GPR_U32(ctx, 0));
    // 0x3250a4: 0xa6400088  sh          $zero, 0x88($s2)
    ctx->pc = 0x3250a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 136), (uint16_t)GPR_U32(ctx, 0));
    // 0x3250a8: 0xa240008a  sb          $zero, 0x8A($s2)
    ctx->pc = 0x3250a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 138), (uint8_t)GPR_U32(ctx, 0));
    // 0x3250ac: 0xa240008c  sb          $zero, 0x8C($s2)
    ctx->pc = 0x3250acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 0));
    // 0x3250b0: 0xc0c0df0  jal         func_3037C0
    ctx->pc = 0x3250B0u;
    SET_GPR_U32(ctx, 31, 0x3250B8u);
    ctx->pc = 0x3250B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3250B0u;
    // 0x3250b4: 0xa245008b  sb          $a1, 0x8B($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3037C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3037C0u, 0x3250B0u, 0x3250B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3250B8u;
label_3250b8:
    // 0x3250b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3250b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3250bc:
    // 0x3250bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3250bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3250c0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3250c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3250c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3250c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3250c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3250c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3250cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3250ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3250d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3250D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3250D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250D0u;
        // 0x3250d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3250D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3250D8u;
    // 0x3250d8: 0x0  nop
    ctx->pc = 0x3250d8u;
    // NOP
    // 0x3250dc: 0x0  nop
    ctx->pc = 0x3250dcu;
    // NOP
}
