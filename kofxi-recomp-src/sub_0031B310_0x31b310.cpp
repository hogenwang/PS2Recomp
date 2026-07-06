#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031B310
// Address: 0x31b310 - 0x31c510
void sub_0031B310_0x31b310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B310_0x31b310");
#endif

    switch (ctx->pc) {
        case 0x31b4d8u: goto label_31b4d8;
        case 0x31b5e0u: goto label_31b5e0;
        case 0x31b68cu: goto label_31b68c;
        case 0x31b698u: goto label_31b698;
        case 0x31b6a8u: goto label_31b6a8;
        case 0x31b6b0u: goto label_31b6b0;
        case 0x31b6ccu: goto label_31b6cc;
        case 0x31b6f4u: goto label_31b6f4;
        case 0x31b718u: goto label_31b718;
        case 0x31b728u: goto label_31b728;
        case 0x31b730u: goto label_31b730;
        case 0x31b73cu: goto label_31b73c;
        case 0x31b760u: goto label_31b760;
        case 0x31b770u: goto label_31b770;
        case 0x31b778u: goto label_31b778;
        case 0x31b784u: goto label_31b784;
        case 0x31b7a8u: goto label_31b7a8;
        case 0x31b7b8u: goto label_31b7b8;
        case 0x31b7c0u: goto label_31b7c0;
        case 0x31b7ccu: goto label_31b7cc;
        case 0x31b7f0u: goto label_31b7f0;
        case 0x31b800u: goto label_31b800;
        case 0x31b808u: goto label_31b808;
        case 0x31b868u: goto label_31b868;
        case 0x31b878u: goto label_31b878;
        case 0x31b880u: goto label_31b880;
        case 0x31b88cu: goto label_31b88c;
        case 0x31b89cu: goto label_31b89c;
        case 0x31b8a4u: goto label_31b8a4;
        case 0x31b8b0u: goto label_31b8b0;
        case 0x31b8c0u: goto label_31b8c0;
        case 0x31b8c8u: goto label_31b8c8;
        case 0x31b8d4u: goto label_31b8d4;
        case 0x31b8e4u: goto label_31b8e4;
        case 0x31b8ecu: goto label_31b8ec;
        case 0x31b928u: goto label_31b928;
        case 0x31b930u: goto label_31b930;
        case 0x31b940u: goto label_31b940;
        case 0x31b94cu: goto label_31b94c;
        case 0x31b9a4u: goto label_31b9a4;
        case 0x31b9acu: goto label_31b9ac;
        case 0x31b9bcu: goto label_31b9bc;
        case 0x31b9c8u: goto label_31b9c8;
        case 0x31bd30u: goto label_31bd30;
        case 0x31bd44u: goto label_31bd44;
        case 0x31bd48u: goto label_31bd48;
        case 0x31bda0u: goto label_31bda0;
        case 0x31be8cu: goto label_31be8c;
        case 0x31be98u: goto label_31be98;
        case 0x31bea8u: goto label_31bea8;
        case 0x31beb0u: goto label_31beb0;
        case 0x31beccu: goto label_31becc;
        case 0x31bef4u: goto label_31bef4;
        case 0x31bf18u: goto label_31bf18;
        case 0x31bf28u: goto label_31bf28;
        case 0x31bf30u: goto label_31bf30;
        case 0x31bf3cu: goto label_31bf3c;
        case 0x31bf60u: goto label_31bf60;
        case 0x31bf70u: goto label_31bf70;
        case 0x31bf78u: goto label_31bf78;
        case 0x31bf84u: goto label_31bf84;
        case 0x31bfa8u: goto label_31bfa8;
        case 0x31bfb8u: goto label_31bfb8;
        case 0x31bfc0u: goto label_31bfc0;
        case 0x31bfccu: goto label_31bfcc;
        case 0x31bff0u: goto label_31bff0;
        case 0x31c000u: goto label_31c000;
        case 0x31c008u: goto label_31c008;
        case 0x31c0f0u: goto label_31c0f0;
        case 0x31c0f8u: goto label_31c0f8;
        case 0x31c108u: goto label_31c108;
        case 0x31c114u: goto label_31c114;
        case 0x31c170u: goto label_31c170;
        case 0x31c190u: goto label_31c190;
        case 0x31c4acu: goto label_31c4ac;
        case 0x31c4c0u: goto label_31c4c0;
        case 0x31c4c4u: goto label_31c4c4;
        default: break;
    }

    ctx->pc = 0x31b310u;

    // 0x31b310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31b310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31b314: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x31b314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x31b318: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31b318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31b31c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b31cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b320: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31b320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31b324: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31b324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31b328: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x31b328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31b32c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x31b32cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b330: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x31B330u;
    {
        const bool branch_taken_0x31b330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b330) {
            ctx->pc = 0x31B334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31B330u;
            // 0x31b334: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31B34Cu;
            goto label_31b34c;
        }
    }
    ctx->pc = 0x31B338u;
    // 0x31b338: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x31b338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b33c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31b33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b340: 0x450300a1  bc1tl       . + 4 + (0xA1 << 2)
    ctx->pc = 0x31B340u;
    {
        const bool branch_taken_0x31b340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b340) {
            ctx->pc = 0x31B344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31B340u;
            // 0x31b344: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31B5C8u;
            goto label_31b5c8;
        }
    }
    ctx->pc = 0x31B348u;
    // 0x31b348: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x31b348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
label_31b34c:
    // 0x31b34c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b34cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b350: 0x0  nop
    ctx->pc = 0x31b350u;
    // NOP
    // 0x31b354: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x31b354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b358: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x31B358u;
    {
        const bool branch_taken_0x31b358 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b358) {
            ctx->pc = 0x31B35Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31B358u;
            // 0x31b35c: 0xc4820004  lwc1        $f2, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x31B374u;
            goto label_31b374;
        }
    }
    ctx->pc = 0x31B360u;
    // 0x31b360: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x31b360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b364: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31b364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b368: 0x45000096  bc1f        . + 4 + (0x96 << 2)
    ctx->pc = 0x31B368u;
    {
        const bool branch_taken_0x31b368 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b368) {
            ctx->pc = 0x31B5C4u;
            goto label_31b5c4;
        }
    }
    ctx->pc = 0x31B370u;
    // 0x31b370: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x31b370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31b374:
    // 0x31b374: 0x3c03c3a2  lui         $v1, 0xC3A2
    ctx->pc = 0x31b374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50082 << 16));
    // 0x31b378: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b37c: 0x0  nop
    ctx->pc = 0x31b37cu;
    // NOP
    // 0x31b380: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x31b380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b384: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x31B384u;
    {
        const bool branch_taken_0x31b384 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b384) {
            ctx->pc = 0x31B388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31B384u;
            // 0x31b388: 0x3c0343a2  lui         $v1, 0x43A2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17314 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31B3A0u;
            goto label_31b3a0;
        }
    }
    ctx->pc = 0x31B38Cu;
    // 0x31b38c: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x31b38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b390: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31b390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b394: 0x4501008b  bc1t        . + 4 + (0x8B << 2)
    ctx->pc = 0x31B394u;
    {
        const bool branch_taken_0x31b394 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b394) {
            ctx->pc = 0x31B5C4u;
            goto label_31b5c4;
        }
    }
    ctx->pc = 0x31B39Cu;
    // 0x31b39c: 0x3c0343a2  lui         $v1, 0x43A2
    ctx->pc = 0x31b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17314 << 16));
label_31b3a0:
    // 0x31b3a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b3a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b3a4: 0x0  nop
    ctx->pc = 0x31b3a4u;
    // NOP
    // 0x31b3a8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x31b3a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b3ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31B3ACu;
    {
        const bool branch_taken_0x31b3ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b3ac) {
            ctx->pc = 0x31B3C4u;
            goto label_31b3c4;
        }
    }
    ctx->pc = 0x31B3B4u;
    // 0x31b3b4: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x31b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b3b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31b3b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b3bc: 0x45000081  bc1f        . + 4 + (0x81 << 2)
    ctx->pc = 0x31B3BCu;
    {
        const bool branch_taken_0x31b3bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b3bc) {
            ctx->pc = 0x31B5C4u;
            goto label_31b5c4;
        }
    }
    ctx->pc = 0x31B3C4u;
label_31b3c4:
    // 0x31b3c4: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31b3c8: 0x8c6329e0  lw          $v1, 0x29E0($v1)
    ctx->pc = 0x31b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x31b3cc: 0x28630190  slti        $v1, $v1, 0x190
    ctx->pc = 0x31b3ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x31b3d0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B3D0u;
    {
        const bool branch_taken_0x31b3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b3d0) {
            ctx->pc = 0x31B3E4u;
            goto label_31b3e4;
        }
    }
    ctx->pc = 0x31B3D8u;
    // 0x31b3d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b3dc: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x31b3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31b3e0: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x31b3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_31b3e4:
    // 0x31b3e4: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31b3e8: 0x3c084f00  lui         $t0, 0x4F00
    ctx->pc = 0x31b3e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20224 << 16));
    // 0x31b3ec: 0x8c6b29e0  lw          $t3, 0x29E0($v1)
    ctx->pc = 0x31b3ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x31b3f0: 0x3c09447a  lui         $t1, 0x447A
    ctx->pc = 0x31b3f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17530 << 16));
    // 0x31b3f4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x31b3f4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b3f8: 0x3c0a01da  lui         $t2, 0x1DA
    ctx->pc = 0x31b3f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)474 << 16));
    // 0x31b3fc: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x31b3fcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31b400: 0x254a4df0  addiu       $t2, $t2, 0x4DF0
    ctx->pc = 0x31b400u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 19952));
    // 0x31b404: 0xb40c0  sll         $t0, $t3, 3
    ctx->pc = 0x31b404u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x31b408: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31b408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31b40c: 0x10b4823  subu        $t1, $t0, $t3
    ctx->pc = 0x31b40cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x31b410: 0x25680001  addiu       $t0, $t3, 0x1
    ctx->pc = 0x31b410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x31b414: 0xac6829e0  sw          $t0, 0x29E0($v1)
    ctx->pc = 0x31b414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10720), GPR_U32(ctx, 8));
    // 0x31b418: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x31b418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31b41c: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x31b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x31b420: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x31b420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x31b424: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x31b424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31b428: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x31b428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x31b42c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31b42cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b430: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31B430u;
    {
        const bool branch_taken_0x31b430 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31B434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B430u;
            // 0x31b434: 0x1438021  addu        $s0, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b430) {
            ctx->pc = 0x31B448u;
            goto label_31b448;
        }
    }
    ctx->pc = 0x31B438u;
    // 0x31b438: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b438u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31b43c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x31b43cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x31b440: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31B440u;
    {
        const bool branch_taken_0x31b440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B440u;
            // 0x31b444: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b440) {
            ctx->pc = 0x31B464u;
            goto label_31b464;
        }
    }
    ctx->pc = 0x31B448u;
label_31b448:
    // 0x31b448: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31b448u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31b44c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31b450: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b450u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31b454: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x31b454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x31b458: 0x0  nop
    ctx->pc = 0x31b458u;
    // NOP
    // 0x31b45c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x31b45cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x31b460: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31b460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_31b464:
    // 0x31b464: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x31b464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x31b468: 0x14a00024  bnez        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x31B468u;
    {
        const bool branch_taken_0x31b468 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B468u;
            // 0x31b46c: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b468) {
            ctx->pc = 0x31B4FCu;
            goto label_31b4fc;
        }
    }
    ctx->pc = 0x31B470u;
    // 0x31b470: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x31b470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31b474: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x31b474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x31b478: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x31b478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x31b47c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x31b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x31b480: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x31b480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x31b484: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x31b484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x31b488: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B488u;
    {
        const bool branch_taken_0x31b488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B488u;
            // 0x31b48c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b488) {
            ctx->pc = 0x31B498u;
            goto label_31b498;
        }
    }
    ctx->pc = 0x31B490u;
    // 0x31b490: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31B490u;
    {
        const bool branch_taken_0x31b490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B490u;
            // 0x31b494: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b490) {
            ctx->pc = 0x31B49Cu;
            goto label_31b49c;
        }
    }
    ctx->pc = 0x31B498u;
