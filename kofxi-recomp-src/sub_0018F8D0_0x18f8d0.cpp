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

// Function: sub_0018F8D0
// Address: 0x18f8d0 - 0x18fcc0
void sub_0018F8D0_0x18f8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F8D0_0x18f8d0");
#endif

    switch (ctx->pc) {
        case 0x18f8ecu: goto label_18f8ec;
        case 0x18faf8u: goto label_18faf8;
        case 0x18fca0u: goto label_18fca0;
        default: break;
    }

    ctx->pc = 0x18f8d0u;

    // 0x18f8d0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x18f8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x18f8d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18f8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18f8d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f8dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f8e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18f8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f8e4: 0xc0d50ac  jal         func_3542B0
    ctx->pc = 0x18F8E4u;
    SET_GPR_U32(ctx, 31, 0x18F8ECu);
    ctx->pc = 0x18F8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F8E4u;
    // 0x18f8e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3542B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3542B0u, 0x18F8E4u, 0x18F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F8ECu;
label_18f8ec:
    // 0x18f8ec: 0x544000ed  bnel        $v0, $zero, . + 4 + (0xED << 2)
    ctx->pc = 0x18F8ECu;
    {
        const bool branch_taken_0x18f8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f8ec) {
            ctx->pc = 0x18F8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F8ECu;
            // 0x18f8f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FCA4u;
            goto label_18fca4;
        }
    }
    ctx->pc = 0x18F8F4u;
    // 0x18f8f4: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x18f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x18f8f8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f8fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18f900: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18f900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18f904: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x18f904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18f908: 0x2484db78  addiu       $a0, $a0, -0x2488
    ctx->pc = 0x18f908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957944));
    // 0x18f90c: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x18f90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x18f910: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f914: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x18f914u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18f918: 0x2463dca4  addiu       $v1, $v1, -0x235C
    ctx->pc = 0x18f918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958244));
    // 0x18f91c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x18f91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18f920: 0x2442dca6  addiu       $v0, $v0, -0x235A
    ctx->pc = 0x18f920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958246));
    // 0x18f924: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x18f924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x18f928: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18f928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18f92c: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x18f92cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18f930: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x18f930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18f934: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18f934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f938: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x18f938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x18f93c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18f940: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18f940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18f944: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x18f944u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f948: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x18f948u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f94c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18f94cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f950: 0x0  nop
    ctx->pc = 0x18f950u;
    // NOP
    // 0x18f954: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x18f954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x18f958: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f95c: 0x0  nop
    ctx->pc = 0x18f95cu;
    // NOP
    // 0x18f960: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x18f960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f964: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18F964u;
    {
        const bool branch_taken_0x18f964 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F964u;
        // 0x18f968: 0x468009e0  cvt.s.w     $f7, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f964) {
            ctx->pc = 0x18F970u;
            goto label_18f970;
        }
    }
    ctx->pc = 0x18F96Cu;
    // 0x18f96c: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x18f96cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