label_31b498:
    // 0x31b498: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31b498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b49c:
    // 0x31b49c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x31b49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x31b4a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31b4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4a4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x31b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x31b4a8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x31b4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x31b4ac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x31b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x31b4b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x31b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x31b4b4: 0x28e02  srl         $s1, $v0, 24
    ctx->pc = 0x31b4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x31b4b8: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x31b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x31b4bc: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x31b4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x31b4c0: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x31b4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x31b4c4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x31b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x31b4c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x31b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x31b4cc: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x31b4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x31b4d0: 0xc049c48  jal         func_127120
    ctx->pc = 0x31B4D0u;
    SET_GPR_U32(ctx, 31, 0x31B4D8u);
    ctx->pc = 0x31B4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B4D0u;
            // 0x31b4d4: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4D8u; }
        if (ctx->pc != 0x31B4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4D8u; }
        if (ctx->pc != 0x31B4D8u) { return; }
    }
    ctx->pc = 0x31B4D8u;
label_31b4d8:
    // 0x31b4d8: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x31b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x31b4dc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x31b4dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31b4e0: 0x2463b5e0  addiu       $v1, $v1, -0x4A20
    ctx->pc = 0x31b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948320));
    // 0x31b4e4: 0x14200037  bnez        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x31B4E4u;
    {
        const bool branch_taken_0x31b4e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B4E4u;
            // 0x31b4e8: 0xae030114  sw          $v1, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b4e4) {
            ctx->pc = 0x31B5C4u;
            goto label_31b5c4;
        }
    }
    ctx->pc = 0x31B4ECu;
    // 0x31b4ec: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x31b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x31b4f0: 0x2463bda0  addiu       $v1, $v1, -0x4260
    ctx->pc = 0x31b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950304));
    // 0x31b4f4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x31B4F4u;
    {
        const bool branch_taken_0x31b4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B4F4u;
            // 0x31b4f8: 0xae030114  sw          $v1, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b4f4) {
            ctx->pc = 0x31B5C4u;
            goto label_31b5c4;
        }
    }
    ctx->pc = 0x31B4FCu;
label_31b4fc:
    // 0x31b4fc: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x31b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x31b500: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x31b500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31b504: 0x24634180  addiu       $v1, $v1, 0x4180
    ctx->pc = 0x31b504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16768));
    // 0x31b508: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x31b508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x31b50c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x31b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x31b510: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x31b510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x31b514: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x31b514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b518: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31b518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31b51c: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x31b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x31b520: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x31b520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31b524: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x31b524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x31b528: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x31b528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b52c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b52cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b530: 0x0  nop
    ctx->pc = 0x31b530u;
    // NOP
    // 0x31b534: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31b534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31b538: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x31b538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x31b53c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x31b53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b540: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x31b540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x31b544: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x31b544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x31b548: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x31b548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x31b54c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x31b54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b550: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x31b550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31b554: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x31b554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x31b558: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x31b558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b55c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31b55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31b560: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x31b560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x31b564: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x31b564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b568: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x31b568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x31b56c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x31b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x31b570: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x31b570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x31b574: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x31b574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b578: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x31b578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31b57c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x31b57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x31b580: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x31b580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b584: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31b584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31b588: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x31b588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x31b58c: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x31b58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b590: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x31b590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x31b594: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x31b594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x31b598: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x31b598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x31b59c: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x31b59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b5a0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x31b5a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31b5a4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x31b5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x31b5a8: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x31b5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b5ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31b5acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31b5b0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x31b5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x31b5b4: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x31b5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b5b8: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x31b5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x31b5bc: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x31b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x31b5c0: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x31b5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_31b5c4:
    // 0x31b5c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31b5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31b5c8:
    // 0x31b5c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31b5c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b5cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31b5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x31B5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B5D0u;
            // 0x31b5d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31B5D8u;
    // 0x31b5d8: 0x0  nop
    ctx->pc = 0x31b5d8u;
    // NOP
    // 0x31b5dc: 0x0  nop
    ctx->pc = 0x31b5dcu;
    // NOP
label_31b5e0:
    // 0x31b5e0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x31b5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x31b5e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31b5e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x31b5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x31b5ec: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x31b5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x31b5f0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x31b5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x31b5f4: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x31b5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x31b5f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31b5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x31b5fc: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x31b5fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b600: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31b600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31b604: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31b604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31b608: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31b608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31b60c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31b60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31b610: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31b610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31b614: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31b614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31b618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31b618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31b61c: 0x27d10010  addiu       $s1, $fp, 0x10
    ctx->pc = 0x31b61cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x31b620: 0x8c880024  lw          $t0, 0x24($a0)
    ctx->pc = 0x31b620u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x31b624: 0x9043d9c8  lbu         $v1, -0x2638($v0)
    ctx->pc = 0x31b624u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957512)));
    // 0x31b628: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x31b628u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31b62c: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x31b62cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x31b630: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x31b630u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31b634: 0x1061024  and         $v0, $t0, $a2
    ctx->pc = 0x31b634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x31b638: 0x73e02  srl         $a3, $a3, 24
    ctx->pc = 0x31b638u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x31b63c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x31b63cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x31b640: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x31b640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31b644: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31b644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31b648: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x31b648u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x31b64c: 0x68043  sra         $s0, $a2, 1
    ctx->pc = 0x31b64cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 1));
    // 0x31b650: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x31b650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x31b654: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x31b654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x31b658: 0x3103ff00  andi        $v1, $t0, 0xFF00
    ctx->pc = 0x31b658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x31b65c: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x31b65cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x31b660: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x31b660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x31b664: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31b664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31b668: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31b668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31b66c: 0x6b043  sra         $s6, $a2, 1
    ctx->pc = 0x31b66cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 6), 1));
    // 0x31b670: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31B670u;
    {
        const bool branch_taken_0x31b670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B670u;
            // 0x31b674: 0x3b843  sra         $s7, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b670) {
            ctx->pc = 0x31B6BCu;
            goto label_31b6bc;
        }
    }
    ctx->pc = 0x31B678u;
    // 0x31b678: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31b678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31b67c: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x31b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x31b680: 0xc44cd9c0  lwc1        $f12, -0x2640($v0)
    ctx->pc = 0x31b680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31b684: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31B684u;
    SET_GPR_U32(ctx, 31, 0x31B68Cu);
    ctx->pc = 0x31B688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B684u;
            // 0x31b688: 0x3803c  dsll32      $s0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B68Cu; }
        if (ctx->pc != 0x31B68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B68Cu; }
        if (ctx->pc != 0x31B68Cu) { return; }
    }
    ctx->pc = 0x31B68Cu;
label_31b68c:
    // 0x31b68c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b690: 0xc048a5c  jal         func_122970
    ctx->pc = 0x31B690u;
    SET_GPR_U32(ctx, 31, 0x31B698u);
    ctx->pc = 0x31B694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B690u;
            // 0x31b694: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (runtime->hasFunction(0x122970u)) {
        auto targetFn = runtime->lookupFunction(0x122970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B698u; }
        if (ctx->pc != 0x31B698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122970_0x122970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B698u; }
        if (ctx->pc != 0x31B698u) { return; }
    }
    ctx->pc = 0x31B698u;
label_31b698:
    // 0x31b698: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x31b698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
    // 0x31b69c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b6a0: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31B6A0u;
    SET_GPR_U32(ctx, 31, 0x31B6A8u);
    ctx->pc = 0x31B6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B6A0u;
            // 0x31b6a4: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6A8u; }
        if (ctx->pc != 0x31B6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6A8u; }
        if (ctx->pc != 0x31B6A8u) { return; }
    }
    ctx->pc = 0x31B6A8u;
label_31b6a8:
    // 0x31b6a8: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31B6A8u;
    SET_GPR_U32(ctx, 31, 0x31B6B0u);
    ctx->pc = 0x31B6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B6A8u;
            // 0x31b6ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6B0u; }
        if (ctx->pc != 0x31B6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6B0u; }
        if (ctx->pc != 0x31B6B0u) { return; }
    }
    ctx->pc = 0x31B6B0u;
label_31b6b0:
    // 0x31b6b0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x31b6b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b6b4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x31b6b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b6b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31b6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b6bc:
    // 0x31b6bc: 0x27a4011c  addiu       $a0, $sp, 0x11C
    ctx->pc = 0x31b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x31b6c0: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x31b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x31b6c4: 0xc0c0d2c  jal         func_3034B0
    ctx->pc = 0x31B6C4u;
    SET_GPR_U32(ctx, 31, 0x31B6CCu);
    ctx->pc = 0x31B6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B6C4u;
            // 0x31b6c8: 0x27a60114  addiu       $a2, $sp, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3034B0u;
    if (runtime->hasFunction(0x3034B0u)) {
        auto targetFn = runtime->lookupFunction(0x3034B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6CCu; }
        if (ctx->pc != 0x31B6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003034B0_0x3034b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6CCu; }
        if (ctx->pc != 0x31B6CCu) { return; }
    }
    ctx->pc = 0x31B6CCu;
label_31b6cc:
    // 0x31b6cc: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x31b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x31b6d0: 0x3442be77  ori         $v0, $v0, 0xBE77
    ctx->pc = 0x31b6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48759);
    // 0x31b6d4: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x31b6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31b6d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b6dc: 0x0  nop
    ctx->pc = 0x31b6dcu;
    // NOP
    // 0x31b6e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31b6e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b6e4: 0x4502004a  bc1fl       . + 4 + (0x4A << 2)
    ctx->pc = 0x31B6E4u;
    {
        const bool branch_taken_0x31b6e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b6e4) {
            ctx->pc = 0x31B6E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31B6E4u;
            // 0x31b6e8: 0xc6200004  lwc1        $f0, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x31B810u;
            goto label_31b810;
        }
    }
    ctx->pc = 0x31B6ECu;
    // 0x31b6ec: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31B6ECu;
    SET_GPR_U32(ctx, 31, 0x31B6F4u);
    ctx->pc = 0x31B6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B6ECu;
            // 0x31b6f0: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6F4u; }
        if (ctx->pc != 0x31B6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6F4u; }
        if (ctx->pc != 0x31B6F4u) { return; }
    }
    ctx->pc = 0x31B6F4u;
label_31b6f4:
    // 0x31b6f4: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x31b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x31b6f8: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x31b6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x31b6fc: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x31b6fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x31b700: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31b700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31b704: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31b704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31b708: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x31b708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x31b70c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x31b70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31b710: 0xc048a5c  jal         func_122970
    ctx->pc = 0x31B710u;
    SET_GPR_U32(ctx, 31, 0x31B718u);
    ctx->pc = 0x31B714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B710u;
            // 0x31b714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (runtime->hasFunction(0x122970u)) {
        auto targetFn = runtime->lookupFunction(0x122970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B718u; }
        if (ctx->pc != 0x31B718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122970_0x122970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B718u; }
        if (ctx->pc != 0x31B718u) { return; }
    }
    ctx->pc = 0x31B718u;
label_31b718:
    // 0x31b718: 0x3c034030  lui         $v1, 0x4030
    ctx->pc = 0x31b718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16432 << 16));
    // 0x31b71c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b720: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31B720u;
    SET_GPR_U32(ctx, 31, 0x31B728u);
    ctx->pc = 0x31B724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B720u;
            // 0x31b724: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B728u; }
        if (ctx->pc != 0x31B728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B728u; }
        if (ctx->pc != 0x31B728u) { return; }
    }
    ctx->pc = 0x31B728u;
label_31b728:
    // 0x31b728: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31B728u;
    SET_GPR_U32(ctx, 31, 0x31B730u);
    ctx->pc = 0x31B72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B728u;
            // 0x31b72c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B730u; }
        if (ctx->pc != 0x31B730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B730u; }
        if (ctx->pc != 0x31B730u) { return; }
    }
    ctx->pc = 0x31B730u;
label_31b730:
    // 0x31b730: 0xc62c0054  lwc1        $f12, 0x54($s1)
    ctx->pc = 0x31b730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31b734: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31B734u;
    SET_GPR_U32(ctx, 31, 0x31B73Cu);
    ctx->pc = 0x31B738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B734u;
            // 0x31b738: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B73Cu; }
        if (ctx->pc != 0x31B73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B73Cu; }
        if (ctx->pc != 0x31B73Cu) { return; }
    }
    ctx->pc = 0x31B73Cu;
label_31b73c:
    // 0x31b73c: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x31b73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x31b740: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x31b740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x31b744: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x31b744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x31b748: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31b748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31b74c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31b74cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31b750: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x31b750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x31b754: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x31b754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31b758: 0xc048a46  jal         func_122918
    ctx->pc = 0x31B758u;
    SET_GPR_U32(ctx, 31, 0x31B760u);
    ctx->pc = 0x31B75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B758u;
            // 0x31b75c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (runtime->hasFunction(0x122918u)) {
        auto targetFn = runtime->lookupFunction(0x122918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B760u; }
        if (ctx->pc != 0x31B760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122918_0x122918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B760u; }
        if (ctx->pc != 0x31B760u) { return; }
    }
    ctx->pc = 0x31B760u;
label_31b760:
    // 0x31b760: 0x3c034030  lui         $v1, 0x4030
    ctx->pc = 0x31b760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16432 << 16));
    // 0x31b764: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b768: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31B768u;
    SET_GPR_U32(ctx, 31, 0x31B770u);
    ctx->pc = 0x31B76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B768u;
            // 0x31b76c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B770u; }
        if (ctx->pc != 0x31B770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B770u; }
        if (ctx->pc != 0x31B770u) { return; }
    }
    ctx->pc = 0x31B770u;
label_31b770:
    // 0x31b770: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31B770u;
    SET_GPR_U32(ctx, 31, 0x31B778u);
    ctx->pc = 0x31B774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B770u;
            // 0x31b774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B778u; }
        if (ctx->pc != 0x31B778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B778u; }
        if (ctx->pc != 0x31B778u) { return; }
    }
    ctx->pc = 0x31B778u;
label_31b778:
    // 0x31b778: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x31b778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31b77c: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31B77Cu;
    SET_GPR_U32(ctx, 31, 0x31B784u);
    ctx->pc = 0x31B780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B77Cu;
            // 0x31b780: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B784u; }
        if (ctx->pc != 0x31B784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B784u; }
        if (ctx->pc != 0x31B784u) { return; }
    }
    ctx->pc = 0x31B784u;
label_31b784:
    // 0x31b784: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x31b784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x31b788: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x31b788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x31b78c: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x31b78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x31b790: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31b790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31b794: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31b794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31b798: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x31b798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x31b79c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x31b79cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31b7a0: 0xc048a5c  jal         func_122970
    ctx->pc = 0x31B7A0u;
    SET_GPR_U32(ctx, 31, 0x31B7A8u);
    ctx->pc = 0x31B7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B7A0u;
            // 0x31b7a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (runtime->hasFunction(0x122970u)) {
        auto targetFn = runtime->lookupFunction(0x122970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7A8u; }
        if (ctx->pc != 0x31B7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122970_0x122970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7A8u; }
        if (ctx->pc != 0x31B7A8u) { return; }
    }
    ctx->pc = 0x31B7A8u;
label_31b7a8:
    // 0x31b7a8: 0x3c034030  lui         $v1, 0x4030
    ctx->pc = 0x31b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16432 << 16));
    // 0x31b7ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b7b0: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31B7B0u;
    SET_GPR_U32(ctx, 31, 0x31B7B8u);
    ctx->pc = 0x31B7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B7B0u;
            // 0x31b7b4: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7B8u; }
        if (ctx->pc != 0x31B7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7B8u; }
        if (ctx->pc != 0x31B7B8u) { return; }
    }
    ctx->pc = 0x31B7B8u;
label_31b7b8:
    // 0x31b7b8: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31B7B8u;
    SET_GPR_U32(ctx, 31, 0x31B7C0u);
    ctx->pc = 0x31B7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B7B8u;
            // 0x31b7bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7C0u; }
        if (ctx->pc != 0x31B7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7C0u; }
        if (ctx->pc != 0x31B7C0u) { return; }
    }
    ctx->pc = 0x31B7C0u;
label_31b7c0:
    // 0x31b7c0: 0xc62c0058  lwc1        $f12, 0x58($s1)
    ctx->pc = 0x31b7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31b7c4: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31B7C4u;
    SET_GPR_U32(ctx, 31, 0x31B7CCu);
    ctx->pc = 0x31B7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B7C4u;
            // 0x31b7c8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7CCu; }
        if (ctx->pc != 0x31B7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7CCu; }
        if (ctx->pc != 0x31B7CCu) { return; }
    }
    ctx->pc = 0x31B7CCu;
label_31b7cc:
    // 0x31b7cc: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x31b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x31b7d0: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x31b7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x31b7d4: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x31b7d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x31b7d8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31b7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31b7dc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31b7dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31b7e0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x31b7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x31b7e4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x31b7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31b7e8: 0xc048a46  jal         func_122918
    ctx->pc = 0x31B7E8u;
    SET_GPR_U32(ctx, 31, 0x31B7F0u);
    ctx->pc = 0x31B7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B7E8u;
            // 0x31b7ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (runtime->hasFunction(0x122918u)) {
        auto targetFn = runtime->lookupFunction(0x122918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7F0u; }
        if (ctx->pc != 0x31B7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122918_0x122918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7F0u; }
        if (ctx->pc != 0x31B7F0u) { return; }
    }
    ctx->pc = 0x31B7F0u;
label_31b7f0:
    // 0x31b7f0: 0x3c034030  lui         $v1, 0x4030
    ctx->pc = 0x31b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16432 << 16));
    // 0x31b7f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b7f8: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31B7F8u;
    SET_GPR_U32(ctx, 31, 0x31B800u);
    ctx->pc = 0x31B7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B7F8u;
            // 0x31b7fc: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B800u; }
        if (ctx->pc != 0x31B800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B800u; }
        if (ctx->pc != 0x31B800u) { return; }
    }
    ctx->pc = 0x31B800u;
label_31b800:
    // 0x31b800: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31B800u;
    SET_GPR_U32(ctx, 31, 0x31B808u);
    ctx->pc = 0x31B804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B800u;
            // 0x31b804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B808u; }
        if (ctx->pc != 0x31B808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B808u; }
        if (ctx->pc != 0x31B808u) { return; }
    }
    ctx->pc = 0x31B808u;
label_31b808:
    // 0x31b808: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31B808u;
    {
        const bool branch_taken_0x31b808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B808u;
            // 0x31b80c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b808) {
            ctx->pc = 0x31B860u;
            goto label_31b860;
        }
    }
    ctx->pc = 0x31B810u;
label_31b810:
    // 0x31b810: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x31b810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x31b814: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x31b814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31b818: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x31b818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31b81c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x31b81cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x31b820: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b820u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31b824: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x31b824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31b828: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x31b828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x31b82c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x31b82cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x31b830: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x31b830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b834: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x31b834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x31b838: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x31b838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x31b83c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b83cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x31b840: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b840u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31b844: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x31b844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31b848: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b848u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31b84c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x31b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x31b850: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x31b850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31b854: 0x0  nop
    ctx->pc = 0x31b854u;
    // NOP
    // 0x31b858: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x31b858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x31b85c: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x31b85cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_31b860:
    // 0x31b860: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31B860u;
    SET_GPR_U32(ctx, 31, 0x31B868u);
    ctx->pc = 0x31B864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B860u;
            // 0x31b864: 0xc62c000c  lwc1        $f12, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B868u; }
        if (ctx->pc != 0x31B868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B868u; }
        if (ctx->pc != 0x31B868u) { return; }
    }
    ctx->pc = 0x31B868u;
label_31b868:
    // 0x31b868: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x31b868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x31b86c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b870: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31B870u;
    SET_GPR_U32(ctx, 31, 0x31B878u);
    ctx->pc = 0x31B874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B870u;
            // 0x31b874: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B878u; }
        if (ctx->pc != 0x31B878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B878u; }
        if (ctx->pc != 0x31B878u) { return; }
    }
    ctx->pc = 0x31B878u;
label_31b878:
    // 0x31b878: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31B878u;
    SET_GPR_U32(ctx, 31, 0x31B880u);
    ctx->pc = 0x31B87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B878u;
            // 0x31b87c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B880u; }
        if (ctx->pc != 0x31B880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B880u; }
        if (ctx->pc != 0x31B880u) { return; }
    }
    ctx->pc = 0x31B880u;
label_31b880:
    // 0x31b880: 0xc62c0060  lwc1        $f12, 0x60($s1)
    ctx->pc = 0x31b880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31b884: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31B884u;
    SET_GPR_U32(ctx, 31, 0x31B88Cu);
    ctx->pc = 0x31B888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B884u;
            // 0x31b888: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B88Cu; }
        if (ctx->pc != 0x31B88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B88Cu; }
        if (ctx->pc != 0x31B88Cu) { return; }
    }
    ctx->pc = 0x31B88Cu;
label_31b88c:
    // 0x31b88c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x31b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x31b890: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b894: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31B894u;
    SET_GPR_U32(ctx, 31, 0x31B89Cu);
    ctx->pc = 0x31B898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B894u;
            // 0x31b898: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B89Cu; }
        if (ctx->pc != 0x31B89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B89Cu; }
        if (ctx->pc != 0x31B89Cu) { return; }
    }
    ctx->pc = 0x31B89Cu;
label_31b89c:
    // 0x31b89c: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31B89Cu;
    SET_GPR_U32(ctx, 31, 0x31B8A4u);
    ctx->pc = 0x31B8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B89Cu;
            // 0x31b8a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B8A4u; }
        if (ctx->pc != 0x31B8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B8A4u; }
        if (ctx->pc != 0x31B8A4u) { return; }
    }
    ctx->pc = 0x31B8A4u;
label_31b8a4:
    // 0x31b8a4: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x31b8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31b8a8: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31B8A8u;
    SET_GPR_U32(ctx, 31, 0x31B8B0u);
    ctx->pc = 0x31B8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B8A8u;
            // 0x31b8ac: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B8B0u; }
        if (ctx->pc != 0x31B8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B8B0u; }
        if (ctx->pc != 0x31B8B0u) { return; }
    }
    ctx->pc = 0x31B8B0u;
label_31b8b0:
    // 0x31b8b0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x31b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x31b8b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b8b8: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31B8B8u;
    SET_GPR_U32(ctx, 31, 0x31B8C0u);
    ctx->pc = 0x31B8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B8B8u;
            // 0x31b8bc: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B8C0u; }
        if (ctx->pc != 0x31B8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B8C0u; }
        if (ctx->pc != 0x31B8C0u) { return; }
    }
    ctx->pc = 0x31B8C0u;
label_31b8c0:
    // 0x31b8c0: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31B8C0u;
    SET_GPR_U32(ctx, 31, 0x31B8C8u);
    ctx->pc = 0x31B8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B8C0u;
            // 0x31b8c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B8C8u; }
        if (ctx->pc != 0x31B8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B8C8u; }
        if (ctx->pc != 0x31B8C8u) { return; }
    }
    ctx->pc = 0x31B8C8u;
label_31b8c8:
    // 0x31b8c8: 0xc62c0064  lwc1        $f12, 0x64($s1)
    ctx->pc = 0x31b8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31b8cc: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31B8CCu;
    SET_GPR_U32(ctx, 31, 0x31B8D4u);
    ctx->pc = 0x31B8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B8CCu;
            // 0x31b8d0: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B8D4u; }
        if (ctx->pc != 0x31B8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B8D4u; }
        if (ctx->pc != 0x31B8D4u) { return; }
    }
    ctx->pc = 0x31B8D4u;