label_18f970:
    // 0x18f970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18f970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f974: 0x0  nop
    ctx->pc = 0x18f974u;
    // NOP
    // 0x18f978: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x18f978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f97c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x18F97Cu;
    {
        const bool branch_taken_0x18f97c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f97c) {
            ctx->pc = 0x18F980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F97Cu;
            // 0x18f980: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F98Cu;
            goto label_18f98c;
        }
    }
    ctx->pc = 0x18F984u;
    // 0x18f984: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x18f984u;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
    // 0x18f988: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x18f988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_18f98c:
    // 0x18f98c: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x18f98cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x18f990: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18f990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18f994: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x18f994u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x18f998: 0x2508cbc0  addiu       $t0, $t0, -0x3440
    ctx->pc = 0x18f998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953920));
    // 0x18f99c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x18f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x18f9a0: 0x24e7cbd8  addiu       $a3, $a3, -0x3428
    ctx->pc = 0x18f9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953944));
    // 0x18f9a4: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x18f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x18f9a8: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x18f9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x18f9ac: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x18f9acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x18f9b0: 0x684821  addu        $t1, $v1, $t0
    ctx->pc = 0x18f9b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18f9b4: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x18f9b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18f9b8: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x18f9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x18f9bc: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x18f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f9c0: 0x24e7cbcc  addiu       $a3, $a3, -0x3434
    ctx->pc = 0x18f9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953932));
    // 0x18f9c4: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x18f9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18f9c8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x18f9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x18f9cc: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x18f9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18f9d0: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x18f9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18f9d4: 0x46011981  sub.s       $f6, $f3, $f1
    ctx->pc = 0x18f9d4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x18f9d8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x18f9d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18f9dc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F9DCu;
    {
        const bool branch_taken_0x18f9dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9DCu;
        // 0x18f9e0: 0xe7a20040  swc1        $f2, 0x40($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9dc) {
            ctx->pc = 0x18FA00u;
            goto label_18fa00;
        }
    }
    ctx->pc = 0x18F9E4u;
    // 0x18f9e4: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x18f9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x18f9e8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18f9e8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f9ec: 0x0  nop
    ctx->pc = 0x18f9ecu;
    // NOP
    // 0x18f9f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18f9f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18f9f4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x18f9f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x18f9f8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x18f9f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18f9fc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x18f9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_18fa00:
    // 0x18fa00: 0x3c0742e0  lui         $a3, 0x42E0
    ctx->pc = 0x18fa00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17120 << 16));
    // 0x18fa04: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18fa04u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18fa08: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x18fa08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x18fa0c: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x18fa0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x18fa10: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x18fa10u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[0];
    // 0x18fa14: 0x24e7cbe4  addiu       $a3, $a3, -0x341C
    ctx->pc = 0x18fa14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953956));
    // 0x18fa18: 0xe24021  addu        $t0, $a3, $v0
    ctx->pc = 0x18fa18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x18fa1c: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x18fa1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x18fa20: 0x685821  addu        $t3, $v1, $t0
    ctx->pc = 0x18fa20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18fa24: 0x24e7cbc4  addiu       $a3, $a3, -0x343C
    ctx->pc = 0x18fa24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953924));
    // 0x18fa28: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x18fa28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x18fa2c: 0x675021  addu        $t2, $v1, $a3
    ctx->pc = 0x18fa2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18fa30: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x18fa30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x18fa34: 0x24e7cbd0  addiu       $a3, $a3, -0x3430
    ctx->pc = 0x18fa34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953936));
    // 0x18fa38: 0xe24021  addu        $t0, $a3, $v0
    ctx->pc = 0x18fa38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x18fa3c: 0x684821  addu        $t1, $v1, $t0
    ctx->pc = 0x18fa3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18fa40: 0x3c07009d  lui         $a3, 0x9D
    ctx->pc = 0x18fa40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)157 << 16));
    // 0x18fa44: 0x90e8b280  lbu         $t0, -0x4D80($a3)
    ctx->pc = 0x18fa44u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294947456)));
    // 0x18fa48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18fa48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fa4c: 0x460038c3  div.s       $f3, $f7, $f0
    ctx->pc = 0x18fa4cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[3] = ctx->f[7] / ctx->f[0];
    // 0x18fa50: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x18fa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18fa54: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x18fa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fa58: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x18fa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fa5c: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x18fa5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x18fa60: 0xc7a50030  lwc1        $f5, 0x30($sp)
    ctx->pc = 0x18fa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18fa64: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x18fa64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18fa68: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x18fa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x18fa6c: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x18fa6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[5]));
    // 0x18fa70: 0x4604311c  madd.s      $f4, $f6, $f4
    ctx->pc = 0x18fa70u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x18fa74: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x18fa74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[5]));
    // 0x18fa78: 0x4603301c  madd.s      $f0, $f6, $f3
    ctx->pc = 0x18fa78u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x18fa7c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x18fa7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x18fa80: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x18fa80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x18fa84: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x18fa84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x18fa88: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x18fa88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x18fa8c: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x18fa8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x18fa90: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x18fa90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18fa94: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x18fa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x18fa98: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x18fa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x18fa9c: 0x15070006  bne         $t0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FA9Cu;
    {
        const bool branch_taken_0x18fa9c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x18FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA9Cu;
        // 0x18faa0: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa9c) {
            ctx->pc = 0x18FAB8u;
            goto label_18fab8;
        }
    }
    ctx->pc = 0x18FAA4u;
    // 0x18faa4: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x18faa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x18faa8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18faa8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18faac: 0x0  nop
    ctx->pc = 0x18faacu;
    // NOP
    // 0x18fab0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18fab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fab4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18fab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_18fab8:
    // 0x18fab8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x18fab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fabc: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x18fabcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x18fac0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x18fac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fac4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18fac4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fac8: 0xc4e2cbc8  lwc1        $f2, -0x3438($a3)
    ctx->pc = 0x18fac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294953928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18facc: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x18faccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18fad0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x18fad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x18fad4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x18fad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x18fad8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x18fad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x18fadc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x18fadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x18fae0: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x18fae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x18fae4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18fae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18fae8: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x18fae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x18faec: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x18faecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x18faf0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x18faf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x18faf4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x18faf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_18faf8:
    // 0x18faf8: 0xe5020008  swc1        $f2, 0x8($t0)
    ctx->pc = 0x18faf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x18fafc: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x18fafcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x18fb00: 0xe5020018  swc1        $f2, 0x18($t0)
    ctx->pc = 0x18fb00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x18fb04: 0x2927000c  slti        $a3, $t1, 0xC
    ctx->pc = 0x18fb04u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x18fb08: 0xe5020028  swc1        $f2, 0x28($t0)
    ctx->pc = 0x18fb08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
    // 0x18fb0c: 0xe5020038  swc1        $f2, 0x38($t0)
    ctx->pc = 0x18fb0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 56), bits); }
    // 0x18fb10: 0xe5020048  swc1        $f2, 0x48($t0)
    ctx->pc = 0x18fb10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 72), bits); }
    // 0x18fb14: 0xe5020058  swc1        $f2, 0x58($t0)
    ctx->pc = 0x18fb14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 88), bits); }
    // 0x18fb18: 0x14e0fff7  bnez        $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18FB18u;
    {
        const bool branch_taken_0x18fb18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB18u;
        // 0x18fb1c: 0x25080060  addiu       $t0, $t0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb18) {
            ctx->pc = 0x18FAF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18faf8;
        }
    }
    ctx->pc = 0x18FB20u;
    // 0x18fb20: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x18fb20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x18fb24: 0x24e7cbfc  addiu       $a3, $a3, -0x3404
    ctx->pc = 0x18fb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953980));
    // 0x18fb28: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x18fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x18fb2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18fb30: 0x16000034  bnez        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x18FB30u;
    {
        const bool branch_taken_0x18fb30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB30u;
        // 0x18fb34: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb30) {
            ctx->pc = 0x18FC04u;
            goto label_18fc04;
        }
    }
    ctx->pc = 0x18FB38u;
    // 0x18fb38: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18fb3c: 0x2463dcaa  addiu       $v1, $v1, -0x2356
    ctx->pc = 0x18fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958250));
    // 0x18fb40: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18fb44: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18fb48: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x18fb48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18fb4c: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x18fb4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x18fb50: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x18FB50u;
    {
        const bool branch_taken_0x18fb50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fb50) {
            ctx->pc = 0x18FB78u;
            goto label_18fb78;
        }
    }
    ctx->pc = 0x18FB58u;
    // 0x18fb58: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18fb5c: 0x8c63da70  lw          $v1, -0x2590($v1)
    ctx->pc = 0x18fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957680)));
    // 0x18fb60: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18fb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18fb64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FB64u;
    {
        const bool branch_taken_0x18fb64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fb64) {
            ctx->pc = 0x18FB78u;
            goto label_18fb78;
        }
    }
    ctx->pc = 0x18FB6Cu;
    // 0x18fb6c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x18fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x18fb70: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x18FB70u;
    {
        const bool branch_taken_0x18fb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB70u;
        // 0x18fb74: 0x3464ffff  ori         $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb70) {
            ctx->pc = 0x18FC48u;
            goto label_18fc48;
        }
    }
    ctx->pc = 0x18FB78u;