label_31b8d4:
    // 0x31b8d4: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x31b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x31b8d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b8dc: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31B8DCu;
    SET_GPR_U32(ctx, 31, 0x31B8E4u);
    ctx->pc = 0x31B8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B8DCu;
            // 0x31b8e0: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B8E4u; }
        if (ctx->pc != 0x31B8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B8E4u; }
        if (ctx->pc != 0x31B8E4u) { return; }
    }
    ctx->pc = 0x31B8E4u;
label_31b8e4:
    // 0x31b8e4: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31B8E4u;
    SET_GPR_U32(ctx, 31, 0x31B8ECu);
    ctx->pc = 0x31B8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B8E4u;
            // 0x31b8e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B8ECu; }
        if (ctx->pc != 0x31B8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B8ECu; }
        if (ctx->pc != 0x31B8ECu) { return; }
    }
    ctx->pc = 0x31B8ECu;
label_31b8ec:
    // 0x31b8ec: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x31b8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x31b8f0: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31b8f4: 0x8c424780  lw          $v0, 0x4780($v0)
    ctx->pc = 0x31b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18304)));
    // 0x31b8f8: 0x12420016  beq         $s2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x31B8F8u;
    {
        const bool branch_taken_0x31b8f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B8F8u;
            // 0x31b8fc: 0x8fd1000c  lw          $s1, 0xC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8f8) {
            ctx->pc = 0x31B954u;
            goto label_31b954;
        }
    }
    ctx->pc = 0x31B900u;
    // 0x31b900: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31b900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31b904: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x31b904u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31b908: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x31b908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x31b90c: 0x24053e80  addiu       $a1, $zero, 0x3E80
    ctx->pc = 0x31b90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
    // 0x31b910: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31b910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b914: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x31b914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b918: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31b918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b91c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31b91cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b920: 0xc040532  jal         func_1014C8
    ctx->pc = 0x31B920u;
    SET_GPR_U32(ctx, 31, 0x31B928u);
    ctx->pc = 0x31B924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B920u;
            // 0x31b924: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B928u; }
        if (ctx->pc != 0x31B928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B928u; }
        if (ctx->pc != 0x31B928u) { return; }
    }
    ctx->pc = 0x31B928u;
label_31b928:
    // 0x31b928: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31B928u;
    SET_GPR_U32(ctx, 31, 0x31B930u);
    ctx->pc = 0x31B92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B928u;
            // 0x31b92c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B930u; }
        if (ctx->pc != 0x31B930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B930u; }
        if (ctx->pc != 0x31B930u) { return; }
    }
    ctx->pc = 0x31B930u;
label_31b930:
    // 0x31b930: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31b930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31b934: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31b934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b938: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x31B938u;
    SET_GPR_U32(ctx, 31, 0x31B940u);
    ctx->pc = 0x31B93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B938u;
            // 0x31b93c: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B940u; }
        if (ctx->pc != 0x31B940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B940u; }
        if (ctx->pc != 0x31B940u) { return; }
    }
    ctx->pc = 0x31B940u;
label_31b940:
    // 0x31b940: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31b940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b944: 0xc040454  jal         func_101150
    ctx->pc = 0x31B944u;
    SET_GPR_U32(ctx, 31, 0x31B94Cu);
    ctx->pc = 0x31B948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B944u;
            // 0x31b948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B94Cu; }
        if (ctx->pc != 0x31B94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B94Cu; }
        if (ctx->pc != 0x31B94Cu) { return; }
    }
    ctx->pc = 0x31B94Cu;
label_31b94c:
    // 0x31b94c: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31b950: 0xac524780  sw          $s2, 0x4780($v0)
    ctx->pc = 0x31b950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18304), GPR_U32(ctx, 18));
label_31b954:
    // 0x31b954: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31b954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31b958: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x31b958u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x31b95c: 0x24424790  addiu       $v0, $v0, 0x4790
    ctx->pc = 0x31b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18320));
    // 0x31b960: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x31b960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31b964: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31b964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31b968: 0x12620018  beq         $s3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x31B968u;
    {
        const bool branch_taken_0x31b968 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x31b968) {
            ctx->pc = 0x31B9CCu;
            goto label_31b9cc;
        }
    }
    ctx->pc = 0x31B970u;
    // 0x31b970: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31b970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31b974: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31b974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31b978: 0x244237b0  addiu       $v0, $v0, 0x37B0
    ctx->pc = 0x31b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14256));
    // 0x31b97c: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x31b97cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x31b980: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31b980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31b984: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x31b984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x31b988: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x31b988u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31b98c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x31b98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31b990: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x31b990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x31b994: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31b994u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b998: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31b998u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b99c: 0xc040532  jal         func_1014C8
    ctx->pc = 0x31B99Cu;
    SET_GPR_U32(ctx, 31, 0x31B9A4u);
    ctx->pc = 0x31B9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B99Cu;
            // 0x31b9a0: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9A4u; }
        if (ctx->pc != 0x31B9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9A4u; }
        if (ctx->pc != 0x31B9A4u) { return; }
    }
    ctx->pc = 0x31B9A4u;
label_31b9a4:
    // 0x31b9a4: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31B9A4u;
    SET_GPR_U32(ctx, 31, 0x31B9ACu);
    ctx->pc = 0x31B9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B9A4u;
            // 0x31b9a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9ACu; }
        if (ctx->pc != 0x31B9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9ACu; }
        if (ctx->pc != 0x31B9ACu) { return; }
    }
    ctx->pc = 0x31B9ACu;
label_31b9ac:
    // 0x31b9ac: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31b9b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31b9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b9b4: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x31B9B4u;
    SET_GPR_U32(ctx, 31, 0x31B9BCu);
    ctx->pc = 0x31B9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B9B4u;
            // 0x31b9b8: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9BCu; }
        if (ctx->pc != 0x31B9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9BCu; }
        if (ctx->pc != 0x31B9BCu) { return; }
    }
    ctx->pc = 0x31B9BCu;
label_31b9bc:
    // 0x31b9bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31b9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b9c0: 0xc040454  jal         func_101150
    ctx->pc = 0x31B9C0u;
    SET_GPR_U32(ctx, 31, 0x31B9C8u);
    ctx->pc = 0x31B9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B9C0u;
            // 0x31b9c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9C8u; }
        if (ctx->pc != 0x31B9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B9C8u; }
        if (ctx->pc != 0x31B9C8u) { return; }
    }
    ctx->pc = 0x31B9C8u;
label_31b9c8:
    // 0x31b9c8: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x31b9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_31b9cc:
    // 0x31b9cc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31b9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31b9d0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x31b9d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31b9d4: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x31b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x31b9d8: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31b9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31b9dc: 0xaca40370  sw          $a0, 0x370($a1)
    ctx->pc = 0x31b9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 880), GPR_U32(ctx, 4));
    // 0x31b9e0: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x31b9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x31b9e4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x31b9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x31b9e8: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x31b9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b9ec: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x31b9ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31b9f0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x31b9f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31b9f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x31b9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31b9f8: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x31b9f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31b9fc: 0xa73825  or          $a3, $a1, $a3
    ctx->pc = 0x31b9fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x31ba00: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x31ba00u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x31ba04: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x31ba04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31ba08: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x31ba08u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x31ba0c: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x31ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x31ba10: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31ba14: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31ba14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31ba18: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x31ba18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x31ba1c: 0x24a537b0  addiu       $a1, $a1, 0x37B0
    ctx->pc = 0x31ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14256));
    // 0x31ba20: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x31ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x31ba24: 0xb13821  addu        $a3, $a1, $s1
    ctx->pc = 0x31ba24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x31ba28: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x31ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x31ba2c: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x31ba2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31ba30: 0x3c052017  lui         $a1, 0x2017
    ctx->pc = 0x31ba30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8215 << 16));
    // 0x31ba34: 0x34a5d006  ori         $a1, $a1, 0xD006
    ctx->pc = 0x31ba34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53254);
    // 0x31ba38: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x31ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x31ba3c: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x31ba3cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x31ba40: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x31ba40u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x31ba44: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x31ba44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31ba48: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x31ba48u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x31ba4c: 0x3c056532  lui         $a1, 0x6532
    ctx->pc = 0x31ba4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25906 << 16));
    // 0x31ba50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31ba54: 0xa73825  or          $a3, $a1, $a3
    ctx->pc = 0x31ba54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x31ba58: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x31ba58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x31ba5c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x31ba5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31ba60: 0xfc870020  sd          $a3, 0x20($a0)
    ctx->pc = 0x31ba60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 7));
    // 0x31ba64: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x31ba64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31ba68: 0xfc850028  sd          $a1, 0x28($a0)
    ctx->pc = 0x31ba68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 5));
    // 0x31ba6c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x31ba6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31ba70: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x31ba70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x31ba74: 0x3c0560ab  lui         $a1, 0x60AB
    ctx->pc = 0x31ba74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24747 << 16));
    // 0x31ba78: 0xfc890038  sd          $t1, 0x38($a0)
    ctx->pc = 0x31ba78u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 9));
    // 0x31ba7c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x31ba7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x31ba80: 0xfc870040  sd          $a3, 0x40($a0)
    ctx->pc = 0x31ba80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 7));
    // 0x31ba84: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31ba84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31ba88: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x31ba88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31ba8c: 0xfc880048  sd          $t0, 0x48($a0)
    ctx->pc = 0x31ba8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 8));
    // 0x31ba90: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x31ba90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x31ba94: 0xa73825  or          $a3, $a1, $a3
    ctx->pc = 0x31ba94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x31ba98: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x31ba98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x31ba9c: 0xfc870050  sd          $a3, 0x50($a0)
    ctx->pc = 0x31ba9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 7));
    // 0x31baa0: 0x34a53513  ori         $a1, $a1, 0x3513
    ctx->pc = 0x31baa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13587);
    // 0x31baa4: 0xfc850058  sd          $a1, 0x58($a0)
    ctx->pc = 0x31baa4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 5));
    // 0x31baa8: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31baac: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31baacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31bab0: 0x8c880370  lw          $t0, 0x370($a0)
    ctx->pc = 0x31bab0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31bab4: 0x25070060  addiu       $a3, $t0, 0x60
    ctx->pc = 0x31bab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x31bab8: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31babc: 0xaca70370  sw          $a3, 0x370($a1)
    ctx->pc = 0x31babcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 880), GPR_U32(ctx, 7));
    // 0x31bac0: 0xad060060  sw          $a2, 0x60($t0)
    ctx->pc = 0x31bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 6));
    // 0x31bac4: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31bac4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31bac8: 0x8c8e0370  lw          $t6, 0x370($a0)
    ctx->pc = 0x31bac8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31bacc: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31baccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31bad0: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x31bad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x31bad4: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31bad8: 0xadc30004  sw          $v1, 0x4($t6)
    ctx->pc = 0x31bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 3));
    // 0x31badc: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x31badcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x31bae0: 0x8da30370  lw          $v1, 0x370($t5)
    ctx->pc = 0x31bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x31bae4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x31bae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x31bae8: 0x8d830370  lw          $v1, 0x370($t4)
    ctx->pc = 0x31bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x31baec: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x31baecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x31baf0: 0x8d6b0370  lw          $t3, 0x370($t3)
    ctx->pc = 0x31baf0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x31baf4: 0x25630010  addiu       $v1, $t3, 0x10
    ctx->pc = 0x31baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x31baf8: 0xad430370  sw          $v1, 0x370($t2)
    ctx->pc = 0x31baf8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 880), GPR_U32(ctx, 3));
    // 0x31bafc: 0xad700010  sw          $s0, 0x10($t3)
    ctx->pc = 0x31bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 16));
    // 0x31bb00: 0x8d230370  lw          $v1, 0x370($t1)
    ctx->pc = 0x31bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31bb04: 0xac760004  sw          $s6, 0x4($v1)
    ctx->pc = 0x31bb04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 22));
    // 0x31bb08: 0x8d030370  lw          $v1, 0x370($t0)
    ctx->pc = 0x31bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31bb0c: 0xac770008  sw          $s7, 0x8($v1)
    ctx->pc = 0x31bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 23));
    // 0x31bb10: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x31bb10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x31bb14: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x31bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31bb18: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x31bb18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x31bb1c: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x31bb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31bb20: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x31bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x31bb24: 0xaca30370  sw          $v1, 0x370($a1)
    ctx->pc = 0x31bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 880), GPR_U32(ctx, 3));
    // 0x31bb28: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x31bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x31bb2c: 0x9082b280  lbu         $v0, -0x4D80($a0)
    ctx->pc = 0x31bb2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947456)));
    // 0x31bb30: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x31BB30u;
    {
        const bool branch_taken_0x31bb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bb30) {
            ctx->pc = 0x31BB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31BB30u;
            // 0x31bb34: 0x26a27fff  addiu       $v0, $s5, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 32767));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31BB88u;
            goto label_31bb88;
        }
    }
    ctx->pc = 0x31BB38u;
    // 0x31bb38: 0x26a37fff  addiu       $v1, $s5, 0x7FFF
    ctx->pc = 0x31bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32767));
    // 0x31bb3c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x31bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x31bb40: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x31bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31bb44: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x31bb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x31bb48: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x31bb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x31bb4c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x31bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31bb50: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x31bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x31bb54: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x31bb54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31bb58: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x31bb58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x31bb5c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x31bb5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31bb60: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x31bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x31bb64: 0x0  nop
    ctx->pc = 0x31bb64u;
    // NOP
    // 0x31bb68: 0x1810  mfhi        $v1
    ctx->pc = 0x31bb68u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x31bb6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31bb70: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x31bb70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x31bb74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31bb78: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x31bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x31bb7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31bb80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31BB80u;
    {
        const bool branch_taken_0x31bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BB80u;
            // 0x31bb84: 0x624024  and         $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb80) {
            ctx->pc = 0x31BB8Cu;
            goto label_31bb8c;
        }
    }
    ctx->pc = 0x31BB88u;
label_31bb88:
    // 0x31bb88: 0x24480001  addiu       $t0, $v0, 0x1
    ctx->pc = 0x31bb88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31bb8c:
    // 0x31bb8c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x31bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31bb90: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x31bb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31bb94: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x31bb94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31bb98: 0x3c1101dc  lui         $s1, 0x1DC
    ctx->pc = 0x31bb98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)476 << 16));
    // 0x31bb9c: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x31bb9cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x31bba0: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x31bba0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x31bba4: 0x24857fff  addiu       $a1, $a0, 0x7FFF
    ctx->pc = 0x31bba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x31bba8: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x31bba8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x31bbac: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31bbacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31bbb0: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x31bbb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31bbb4: 0x8c870370  lw          $a3, 0x370($a0)
    ctx->pc = 0x31bbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31bbb8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31bbbc: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x31bbbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31bbc0: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31bbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31bbc4: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x31bbc4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x31bbc8: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x31bbc8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x31bbcc: 0xace80004  sw          $t0, 0x4($a3)
    ctx->pc = 0x31bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 8));
    // 0x31bbd0: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31bbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31bbd4: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x31bbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x31bbd8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31bbdc: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x31bbdcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x31bbe0: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31bbe0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31bbe4: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31bbe4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31bbe8: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31bbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31bbec: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x31bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x31bbf0: 0x8c930370  lw          $s3, 0x370($a0)
    ctx->pc = 0x31bbf0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31bbf4: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x31bbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x31bbf8: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31bbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31bbfc: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x31bbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x31bc00: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x31bc00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x31bc04: 0x8e330370  lw          $s3, 0x370($s1)
    ctx->pc = 0x31bc04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x31bc08: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x31bc08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x31bc0c: 0xadf10370  sw          $s1, 0x370($t7)
    ctx->pc = 0x31bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 880), GPR_U32(ctx, 17));
    // 0x31bc10: 0xae630010  sw          $v1, 0x10($s3)
    ctx->pc = 0x31bc10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
    // 0x31bc14: 0x8dc30370  lw          $v1, 0x370($t6)
    ctx->pc = 0x31bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x31bc18: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x31bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x31bc1c: 0x8da20370  lw          $v0, 0x370($t5)
    ctx->pc = 0x31bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x31bc20: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x31bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x31bc24: 0x8d820370  lw          $v0, 0x370($t4)
    ctx->pc = 0x31bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x31bc28: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x31bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x31bc2c: 0x8d630370  lw          $v1, 0x370($t3)
    ctx->pc = 0x31bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x31bc30: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x31bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x31bc34: 0xad420370  sw          $v0, 0x370($t2)
    ctx->pc = 0x31bc34u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 880), GPR_U32(ctx, 2));
    // 0x31bc38: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x31bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
    // 0x31bc3c: 0x8d220370  lw          $v0, 0x370($t1)
    ctx->pc = 0x31bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31bc40: 0xac560004  sw          $s6, 0x4($v0)
    ctx->pc = 0x31bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 22));
    // 0x31bc44: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x31bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31bc48: 0xac570008  sw          $s7, 0x8($v0)
    ctx->pc = 0x31bc48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 23));
    // 0x31bc4c: 0x8ce30370  lw          $v1, 0x370($a3)
    ctx->pc = 0x31bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x31bc50: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x31bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31bc54: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x31bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x31bc58: 0x8cc30370  lw          $v1, 0x370($a2)
    ctx->pc = 0x31bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31bc5c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x31bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x31bc60: 0xaca20370  sw          $v0, 0x370($a1)
    ctx->pc = 0x31bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 880), GPR_U32(ctx, 2));
    // 0x31bc64: 0xac720010  sw          $s2, 0x10($v1)
    ctx->pc = 0x31bc64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 18));
    // 0x31bc68: 0x9082b280  lbu         $v0, -0x4D80($a0)
    ctx->pc = 0x31bc68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947456)));
    // 0x31bc6c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x31BC6Cu;
    {
        const bool branch_taken_0x31bc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bc6c) {
            ctx->pc = 0x31BC70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31BC6Cu;
            // 0x31bc70: 0x26827fff  addiu       $v0, $s4, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32767));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31BCBCu;
            goto label_31bcbc;
        }
    }
    ctx->pc = 0x31BC74u;
    // 0x31bc74: 0x26837fff  addiu       $v1, $s4, 0x7FFF
    ctx->pc = 0x31bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32767));
    // 0x31bc78: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x31bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x31bc7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31bc80: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x31bc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x31bc84: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x31bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x31bc88: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x31bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x31bc8c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x31bc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31bc90: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x31bc90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x31bc94: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x31bc94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31bc98: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x31bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x31bc9c: 0x0  nop
    ctx->pc = 0x31bc9cu;
    // NOP
    // 0x31bca0: 0x1010  mfhi        $v0
    ctx->pc = 0x31bca0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31bca4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31bca8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x31bca8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x31bcac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31bcb0: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x31bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x31bcb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31BCB4u;
    {
        const bool branch_taken_0x31bcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BCB4u;
            // 0x31bcb8: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bcb4) {
            ctx->pc = 0x31BCC0u;
            goto label_31bcc0;
        }
    }
    ctx->pc = 0x31BCBCu;
label_31bcbc:
    // 0x31bcbc: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x31bcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31bcc0:
    // 0x31bcc0: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31bcc4: 0x240ca833  addiu       $t4, $zero, -0x57CD
    ctx->pc = 0x31bcc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31bcc8: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x31bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31bccc: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31bcccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31bcd0: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x31bcd0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x31bcd4: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31bcd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31bcd8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x31bcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x31bcdc: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31bcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31bce0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x31bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x31bce4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31bce8: 0x8c440370  lw          $a0, 0x370($v0)
    ctx->pc = 0x31bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31bcec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31bcf0: 0x346b000c  ori         $t3, $v1, 0xC
    ctx->pc = 0x31bcf0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x31bcf4: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31bcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31bcf8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31bcfc: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x31bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x31bd00: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31bd04: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x31bd04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31bd08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31bd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bd0c: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x31bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x31bd10: 0x7c600190  sq          $zero, 0x190($v1)
    ctx->pc = 0x31bd10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 400), GPR_VEC(ctx, 0));
    // 0x31bd14: 0xac4a0190  sw          $t2, 0x190($v0)
    ctx->pc = 0x31bd14u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 10)); // MMIO: 0x70000190
    // 0x31bd18: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x31bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31bd1c: 0x7cc000c0  sq          $zero, 0xC0($a2)
    ctx->pc = 0x31bd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), GPR_VEC(ctx, 0));
    // 0x31bd20: 0xacab00c0  sw          $t3, 0xC0($a1)
    ctx->pc = 0x31bd20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 11));
    // 0x31bd24: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x31bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31bd28: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31BD28u;
    SET_GPR_U32(ctx, 31, 0x31BD30u);
    ctx->pc = 0x31BD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BD28u;
            // 0x31bd2c: 0xace20370  sw          $v0, 0x370($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BD30u; }
        if (ctx->pc != 0x31BD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BD30u; }
        if (ctx->pc != 0x31BD30u) { return; }
    }
    ctx->pc = 0x31BD30u;
label_31bd30:
    // 0x31bd30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31bd34: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31bd34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31bd38: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x31bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x31bd3c: 0xc040a04  jal         func_102810
    ctx->pc = 0x31BD3Cu;
    SET_GPR_U32(ctx, 31, 0x31BD44u);
    ctx->pc = 0x31BD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BD3Cu;
            // 0x31bd40: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (runtime->hasFunction(0x102810u)) {
        auto targetFn = runtime->lookupFunction(0x102810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BD44u; }
        if (ctx->pc != 0x31BD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102810_0x102810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BD44u; }
        if (ctx->pc != 0x31BD44u) { return; }
    }
    ctx->pc = 0x31BD44u;
label_31bd44:
    // 0x31bd44: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x31bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_31bd48:
    // 0x31bd48: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x31bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x31bd4c: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x31bd4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x31bd50: 0x0  nop
    ctx->pc = 0x31bd50u;
    // NOP
    // 0x31bd54: 0x0  nop
    ctx->pc = 0x31bd54u;
    // NOP
    // 0x31bd58: 0x0  nop
    ctx->pc = 0x31bd58u;
    // NOP
    // 0x31bd5c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31BD5Cu;
    {
        const bool branch_taken_0x31bd5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bd5c) {
            ctx->pc = 0x31BD48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31bd48;
        }
    }
    ctx->pc = 0x31BD64u;
    // 0x31bd64: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x31bd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31bd68: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31bd68u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31bd6c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x31bd6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31bd70: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31bd70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31bd74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31bd74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31bd78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31bd78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31bd7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31bd7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31bd80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31bd80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31bd84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31bd84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31bd88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31bd88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x31BD8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BD8Cu;
            // 0x31bd90: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31BD94u;
    // 0x31bd94: 0x0  nop
    ctx->pc = 0x31bd94u;
    // NOP
    // 0x31bd98: 0x0  nop
    ctx->pc = 0x31bd98u;
    // NOP
    // 0x31bd9c: 0x0  nop
    ctx->pc = 0x31bd9cu;
    // NOP