label_18fb78:
    // 0x18fb78: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18fb78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18fb7c: 0x3c034206  lui         $v1, 0x4206
    ctx->pc = 0x18fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16902 << 16));
    // 0x18fb80: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18fb80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18fb84: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x18fb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x18fb88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18fb88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18fb8c: 0x0  nop
    ctx->pc = 0x18fb8cu;
    // NOP
    // 0x18fb90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18fb90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18fb94: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x18FB94u;
    {
        const bool branch_taken_0x18fb94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18fb94) {
            ctx->pc = 0x18FBBCu;
            goto label_18fbbc;
        }
    }
    ctx->pc = 0x18FB9Cu;
    // 0x18fb9c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18fba0: 0x8c63da70  lw          $v1, -0x2590($v1)
    ctx->pc = 0x18fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957680)));
    // 0x18fba4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x18fba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x18fba8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FBA8u;
    {
        const bool branch_taken_0x18fba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fba8) {
            ctx->pc = 0x18FBBCu;
            goto label_18fbbc;
        }
    }
    ctx->pc = 0x18FBB0u;
    // 0x18fbb0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x18fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x18fbb4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x18FBB4u;
    {
        const bool branch_taken_0x18fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBB4u;
        // 0x18fbb8: 0x3464ffff  ori         $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fbb4) {
            ctx->pc = 0x18FC48u;
            goto label_18fc48;
        }
    }
    ctx->pc = 0x18FBBCu;