label_31bda0:
    // 0x31bda0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x31bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x31bda4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x31bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x31bda8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x31bda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x31bdac: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x31bdacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x31bdb0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x31bdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x31bdb4: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x31bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x31bdb8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x31bdbc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31bdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31bdc0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31bdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31bdc4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31bdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31bdc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31bdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31bdcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31bdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31bdd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31bdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31bdd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31bdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31bdd8: 0x24910010  addiu       $s1, $a0, 0x10
    ctx->pc = 0x31bdd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x31bddc: 0xc4410930  lwc1        $f1, 0x930($v0)
    ctx->pc = 0x31bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31bde0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x31bde0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31bde4: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x31bde4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31bde8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x31bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x31bdec: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x31bdecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x31bdf0: 0xc4420934  lwc1        $f2, 0x934($v0)
    ctx->pc = 0x31bdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31bdf4: 0xfd4021  addu        $t0, $a3, $sp
    ctx->pc = 0x31bdf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x31bdf8: 0x8c870024  lw          $a3, 0x24($a0)
    ctx->pc = 0x31bdf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x31bdfc: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x31bdfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x31be00: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x31be00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x31be04: 0xc4400938  lwc1        $f0, 0x938($v0)
    ctx->pc = 0x31be04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31be08: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x31be08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x31be0c: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x31be0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x31be10: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x31be10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x31be14: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x31be14u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x31be18: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x31be18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x31be1c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x31be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x31be20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31be20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31be24: 0xc441093c  lwc1        $f1, 0x93C($v0)
    ctx->pc = 0x31be24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31be28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31be28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31be2c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x31be2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x31be30: 0x6f043  sra         $fp, $a2, 1
    ctx->pc = 0x31be30u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 6), 1));
    // 0x31be34: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x31be34u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
    // 0x31be38: 0x30e6ff00  andi        $a2, $a3, 0xFF00
    ctx->pc = 0x31be38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x31be3c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x31be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x31be40: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x31be40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x31be44: 0xc4400940  lwc1        $f0, 0x940($v0)
    ctx->pc = 0x31be44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31be48: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x31be48u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x31be4c: 0xe7a1010c  swc1        $f1, 0x10C($sp)
    ctx->pc = 0x31be4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x31be50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31be50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31be54: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31be54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31be58: 0x3b843  sra         $s7, $v1, 1
    ctx->pc = 0x31be58u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 3), 1));
    // 0x31be5c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31be60: 0x9042d9c8  lbu         $v0, -0x2638($v0)
    ctx->pc = 0x31be60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957512)));
    // 0x31be64: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x31be64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x31be68: 0x8d150100  lw          $s5, 0x100($t0)
    ctx->pc = 0x31be68u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 256)));
    // 0x31be6c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x31be6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x31be70: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31BE70u;
    {
        const bool branch_taken_0x31be70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BE70u;
            // 0x31be74: 0x6b043  sra         $s6, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be70) {
            ctx->pc = 0x31BEBCu;
            goto label_31bebc;
        }
    }
    ctx->pc = 0x31BE78u;
    // 0x31be78: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31be78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31be7c: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x31be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x31be80: 0xc44cd9c0  lwc1        $f12, -0x2640($v0)
    ctx->pc = 0x31be80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31be84: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31BE84u;
    SET_GPR_U32(ctx, 31, 0x31BE8Cu);
    ctx->pc = 0x31BE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BE84u;
            // 0x31be88: 0x3803c  dsll32      $s0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BE8Cu; }
        if (ctx->pc != 0x31BE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BE8Cu; }
        if (ctx->pc != 0x31BE8Cu) { return; }
    }
    ctx->pc = 0x31BE8Cu;
label_31be8c:
    // 0x31be8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31be8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31be90: 0xc048a5c  jal         func_122970
    ctx->pc = 0x31BE90u;
    SET_GPR_U32(ctx, 31, 0x31BE98u);
    ctx->pc = 0x31BE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BE90u;
            // 0x31be94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (runtime->hasFunction(0x122970u)) {
        auto targetFn = runtime->lookupFunction(0x122970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BE98u; }
        if (ctx->pc != 0x31BE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122970_0x122970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BE98u; }
        if (ctx->pc != 0x31BE98u) { return; }
    }
    ctx->pc = 0x31BE98u;
label_31be98:
    // 0x31be98: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x31be98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
    // 0x31be9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31be9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bea0: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31BEA0u;
    SET_GPR_U32(ctx, 31, 0x31BEA8u);
    ctx->pc = 0x31BEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BEA0u;
            // 0x31bea4: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BEA8u; }
        if (ctx->pc != 0x31BEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BEA8u; }
        if (ctx->pc != 0x31BEA8u) { return; }
    }
    ctx->pc = 0x31BEA8u;
label_31bea8:
    // 0x31bea8: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31BEA8u;
    SET_GPR_U32(ctx, 31, 0x31BEB0u);
    ctx->pc = 0x31BEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BEA8u;
            // 0x31beac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BEB0u; }
        if (ctx->pc != 0x31BEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BEB0u; }
        if (ctx->pc != 0x31BEB0u) { return; }
    }
    ctx->pc = 0x31BEB0u;
label_31beb0:
    // 0x31beb0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x31beb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31beb4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x31beb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31beb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31beb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31bebc:
    // 0x31bebc: 0x27a4011c  addiu       $a0, $sp, 0x11C
    ctx->pc = 0x31bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x31bec0: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x31bec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x31bec4: 0xc0c0d2c  jal         func_3034B0
    ctx->pc = 0x31BEC4u;
    SET_GPR_U32(ctx, 31, 0x31BECCu);
    ctx->pc = 0x31BEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BEC4u;
            // 0x31bec8: 0x27a60114  addiu       $a2, $sp, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3034B0u;
    if (runtime->hasFunction(0x3034B0u)) {
        auto targetFn = runtime->lookupFunction(0x3034B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BECCu; }
        if (ctx->pc != 0x31BECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003034B0_0x3034b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BECCu; }
        if (ctx->pc != 0x31BECCu) { return; }
    }
    ctx->pc = 0x31BECCu;
label_31becc:
    // 0x31becc: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x31beccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x31bed0: 0x3442be77  ori         $v0, $v0, 0xBE77
    ctx->pc = 0x31bed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48759);
    // 0x31bed4: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x31bed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31bed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31bed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31bedc: 0x0  nop
    ctx->pc = 0x31bedcu;
    // NOP
    // 0x31bee0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31bee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31bee4: 0x4502004a  bc1fl       . + 4 + (0x4A << 2)
    ctx->pc = 0x31BEE4u;
    {
        const bool branch_taken_0x31bee4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31bee4) {
            ctx->pc = 0x31BEE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31BEE4u;
            // 0x31bee8: 0xc6200004  lwc1        $f0, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x31C010u;
            goto label_31c010;
        }
    }
    ctx->pc = 0x31BEECu;
    // 0x31beec: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31BEECu;
    SET_GPR_U32(ctx, 31, 0x31BEF4u);
    ctx->pc = 0x31BEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BEECu;
            // 0x31bef0: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BEF4u; }
        if (ctx->pc != 0x31BEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BEF4u; }
        if (ctx->pc != 0x31BEF4u) { return; }
    }
    ctx->pc = 0x31BEF4u;
label_31bef4:
    // 0x31bef4: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x31bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x31bef8: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x31bef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x31befc: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x31befcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x31bf00: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31bf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31bf04: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31bf04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31bf08: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x31bf08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x31bf0c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x31bf0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31bf10: 0xc048a5c  jal         func_122970
    ctx->pc = 0x31BF10u;
    SET_GPR_U32(ctx, 31, 0x31BF18u);
    ctx->pc = 0x31BF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF10u;
            // 0x31bf14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (runtime->hasFunction(0x122970u)) {
        auto targetFn = runtime->lookupFunction(0x122970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF18u; }
        if (ctx->pc != 0x31BF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122970_0x122970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF18u; }
        if (ctx->pc != 0x31BF18u) { return; }
    }
    ctx->pc = 0x31BF18u;
label_31bf18:
    // 0x31bf18: 0x3c034030  lui         $v1, 0x4030
    ctx->pc = 0x31bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16432 << 16));
    // 0x31bf1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31bf1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf20: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31BF20u;
    SET_GPR_U32(ctx, 31, 0x31BF28u);
    ctx->pc = 0x31BF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF20u;
            // 0x31bf24: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF28u; }
        if (ctx->pc != 0x31BF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF28u; }
        if (ctx->pc != 0x31BF28u) { return; }
    }
    ctx->pc = 0x31BF28u;
label_31bf28:
    // 0x31bf28: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31BF28u;
    SET_GPR_U32(ctx, 31, 0x31BF30u);
    ctx->pc = 0x31BF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF28u;
            // 0x31bf2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF30u; }
        if (ctx->pc != 0x31BF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF30u; }
        if (ctx->pc != 0x31BF30u) { return; }
    }
    ctx->pc = 0x31BF30u;
label_31bf30:
    // 0x31bf30: 0xc62c0054  lwc1        $f12, 0x54($s1)
    ctx->pc = 0x31bf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31bf34: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31BF34u;
    SET_GPR_U32(ctx, 31, 0x31BF3Cu);
    ctx->pc = 0x31BF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF34u;
            // 0x31bf38: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF3Cu; }
        if (ctx->pc != 0x31BF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF3Cu; }
        if (ctx->pc != 0x31BF3Cu) { return; }
    }
    ctx->pc = 0x31BF3Cu;
label_31bf3c:
    // 0x31bf3c: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x31bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x31bf40: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x31bf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x31bf44: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x31bf44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x31bf48: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31bf48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31bf4c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31bf4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31bf50: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x31bf50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x31bf54: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x31bf54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31bf58: 0xc048a46  jal         func_122918
    ctx->pc = 0x31BF58u;
    SET_GPR_U32(ctx, 31, 0x31BF60u);
    ctx->pc = 0x31BF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF58u;
            // 0x31bf5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (runtime->hasFunction(0x122918u)) {
        auto targetFn = runtime->lookupFunction(0x122918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF60u; }
        if (ctx->pc != 0x31BF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122918_0x122918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF60u; }
        if (ctx->pc != 0x31BF60u) { return; }
    }
    ctx->pc = 0x31BF60u;
label_31bf60:
    // 0x31bf60: 0x3c034030  lui         $v1, 0x4030
    ctx->pc = 0x31bf60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16432 << 16));
    // 0x31bf64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31bf64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf68: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31BF68u;
    SET_GPR_U32(ctx, 31, 0x31BF70u);
    ctx->pc = 0x31BF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF68u;
            // 0x31bf6c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF70u; }
        if (ctx->pc != 0x31BF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF70u; }
        if (ctx->pc != 0x31BF70u) { return; }
    }
    ctx->pc = 0x31BF70u;
label_31bf70:
    // 0x31bf70: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31BF70u;
    SET_GPR_U32(ctx, 31, 0x31BF78u);
    ctx->pc = 0x31BF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF70u;
            // 0x31bf74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF78u; }
        if (ctx->pc != 0x31BF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF78u; }
        if (ctx->pc != 0x31BF78u) { return; }
    }
    ctx->pc = 0x31BF78u;
label_31bf78:
    // 0x31bf78: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x31bf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31bf7c: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31BF7Cu;
    SET_GPR_U32(ctx, 31, 0x31BF84u);
    ctx->pc = 0x31BF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF7Cu;
            // 0x31bf80: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF84u; }
        if (ctx->pc != 0x31BF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF84u; }
        if (ctx->pc != 0x31BF84u) { return; }
    }
    ctx->pc = 0x31BF84u;
label_31bf84:
    // 0x31bf84: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x31bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x31bf88: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x31bf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x31bf8c: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x31bf8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x31bf90: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31bf90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31bf94: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31bf94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31bf98: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x31bf98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x31bf9c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x31bf9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31bfa0: 0xc048a5c  jal         func_122970
    ctx->pc = 0x31BFA0u;
    SET_GPR_U32(ctx, 31, 0x31BFA8u);
    ctx->pc = 0x31BFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BFA0u;
            // 0x31bfa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (runtime->hasFunction(0x122970u)) {
        auto targetFn = runtime->lookupFunction(0x122970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFA8u; }
        if (ctx->pc != 0x31BFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122970_0x122970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFA8u; }
        if (ctx->pc != 0x31BFA8u) { return; }
    }
    ctx->pc = 0x31BFA8u;
label_31bfa8:
    // 0x31bfa8: 0x3c034030  lui         $v1, 0x4030
    ctx->pc = 0x31bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16432 << 16));
    // 0x31bfac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31bfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bfb0: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31BFB0u;
    SET_GPR_U32(ctx, 31, 0x31BFB8u);
    ctx->pc = 0x31BFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BFB0u;
            // 0x31bfb4: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFB8u; }
        if (ctx->pc != 0x31BFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFB8u; }
        if (ctx->pc != 0x31BFB8u) { return; }
    }
    ctx->pc = 0x31BFB8u;
label_31bfb8:
    // 0x31bfb8: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31BFB8u;
    SET_GPR_U32(ctx, 31, 0x31BFC0u);
    ctx->pc = 0x31BFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BFB8u;
            // 0x31bfbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFC0u; }
        if (ctx->pc != 0x31BFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFC0u; }
        if (ctx->pc != 0x31BFC0u) { return; }
    }
    ctx->pc = 0x31BFC0u;
label_31bfc0:
    // 0x31bfc0: 0xc62c0058  lwc1        $f12, 0x58($s1)
    ctx->pc = 0x31bfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31bfc4: 0xc048930  jal         func_1224C0
    ctx->pc = 0x31BFC4u;
    SET_GPR_U32(ctx, 31, 0x31BFCCu);
    ctx->pc = 0x31BFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BFC4u;
            // 0x31bfc8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (runtime->hasFunction(0x1224C0u)) {
        auto targetFn = runtime->lookupFunction(0x1224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFCCu; }
        if (ctx->pc != 0x31BFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224C0_0x1224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFCCu; }
        if (ctx->pc != 0x31BFCCu) { return; }
    }
    ctx->pc = 0x31BFCCu;
label_31bfcc:
    // 0x31bfcc: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x31bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x31bfd0: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x31bfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x31bfd4: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x31bfd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x31bfd8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31bfd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31bfdc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31bfdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31bfe0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x31bfe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x31bfe4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x31bfe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31bfe8: 0xc048a46  jal         func_122918
    ctx->pc = 0x31BFE8u;
    SET_GPR_U32(ctx, 31, 0x31BFF0u);
    ctx->pc = 0x31BFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BFE8u;
            // 0x31bfec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (runtime->hasFunction(0x122918u)) {
        auto targetFn = runtime->lookupFunction(0x122918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFF0u; }
        if (ctx->pc != 0x31BFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122918_0x122918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFF0u; }
        if (ctx->pc != 0x31BFF0u) { return; }
    }
    ctx->pc = 0x31BFF0u;
label_31bff0:
    // 0x31bff0: 0x3c034030  lui         $v1, 0x4030
    ctx->pc = 0x31bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16432 << 16));
    // 0x31bff4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31bff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bff8: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x31BFF8u;
    SET_GPR_U32(ctx, 31, 0x31C000u);
    ctx->pc = 0x31BFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BFF8u;
            // 0x31bffc: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C000u; }
        if (ctx->pc != 0x31C000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C000u; }
        if (ctx->pc != 0x31C000u) { return; }
    }
    ctx->pc = 0x31C000u;
label_31c000:
    // 0x31c000: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31C000u;
    SET_GPR_U32(ctx, 31, 0x31C008u);
    ctx->pc = 0x31C004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C000u;
            // 0x31c004: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C008u; }
        if (ctx->pc != 0x31C008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C008u; }
        if (ctx->pc != 0x31C008u) { return; }
    }
    ctx->pc = 0x31C008u;
label_31c008:
    // 0x31c008: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31C008u;
    {
        const bool branch_taken_0x31c008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C008u;
            // 0x31c00c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c008) {
            ctx->pc = 0x31C060u;
            goto label_31c060;
        }
    }
    ctx->pc = 0x31C010u;
label_31c010:
    // 0x31c010: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x31c010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x31c014: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x31c014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31c018: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x31c018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31c01c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x31c01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x31c020: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31c024: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x31c024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c028: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x31c028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x31c02c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x31c02cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x31c030: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x31c030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c034: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x31c034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x31c038: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x31c038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x31c03c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c03cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x31c040: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c040u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31c044: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x31c044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31c048: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c048u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31c04c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x31c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x31c050: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x31c050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31c054: 0x0  nop
    ctx->pc = 0x31c054u;
    // NOP
    // 0x31c058: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x31c058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x31c05c: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x31c05cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_31c060:
    // 0x31c060: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x31c060u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c064: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31c064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31c068: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x31c068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31c06c: 0x8c434790  lw          $v1, 0x4790($v0)
    ctx->pc = 0x31c06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18320)));
    // 0x31c070: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x31c070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31c074: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x31c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c078: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x31c078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c07c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x31c07cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x31c080: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x31c080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x31c084: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x31c084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x31c088: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c088u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x31c08c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x31c08cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31c090: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c090u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31c094: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x31c094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x31c098: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x31c098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31c09c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c09cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31c0a0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x31c0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x31c0a4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31c0a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31c0a8: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x31c0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c0ac: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x31c0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x31c0b0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x31c0b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x31c0b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c0b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31c0b8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31c0b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31c0bc: 0x12430017  beq         $s2, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x31C0BCu;
    {
        const bool branch_taken_0x31c0bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x31C0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C0BCu;
            // 0x31c0c0: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0bc) {
            ctx->pc = 0x31C11Cu;
            goto label_31c11c;
        }
    }
    ctx->pc = 0x31C0C4u;
    // 0x31c0c4: 0x15543c  dsll32      $t2, $s5, 16
    ctx->pc = 0x31c0c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) << (32 + 16));
    // 0x31c0c8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31c0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31c0cc: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x31c0ccu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x31c0d0: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x31c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x31c0d4: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x31c0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x31c0d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31c0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31c0dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31c0dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31c0e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31c0e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0e8: 0xc040532  jal         func_1014C8
    ctx->pc = 0x31C0E8u;
    SET_GPR_U32(ctx, 31, 0x31C0F0u);
    ctx->pc = 0x31C0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C0E8u;
            // 0x31c0ec: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C0F0u; }
        if (ctx->pc != 0x31C0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C0F0u; }
        if (ctx->pc != 0x31C0F0u) { return; }
    }
    ctx->pc = 0x31C0F0u;
label_31c0f0:
    // 0x31c0f0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31C0F0u;
    SET_GPR_U32(ctx, 31, 0x31C0F8u);
    ctx->pc = 0x31C0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C0F0u;
            // 0x31c0f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C0F8u; }
        if (ctx->pc != 0x31C0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C0F8u; }
        if (ctx->pc != 0x31C0F8u) { return; }
    }
    ctx->pc = 0x31C0F8u;
label_31c0f8:
    // 0x31c0f8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31c0fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31c0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c100: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x31C100u;
    SET_GPR_U32(ctx, 31, 0x31C108u);
    ctx->pc = 0x31C104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C100u;
            // 0x31c104: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C108u; }
        if (ctx->pc != 0x31C108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C108u; }
        if (ctx->pc != 0x31C108u) { return; }
    }
    ctx->pc = 0x31C108u;
label_31c108:
    // 0x31c108: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31c108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c10c: 0xc040454  jal         func_101150
    ctx->pc = 0x31C10Cu;
    SET_GPR_U32(ctx, 31, 0x31C114u);
    ctx->pc = 0x31C110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C10Cu;
            // 0x31c110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C114u; }
        if (ctx->pc != 0x31C114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C114u; }
        if (ctx->pc != 0x31C114u) { return; }
    }
    ctx->pc = 0x31C114u;
label_31c114:
    // 0x31c114: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31c114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31c118: 0xac524790  sw          $s2, 0x4790($v0)
    ctx->pc = 0x31c118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18320), GPR_U32(ctx, 18));
label_31c11c:
    // 0x31c11c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31c11cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31c120: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31c120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31c124: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x31c124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x31c128: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x31c128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x31c12c: 0xac450370  sw          $a1, 0x370($v0)
    ctx->pc = 0x31c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 5));
    // 0x31c130: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x31c130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x31c134: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31c134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31c138: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31c138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31c13c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31c13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31c140: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x31c140u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x31c144: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x31c144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31c148: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x31c148u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x31c14c: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31c150: 0xfca00010  sd          $zero, 0x10($a1)
    ctx->pc = 0x31c150u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 0));
    // 0x31c154: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31c154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31c158: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x31c158u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x31c15c: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x31c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31c160: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31c160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c164: 0x24710020  addiu       $s1, $v1, 0x20
    ctx->pc = 0x31c164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31c168: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x31C168u;
    SET_GPR_U32(ctx, 31, 0x31C170u);
    ctx->pc = 0x31C16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C168u;
            // 0x31c16c: 0xac510370  sw          $s1, 0x370($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    if (runtime->hasFunction(0x312C20u)) {
        auto targetFn = runtime->lookupFunction(0x312C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C170u; }
        if (ctx->pc != 0x31C170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00312C20_0x312c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C170u; }
        if (ctx->pc != 0x31C170u) { return; }
    }
    ctx->pc = 0x31C170u;
label_31c170:
    // 0x31c170: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31c170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31c174: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31c174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c178: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31c178u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31c17c: 0x21eb8  dsll        $v1, $v0, 26
    ctx->pc = 0x31c17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 26);
    // 0x31c180: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x31c180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x31c184: 0x34423480  ori         $v0, $v0, 0x3480
    ctx->pc = 0x31c184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x31c188: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x31C188u;
    SET_GPR_U32(ctx, 31, 0x31C190u);
    ctx->pc = 0x31C18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C188u;
            // 0x31c18c: 0x629025  or          $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    if (runtime->hasFunction(0x312C20u)) {
        auto targetFn = runtime->lookupFunction(0x312C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C190u; }
        if (ctx->pc != 0x31C190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00312C20_0x312c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C190u; }
        if (ctx->pc != 0x31C190u) { return; }
    }
    ctx->pc = 0x31C190u;