label_18fbbc:
    // 0x18fbbc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18fbc0: 0x2463db51  addiu       $v1, $v1, -0x24AF
    ctx->pc = 0x18fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957905));
    // 0x18fbc4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18fbc8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x18fbc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18fbcc: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FBCCu;
    {
        const bool branch_taken_0x18fbcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x18fbcc) {
            ctx->pc = 0x18FBE0u;
            goto label_18fbe0;
        }
    }
    ctx->pc = 0x18FBD4u;
    // 0x18fbd4: 0x3c030011  lui         $v1, 0x11
    ctx->pc = 0x18fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17 << 16));
    // 0x18fbd8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x18FBD8u;
    {
        const bool branch_taken_0x18fbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBD8u;
        // 0x18fbdc: 0x3464fd43  ori         $a0, $v1, 0xFD43 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64835);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fbd8) {
            ctx->pc = 0x18FC48u;
            goto label_18fc48;
        }
    }
    ctx->pc = 0x18FBE0u;
label_18fbe0:
    // 0x18fbe0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x18fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x18fbe4: 0x9063f35a  lbu         $v1, -0xCA6($v1)
    ctx->pc = 0x18fbe4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964058)));
    // 0x18fbe8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FBE8u;
    {
        const bool branch_taken_0x18fbe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fbe8) {
            ctx->pc = 0x18FBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FBE8u;
            // 0x18fbec: 0x3c0300fc  lui         $v1, 0xFC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)252 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FBFCu;
            goto label_18fbfc;
        }
    }
    ctx->pc = 0x18FBF0u;
    // 0x18fbf0: 0x3c030011  lui         $v1, 0x11
    ctx->pc = 0x18fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17 << 16));
    // 0x18fbf4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18FBF4u;
    {
        const bool branch_taken_0x18fbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBF4u;
        // 0x18fbf8: 0x3464fd43  ori         $a0, $v1, 0xFD43 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64835);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fbf4) {
            ctx->pc = 0x18FC48u;
            goto label_18fc48;
        }
    }
    ctx->pc = 0x18FBFCu;
label_18fbfc:
    // 0x18fbfc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18FBFCu;
    {
        const bool branch_taken_0x18fbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBFCu;
        // 0x18fc00: 0x3464b212  ori         $a0, $v1, 0xB212 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45586);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fbfc) {
            ctx->pc = 0x18FC48u;
            goto label_18fc48;
        }
    }
    ctx->pc = 0x18FC04u;