label_31c190:
    // 0x31c190: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31c190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31c194: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x31c194u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x31c198: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31c198u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31c19c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x31c19cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31c1a0: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x31c1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x31c1a4: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x31c1a4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x31c1a8: 0x2433825  or          $a3, $s2, $v1
    ctx->pc = 0x31c1a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x31c1ac: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x31c1acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x31c1b0: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x31c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31c1b4: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x31c1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31c1b8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x31c1b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31c1bc: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31c1bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31c1c0: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31c1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31c1c4: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x31c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x31c1c8: 0x246d0001  addiu       $t5, $v1, 0x1
    ctx->pc = 0x31c1c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31c1cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31c1d0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31c1d4: 0x34640004  ori         $a0, $v1, 0x4
    ctx->pc = 0x31c1d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31c1d8: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x31c1d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31c1dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x31c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31c1e0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x31c1e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x31c1e4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x31c1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31c1e8: 0xfe260000  sd          $a2, 0x0($s1)
    ctx->pc = 0x31c1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 6));
    // 0x31c1ec: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x31c1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31c1f0: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x31c1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x31c1f4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x31c1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31c1f8: 0x3c0360ab  lui         $v1, 0x60AB
    ctx->pc = 0x31c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24747 << 16));
    // 0x31c1fc: 0xfe200010  sd          $zero, 0x10($s1)
    ctx->pc = 0x31c1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 0));
    // 0x31c200: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x31c200u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
    // 0x31c204: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x31c204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x31c208: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31c208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31c20c: 0xfe270020  sd          $a3, 0x20($s1)
    ctx->pc = 0x31c20cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 7));
    // 0x31c210: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x31c210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x31c214: 0xfe260028  sd          $a2, 0x28($s1)
    ctx->pc = 0x31c214u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 6));
    // 0x31c218: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x31c218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31c21c: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31c21cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31c220: 0xfe230030  sd          $v1, 0x30($s1)
    ctx->pc = 0x31c220u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 3));
    // 0x31c224: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31c224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x31c228: 0x34643513  ori         $a0, $v1, 0x3513
    ctx->pc = 0x31c228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13587);
    // 0x31c22c: 0xfe240038  sd          $a0, 0x38($s1)
    ctx->pc = 0x31c22cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 4));
    // 0x31c230: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31c230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31c234: 0x8c6e0370  lw          $t6, 0x370($v1)
    ctx->pc = 0x31c234u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31c238: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31c238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31c23c: 0x25c60040  addiu       $a2, $t6, 0x40
    ctx->pc = 0x31c23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 64));
    // 0x31c240: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31c240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31c244: 0xac860370  sw          $a2, 0x370($a0)
    ctx->pc = 0x31c244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 6));
    // 0x31c248: 0xadc50040  sw          $a1, 0x40($t6)
    ctx->pc = 0x31c248u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 64), GPR_U32(ctx, 5));
    // 0x31c24c: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x31c24cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x31c250: 0x8c6e0370  lw          $t6, 0x370($v1)
    ctx->pc = 0x31c250u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31c254: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31c254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31c258: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31c258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31c25c: 0xadc20004  sw          $v0, 0x4($t6)
    ctx->pc = 0x31c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 2));
    // 0x31c260: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x31c260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x31c264: 0x8d820370  lw          $v0, 0x370($t4)
    ctx->pc = 0x31c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x31c268: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x31c268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x31c26c: 0x8d620370  lw          $v0, 0x370($t3)
    ctx->pc = 0x31c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x31c270: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x31c270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x31c274: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x31c274u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x31c278: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x31c278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x31c27c: 0xad220370  sw          $v0, 0x370($t1)
    ctx->pc = 0x31c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 880), GPR_U32(ctx, 2));
    // 0x31c280: 0xad500010  sw          $s0, 0x10($t2)
    ctx->pc = 0x31c280u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 16));
    // 0x31c284: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x31c284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31c288: 0xac560004  sw          $s6, 0x4($v0)
    ctx->pc = 0x31c288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 22));
    // 0x31c28c: 0x8ce20370  lw          $v0, 0x370($a3)
    ctx->pc = 0x31c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x31c290: 0xac570008  sw          $s7, 0x8($v0)
    ctx->pc = 0x31c290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 23));
    // 0x31c294: 0x8cc20370  lw          $v0, 0x370($a2)
    ctx->pc = 0x31c294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31c298: 0xac5e000c  sw          $fp, 0xC($v0)
    ctx->pc = 0x31c298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 30));
    // 0x31c29c: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x31c29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x31c2a0: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x31c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31c2a4: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x31c2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x31c2a8: 0xacad0010  sw          $t5, 0x10($a1)
    ctx->pc = 0x31c2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 13));
    // 0x31c2ac: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x31c2acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x31c2b0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x31C2B0u;
    {
        const bool branch_taken_0x31c2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c2b0) {
            ctx->pc = 0x31C2B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31C2B0u;
            // 0x31c2b4: 0x26827fff  addiu       $v0, $s4, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32767));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31C308u;
            goto label_31c308;
        }
    }
    ctx->pc = 0x31C2B8u;
    // 0x31c2b8: 0x26837fff  addiu       $v1, $s4, 0x7FFF
    ctx->pc = 0x31c2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32767));
    // 0x31c2bc: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x31c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x31c2c0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x31c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31c2c4: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x31c2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x31c2c8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x31c2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x31c2cc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x31c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31c2d0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x31c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x31c2d4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x31c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31c2d8: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x31c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x31c2dc: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x31c2dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31c2e0: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x31c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x31c2e4: 0x0  nop
    ctx->pc = 0x31c2e4u;
    // NOP
    // 0x31c2e8: 0x1810  mfhi        $v1
    ctx->pc = 0x31c2e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x31c2ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31c2f0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x31c2f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x31c2f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31c2f8: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x31c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x31c2fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31c300: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31C300u;
    {
        const bool branch_taken_0x31c300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C300u;
            // 0x31c304: 0x624024  and         $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c300) {
            ctx->pc = 0x31C30Cu;
            goto label_31c30c;
        }
    }
    ctx->pc = 0x31C308u;
label_31c308:
    // 0x31c308: 0x24480001  addiu       $t0, $v0, 0x1
    ctx->pc = 0x31c308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31c30c:
    // 0x31c30c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x31c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31c310: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x31c310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31c314: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x31c314u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31c318: 0x3c1101dc  lui         $s1, 0x1DC
    ctx->pc = 0x31c318u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)476 << 16));
    // 0x31c31c: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x31c31cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x31c320: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x31c320u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x31c324: 0x24857fff  addiu       $a1, $a0, 0x7FFF
    ctx->pc = 0x31c324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x31c328: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x31c328u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x31c32c: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31c330: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x31c330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31c334: 0x8c870370  lw          $a3, 0x370($a0)
    ctx->pc = 0x31c334u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31c338: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31c338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31c33c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x31c33cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31c340: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31c340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31c344: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x31c344u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x31c348: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x31c348u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x31c34c: 0xace80004  sw          $t0, 0x4($a3)
    ctx->pc = 0x31c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 8));
    // 0x31c350: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31c350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31c354: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x31c354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x31c358: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31c358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31c35c: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x31c35cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x31c360: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31c360u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31c364: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31c364u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31c368: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31c368u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31c36c: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x31c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x31c370: 0x8c940370  lw          $s4, 0x370($a0)
    ctx->pc = 0x31c370u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31c374: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x31c374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x31c378: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31c378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31c37c: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x31c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x31c380: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x31c380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x31c384: 0x8e340370  lw          $s4, 0x370($s1)
    ctx->pc = 0x31c384u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x31c388: 0x26910010  addiu       $s1, $s4, 0x10
    ctx->pc = 0x31c388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x31c38c: 0xadf10370  sw          $s1, 0x370($t7)
    ctx->pc = 0x31c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 880), GPR_U32(ctx, 17));
    // 0x31c390: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x31c390u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
    // 0x31c394: 0x8dc30370  lw          $v1, 0x370($t6)
    ctx->pc = 0x31c394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x31c398: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x31c398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x31c39c: 0x8da20370  lw          $v0, 0x370($t5)
    ctx->pc = 0x31c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x31c3a0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x31c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x31c3a4: 0x8d820370  lw          $v0, 0x370($t4)
    ctx->pc = 0x31c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x31c3a8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x31c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x31c3ac: 0x8d630370  lw          $v1, 0x370($t3)
    ctx->pc = 0x31c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x31c3b0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x31c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x31c3b4: 0xad420370  sw          $v0, 0x370($t2)
    ctx->pc = 0x31c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 880), GPR_U32(ctx, 2));
    // 0x31c3b8: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x31c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
    // 0x31c3bc: 0x8d220370  lw          $v0, 0x370($t1)
    ctx->pc = 0x31c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31c3c0: 0xac560004  sw          $s6, 0x4($v0)
    ctx->pc = 0x31c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 22));
    // 0x31c3c4: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x31c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31c3c8: 0xac570008  sw          $s7, 0x8($v0)
    ctx->pc = 0x31c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 23));
    // 0x31c3cc: 0x8ce20370  lw          $v0, 0x370($a3)
    ctx->pc = 0x31c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x31c3d0: 0xac5e000c  sw          $fp, 0xC($v0)
    ctx->pc = 0x31c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 30));
    // 0x31c3d4: 0x8cc30370  lw          $v1, 0x370($a2)
    ctx->pc = 0x31c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31c3d8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x31c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x31c3dc: 0xaca20370  sw          $v0, 0x370($a1)
    ctx->pc = 0x31c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 880), GPR_U32(ctx, 2));
    // 0x31c3e0: 0xac720010  sw          $s2, 0x10($v1)
    ctx->pc = 0x31c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 18));
    // 0x31c3e4: 0x9082b280  lbu         $v0, -0x4D80($a0)
    ctx->pc = 0x31c3e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947456)));
    // 0x31c3e8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x31C3E8u;
    {
        const bool branch_taken_0x31c3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c3e8) {
            ctx->pc = 0x31C3ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31C3E8u;
            // 0x31c3ec: 0x26627fff  addiu       $v0, $s3, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32767));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31C438u;
            goto label_31c438;
        }
    }
    ctx->pc = 0x31C3F0u;
    // 0x31c3f0: 0x26637fff  addiu       $v1, $s3, 0x7FFF
    ctx->pc = 0x31c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32767));
    // 0x31c3f4: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x31c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x31c3f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31c3fc: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x31c3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x31c400: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x31c400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x31c404: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x31c404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x31c408: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x31c408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31c40c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x31c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x31c410: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x31c410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31c414: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x31c414u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x31c418: 0x0  nop
    ctx->pc = 0x31c418u;
    // NOP
    // 0x31c41c: 0x1010  mfhi        $v0
    ctx->pc = 0x31c41cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31c420: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31c420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31c424: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x31c424u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x31c428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31c428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31c42c: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x31c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x31c430: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31C430u;
    {
        const bool branch_taken_0x31c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C430u;
            // 0x31c434: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c430) {
            ctx->pc = 0x31C43Cu;
            goto label_31c43c;
        }
    }
    ctx->pc = 0x31C438u;
label_31c438:
    // 0x31c438: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x31c438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31c43c:
    // 0x31c43c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31c440: 0x240ca833  addiu       $t4, $zero, -0x57CD
    ctx->pc = 0x31c440u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31c444: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x31c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31c448: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31c448u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31c44c: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x31c44cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x31c450: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31c450u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31c454: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x31c454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x31c458: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31c458u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31c45c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x31c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x31c460: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31c460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31c464: 0x8c440370  lw          $a0, 0x370($v0)
    ctx->pc = 0x31c464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31c468: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31c468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31c46c: 0x346b000c  ori         $t3, $v1, 0xC
    ctx->pc = 0x31c46cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x31c470: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31c470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31c474: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31c474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31c478: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x31c478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x31c47c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31c480: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x31c480u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31c484: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31c484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c488: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x31c488u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x31c48c: 0x7c600190  sq          $zero, 0x190($v1)
    ctx->pc = 0x31c48cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 400), GPR_VEC(ctx, 0));
    // 0x31c490: 0xac4a0190  sw          $t2, 0x190($v0)
    ctx->pc = 0x31c490u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 10)); // MMIO: 0x70000190
    // 0x31c494: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x31c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31c498: 0x7cc000c0  sq          $zero, 0xC0($a2)
    ctx->pc = 0x31c498u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), GPR_VEC(ctx, 0));
    // 0x31c49c: 0xacab00c0  sw          $t3, 0xC0($a1)
    ctx->pc = 0x31c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 11));
    // 0x31c4a0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x31c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31c4a4: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31C4A4u;
    SET_GPR_U32(ctx, 31, 0x31C4ACu);
    ctx->pc = 0x31C4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C4A4u;
            // 0x31c4a8: 0xace20370  sw          $v0, 0x370($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C4ACu; }
        if (ctx->pc != 0x31C4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C4ACu; }
        if (ctx->pc != 0x31C4ACu) { return; }
    }
    ctx->pc = 0x31C4ACu;
label_31c4ac:
    // 0x31c4ac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31c4b0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31c4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31c4b4: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x31c4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x31c4b8: 0xc040a04  jal         func_102810
    ctx->pc = 0x31C4B8u;
    SET_GPR_U32(ctx, 31, 0x31C4C0u);
    ctx->pc = 0x31C4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C4B8u;
            // 0x31c4bc: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (runtime->hasFunction(0x102810u)) {
        auto targetFn = runtime->lookupFunction(0x102810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C4C0u; }
        if (ctx->pc != 0x31C4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102810_0x102810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C4C0u; }
        if (ctx->pc != 0x31C4C0u) { return; }
    }
    ctx->pc = 0x31C4C0u;
label_31c4c0:
    // 0x31c4c0: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x31c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_31c4c4:
    // 0x31c4c4: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x31c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x31c4c8: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x31c4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x31c4cc: 0x0  nop
    ctx->pc = 0x31c4ccu;
    // NOP
    // 0x31c4d0: 0x0  nop
    ctx->pc = 0x31c4d0u;
    // NOP
    // 0x31c4d4: 0x0  nop
    ctx->pc = 0x31c4d4u;
    // NOP
    // 0x31c4d8: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31C4D8u;
    {
        const bool branch_taken_0x31c4d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c4d8) {
            ctx->pc = 0x31C4C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31c4c4;
        }
    }
    ctx->pc = 0x31C4E0u;
    // 0x31c4e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x31c4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31c4e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31c4e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31c4e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x31c4e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31c4ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31c4ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31c4f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31c4f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31c4f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31c4f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31c4f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31c4f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31c4fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31c4fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31c500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31c504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c508: 0x3e00008  jr          $ra
    ctx->pc = 0x31C508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C508u;
            // 0x31c50c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31C510u;
    ctx->pc = 0x31c510u;
}