label_18fc04:
    // 0x18fc04: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18fc08: 0x2463db51  addiu       $v1, $v1, -0x24AF
    ctx->pc = 0x18fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957905));
    // 0x18fc0c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18fc10: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x18fc10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18fc14: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FC14u;
    {
        const bool branch_taken_0x18fc14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x18fc14) {
            ctx->pc = 0x18FC28u;
            goto label_18fc28;
        }
    }
    ctx->pc = 0x18FC1Cu;
    // 0x18fc1c: 0x3c030011  lui         $v1, 0x11
    ctx->pc = 0x18fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17 << 16));
    // 0x18fc20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18FC20u;
    {
        const bool branch_taken_0x18fc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC20u;
        // 0x18fc24: 0x3464fd43  ori         $a0, $v1, 0xFD43 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64835);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc20) {
            ctx->pc = 0x18FC48u;
            goto label_18fc48;
        }
    }
    ctx->pc = 0x18FC28u;
label_18fc28:
    // 0x18fc28: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x18fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x18fc2c: 0x9063f35a  lbu         $v1, -0xCA6($v1)
    ctx->pc = 0x18fc2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964058)));
    // 0x18fc30: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FC30u;
    {
        const bool branch_taken_0x18fc30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fc30) {
            ctx->pc = 0x18FC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FC30u;
            // 0x18fc34: 0x3c0300fc  lui         $v1, 0xFC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)252 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FC44u;
            goto label_18fc44;
        }
    }
    ctx->pc = 0x18FC38u;
    // 0x18fc38: 0x3c030011  lui         $v1, 0x11
    ctx->pc = 0x18fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17 << 16));
    // 0x18fc3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18FC3Cu;
    {
        const bool branch_taken_0x18fc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC3Cu;
        // 0x18fc40: 0x3464fd43  ori         $a0, $v1, 0xFD43 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64835);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc3c) {
            ctx->pc = 0x18FC48u;
            goto label_18fc48;
        }
    }
    ctx->pc = 0x18FC44u;
label_18fc44:
    // 0x18fc44: 0x3464b212  ori         $a0, $v1, 0xB212
    ctx->pc = 0x18fc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45586);
label_18fc48:
    // 0x18fc48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18fc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18fc4c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x18fc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18fc50: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x18fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x18fc54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18fc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fc58: 0x833825  or          $a3, $a0, $v1
    ctx->pc = 0x18fc58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18fc5c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x18fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x18fc60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18fc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18fc64: 0xafa7006c  sw          $a3, 0x6C($sp)
    ctx->pc = 0x18fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 7));
    // 0x18fc68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18fc68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18fc70: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x18fc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x18fc74: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x18fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x18fc78: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x18fc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x18fc7c: 0xafa7005c  sw          $a3, 0x5C($sp)
    ctx->pc = 0x18fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 7));
    // 0x18fc80: 0xafa7004c  sw          $a3, 0x4C($sp)
    ctx->pc = 0x18fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 7));
    // 0x18fc84: 0xafa7003c  sw          $a3, 0x3C($sp)
    ctx->pc = 0x18fc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 7));
    // 0x18fc88: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x18fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x18fc8c: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x18fc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x18fc90: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x18fc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x18fc94: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x18fc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x18fc98: 0xc0c12cc  jal         func_304B30
    ctx->pc = 0x18FC98u;
    SET_GPR_U32(ctx, 31, 0x18FCA0u);
    ctx->pc = 0x18FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FC98u;
    // 0x18fc9c: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304B30u, 0x18FC98u, 0x18FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCA0u;
label_18fca0:
    // 0x18fca0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18fca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18fca4:
    // 0x18fca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18fca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18fca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fcac: 0x3e00008  jr          $ra
    ctx->pc = 0x18FCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCACu;
        // 0x18fcb0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FCB4u;
    // 0x18fcb4: 0x0  nop
    ctx->pc = 0x18fcb4u;
    // NOP
    // 0x18fcb8: 0x0  nop
    ctx->pc = 0x18fcb8u;
    // NOP
    // 0x18fcbc: 0x0  nop
    ctx->pc = 0x18fcbcu;
    // NOP
    if (ctx->pc == 0x18fcbcu) { ctx->pc = 0x18fcc0u; }
}
