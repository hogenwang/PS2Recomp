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

// Function: sub_001A82E0
// Address: 0x1a82e0 - 0x1a8968
void sub_001A82E0_0x1a82e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A82E0_0x1a82e0");
#endif

    switch (ctx->pc) {
        case 0x1a8310u: goto label_1a8310;
        case 0x1a8324u: goto label_1a8324;
        case 0x1a8334u: goto label_1a8334;
        case 0x1a8358u: goto label_1a8358;
        case 0x1a83e0u: goto label_1a83e0;
        case 0x1a83e8u: goto label_1a83e8;
        case 0x1a8408u: goto label_1a8408;
        case 0x1a8410u: goto label_1a8410;
        case 0x1a8420u: goto label_1a8420;
        case 0x1a8434u: goto label_1a8434;
        case 0x1a8450u: goto label_1a8450;
        case 0x1a8464u: goto label_1a8464;
        case 0x1a8478u: goto label_1a8478;
        case 0x1a8480u: goto label_1a8480;
        case 0x1a8490u: goto label_1a8490;
        case 0x1a84a4u: goto label_1a84a4;
        case 0x1a84b8u: goto label_1a84b8;
        case 0x1a84d0u: goto label_1a84d0;
        case 0x1a84f0u: goto label_1a84f0;
        case 0x1a8500u: goto label_1a8500;
        case 0x1a8508u: goto label_1a8508;
        case 0x1a8518u: goto label_1a8518;
        case 0x1a852cu: goto label_1a852c;
        case 0x1a8544u: goto label_1a8544;
        case 0x1a855cu: goto label_1a855c;
        case 0x1a8564u: goto label_1a8564;
        case 0x1a8574u: goto label_1a8574;
        case 0x1a8588u: goto label_1a8588;
        case 0x1a8590u: goto label_1a8590;
        case 0x1a85a0u: goto label_1a85a0;
        case 0x1a85b8u: goto label_1a85b8;
        case 0x1a85c0u: goto label_1a85c0;
        case 0x1a85d4u: goto label_1a85d4;
        case 0x1a85d8u: goto label_1a85d8;
        case 0x1a85e0u: goto label_1a85e0;
        case 0x1a85f0u: goto label_1a85f0;
        case 0x1a8628u: goto label_1a8628;
        case 0x1a8658u: goto label_1a8658;
        case 0x1a8664u: goto label_1a8664;
        case 0x1a8674u: goto label_1a8674;
        case 0x1a8688u: goto label_1a8688;
        case 0x1a8690u: goto label_1a8690;
        case 0x1a86a0u: goto label_1a86a0;
        case 0x1a86b4u: goto label_1a86b4;
        case 0x1a86c0u: goto label_1a86c0;
        case 0x1a86d0u: goto label_1a86d0;
        case 0x1a86d8u: goto label_1a86d8;
        case 0x1a86e8u: goto label_1a86e8;
        case 0x1a86f0u: goto label_1a86f0;
        case 0x1a8700u: goto label_1a8700;
        case 0x1a8708u: goto label_1a8708;
        case 0x1a8768u: goto label_1a8768;
        case 0x1a877cu: goto label_1a877c;
        case 0x1a878cu: goto label_1a878c;
        case 0x1a87acu: goto label_1a87ac;
        case 0x1a87f8u: goto label_1a87f8;
        case 0x1a880cu: goto label_1a880c;
        case 0x1a881cu: goto label_1a881c;
        case 0x1a8828u: goto label_1a8828;
        case 0x1a8848u: goto label_1a8848;
        case 0x1a8890u: goto label_1a8890;
        case 0x1a88a4u: goto label_1a88a4;
        case 0x1a88b4u: goto label_1a88b4;
        case 0x1a88c8u: goto label_1a88c8;
        case 0x1a8910u: goto label_1a8910;
        case 0x1a8924u: goto label_1a8924;
        case 0x1a8934u: goto label_1a8934;
        case 0x1a8948u: goto label_1a8948;
        default: break;
    }

    ctx->pc = 0x1a82e0u;

label_1a82e0:
    // 0x1a82e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a82e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a82e4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a82e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a82e8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a82e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a82ec: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1a82ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a82f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a82f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a82f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a82f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a82fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a82fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8304: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a8304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a8308: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A8308u;
    SET_GPR_U32(ctx, 31, 0x1A8310u);
    ctx->pc = 0x1A830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8308u;
    // 0x1a830c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F60u, 0x1A8308u, 0x1A8310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8310u;
label_1a8310:
    // 0x1a8310: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1a8310u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1a8314: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a8314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8318: 0x26103280  addiu       $s0, $s0, 0x3280
    ctx->pc = 0x1a8318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12928));
    // 0x1a831c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A831Cu;
    SET_GPR_U32(ctx, 31, 0x1A8324u);
    ctx->pc = 0x1A8320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A831Cu;
    // 0x1a8320: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A831Cu, 0x1A8324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8324u;
label_1a8324:
    // 0x1a8324: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1a8324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1a8328: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a8328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a832c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A832Cu;
    SET_GPR_U32(ctx, 31, 0x1A8334u);
    ctx->pc = 0x1A8330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A832Cu;
    // 0x1a8330: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A832Cu, 0x1A8334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8334u;
label_1a8334:
    // 0x1a8334: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a8334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1a8338: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a8338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a833c: 0x8c62e148  lw          $v0, -0x1EB8($v1)
    ctx->pc = 0x1a833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959432)));
    // 0x1a8340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8344: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x1a8344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x1a8348: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a8348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x1a834c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a834cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a8350: 0xc06a3de  jal         func_1A8F78
    ctx->pc = 0x1A8350u;
    SET_GPR_U32(ctx, 31, 0x1A8358u);
    ctx->pc = 0x1A8354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8350u;
    // 0x1a8354: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F78u, 0x1A8350u, 0x1A8358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8358u;
label_1a8358:
    // 0x1a8358: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a8358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a835c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a835cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8360: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a8360u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8364: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a8364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8368: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a8368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a836c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a836cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8370: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8370u;
        // 0x1a8374: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8378u;
    // 0x1a8378: 0x27bdfc40  addiu       $sp, $sp, -0x3C0
    ctx->pc = 0x1a8378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966336));
    // 0x1a837c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1a837cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a8380: 0xafa30314  sw          $v1, 0x314($sp)
    ctx->pc = 0x1a8380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 3));
    // 0x1a8384: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a8384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a8388: 0xffbe03a0  sd          $fp, 0x3A0($sp)
    ctx->pc = 0x1a8388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 928), GPR_U64(ctx, 30));
    // 0x1a838c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a838cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a8390: 0xffb70390  sd          $s7, 0x390($sp)
    ctx->pc = 0x1a8390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 23));
    // 0x1a8394: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1a8394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1a8398: 0xffb60380  sd          $s6, 0x380($sp)
    ctx->pc = 0x1a8398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 22));
    // 0x1a839c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1a839cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a83a0: 0xffb50370  sd          $s5, 0x370($sp)
    ctx->pc = 0x1a83a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 21));
    // 0x1a83a4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1a83a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a83a8: 0xffb40360  sd          $s4, 0x360($sp)
    ctx->pc = 0x1a83a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 20));
    // 0x1a83ac: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a83acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a83b0: 0xffbf03b0  sd          $ra, 0x3B0($sp)
    ctx->pc = 0x1a83b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 944), GPR_U64(ctx, 31));
    // 0x1a83b4: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x1a83b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a83b8: 0xffb30350  sd          $s3, 0x350($sp)
    ctx->pc = 0x1a83b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 19));
    // 0x1a83bc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1a83bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a83c0: 0xffb20340  sd          $s2, 0x340($sp)
    ctx->pc = 0x1a83c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 18));
    // 0x1a83c4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1a83c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a83c8: 0xffb10330  sd          $s1, 0x330($sp)
    ctx->pc = 0x1a83c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 17));
    // 0x1a83cc: 0xffb00320  sd          $s0, 0x320($sp)
    ctx->pc = 0x1a83ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 16));
    // 0x1a83d0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A83D0u;
    {
        const bool branch_taken_0x1a83d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83D0u;
        // 0x1a83d4: 0xafa00310  sw          $zero, 0x310($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83d0) {
            ctx->pc = 0x1A83F0u;
            goto label_1a83f0;
        }
    }
    ctx->pc = 0x1A83D8u;
    // 0x1a83d8: 0xc049986  jal         func_126618
    ctx->pc = 0x1A83D8u;
    SET_GPR_U32(ctx, 31, 0x1A83E0u);
    ctx->pc = 0x1A83DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83D8u;
    // 0x1a83dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A83D8u, 0x1A83E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83E0u;
label_1a83e0:
    // 0x1a83e0: 0xc049986  jal         func_126618
    ctx->pc = 0x1A83E0u;
    SET_GPR_U32(ctx, 31, 0x1A83E8u);
    ctx->pc = 0x1A83E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83E0u;
    // 0x1a83e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A83E0u, 0x1A83E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83E8u;
label_1a83e8:
    // 0x1a83e8: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x1A83E8u;
    {
        const bool branch_taken_0x1a83e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83E8u;
        // 0x1a83ec: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83e8) {
            ctx->pc = 0x1A870Cu;
            goto label_1a870c;
        }
    }
    ctx->pc = 0x1A83F0u;
label_1a83f0:
    // 0x1a83f0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a83f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a83f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a83f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a83f8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1a83f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1a83fc: 0x8fa50314  lw          $a1, 0x314($sp)
    ctx->pc = 0x1a83fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
    // 0x1a8400: 0xc06a07a  jal         func_1A81E8
    ctx->pc = 0x1A8400u;
    SET_GPR_U32(ctx, 31, 0x1A8408u);
    ctx->pc = 0x1A8404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8400u;
    // 0x1a8404: 0x2a00b  movn        $s4, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A81E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A81E8u, 0x1A8400u, 0x1A8408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8408u;
label_1a8408:
    // 0x1a8408: 0xc06a032  jal         func_1A80C8
    ctx->pc = 0x1A8408u;
    SET_GPR_U32(ctx, 31, 0x1A8410u);
    ctx->pc = 0x1A840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8408u;
    // 0x1a840c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80C8u, 0x1A8408u, 0x1A8410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8410u;
label_1a8410:
    // 0x1a8410: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1A8410u;
    {
        const bool branch_taken_0x1a8410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8410) {
            ctx->pc = 0x1A8408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a8408;
        }
    }
    ctx->pc = 0x1A8418u;
    // 0x1a8418: 0xc06a042  jal         func_1A8108
    ctx->pc = 0x1A8418u;
    SET_GPR_U32(ctx, 31, 0x1A8420u);
    ctx->pc = 0x1A841Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8418u;
    // 0x1a841c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8108u, 0x1A8418u, 0x1A8420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8420u;
label_1a8420:
    // 0x1a8420: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x1a8420u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8424: 0x1e400005  bgtz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8424u;
    {
        const bool branch_taken_0x1a8424 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x1A8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8424u;
        // 0x1a8428: 0x24050240  addiu       $a1, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8424) {
            ctx->pc = 0x1A843Cu;
            goto label_1a843c;
        }
    }
    ctx->pc = 0x1A842Cu;
    // 0x1a842c: 0xc049986  jal         func_126618
    ctx->pc = 0x1A842Cu;
    SET_GPR_U32(ctx, 31, 0x1A8434u);
    ctx->pc = 0x1A8430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A842Cu;
    // 0x1a8430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A842Cu, 0x1A8434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8434u;
label_1a8434:
    // 0x1a8434: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1A8434u;
    {
        const bool branch_taken_0x1a8434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8434u;
        // 0x1a8438: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8434) {
            ctx->pc = 0x1A86B8u;
            goto label_1a86b8;
        }
    }
    ctx->pc = 0x1A843Cu;
label_1a843c:
    // 0x1a843c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1a843cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8440: 0x2050018  mult        $zero, $s0, $a1
    ctx->pc = 0x1a8440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1a8444: 0x2812  mflo        $a1
    ctx->pc = 0x1a8444u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1a8448: 0xc049902  jal         func_126408
    ctx->pc = 0x1A8448u;
    SET_GPR_U32(ctx, 31, 0x1A8450u);
    ctx->pc = 0x1A844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8448u;
    // 0x1a844c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126408u, 0x1A8448u, 0x1A8450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8450u;
label_1a8450:
    // 0x1a8450: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a8450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8454: 0x1260003f  beqz        $s3, . + 4 + (0x3F << 2)
    ctx->pc = 0x1A8454u;
    {
        const bool branch_taken_0x1a8454 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8454u;
        // 0x1a8458: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8454) {
            ctx->pc = 0x1A8554u;
            goto label_1a8554;
        }
    }
    ctx->pc = 0x1A845Cu;
    // 0x1a845c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1A845Cu;
    SET_GPR_U32(ctx, 31, 0x1A8464u);
    ctx->pc = 0x1A8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A845Cu;
    // 0x1a8460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x1A845Cu, 0x1A8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8464u;
label_1a8464:
    // 0x1a8464: 0x8fa50314  lw          $a1, 0x314($sp)
    ctx->pc = 0x1a8464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
    // 0x1a8468: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a8468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a846c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a846cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8470: 0xc06a094  jal         func_1A8250
    ctx->pc = 0x1A8470u;
    SET_GPR_U32(ctx, 31, 0x1A8478u);
    ctx->pc = 0x1A8474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8470u;
    // 0x1a8474: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8250u, 0x1A8470u, 0x1A8478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8478u;
label_1a8478:
    // 0x1a8478: 0xc06a032  jal         func_1A80C8
    ctx->pc = 0x1A8478u;
    SET_GPR_U32(ctx, 31, 0x1A8480u);
    ctx->pc = 0x1A847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8478u;
    // 0x1a847c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80C8u, 0x1A8478u, 0x1A8480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8480u;
label_1a8480:
    // 0x1a8480: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1A8480u;
    {
        const bool branch_taken_0x1a8480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8480) {
            ctx->pc = 0x1A8478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a8478;
        }
    }
    ctx->pc = 0x1A8488u;
    // 0x1a8488: 0xc06a042  jal         func_1A8108
    ctx->pc = 0x1A8488u;
    SET_GPR_U32(ctx, 31, 0x1A8490u);
    ctx->pc = 0x1A848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8488u;
    // 0x1a848c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8108u, 0x1A8488u, 0x1A8490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8490u;
label_1a8490:
    // 0x1a8490: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a8490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8494: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8494u;
    {
        const bool branch_taken_0x1a8494 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8494u;
        // 0x1a8498: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8494) {
            ctx->pc = 0x1A84ACu;
            goto label_1a84ac;
        }
    }
    ctx->pc = 0x1A849Cu;
    // 0x1a849c: 0xc049986  jal         func_126618
    ctx->pc = 0x1A849Cu;
    SET_GPR_U32(ctx, 31, 0x1A84A4u);
    ctx->pc = 0x1A84A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A849Cu;
    // 0x1a84a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A849Cu, 0x1A84A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84A4u;
label_1a84a4:
    // 0x1a84a4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1A84A4u;
    {
        const bool branch_taken_0x1a84a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84A4u;
        // 0x1a84a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84a4) {
            ctx->pc = 0x1A86B8u;
            goto label_1a86b8;
        }
    }
    ctx->pc = 0x1A84ACu;
label_1a84ac:
    // 0x1a84ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A84ACu;
    {
        const bool branch_taken_0x1a84ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84ACu;
        // 0x1a84b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84ac) {
            ctx->pc = 0x1A84BCu;
            goto label_1a84bc;
        }
    }
    ctx->pc = 0x1A84B4u;
    // 0x1a84b4: 0x0  nop
    ctx->pc = 0x1a84b4u;
    // NOP
label_1a84b8:
    // 0x1a84b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a84b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a84bc:
    // 0x1a84bc: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1a84bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1a84c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A84C0u;
    {
        const bool branch_taken_0x1a84c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84C0u;
        // 0x1a84c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84c0) {
            ctx->pc = 0x1A84DCu;
            goto label_1a84dc;
        }
    }
    ctx->pc = 0x1A84C8u;
    // 0x1a84c8: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x1A84C8u;
    SET_GPR_U32(ctx, 31, 0x1A84D0u);
    ctx->pc = 0x1A84CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84C8u;
    // 0x1a84cc: 0x26050108  addiu       $a1, $s0, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x1A84C8u, 0x1A84D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84D0u;
label_1a84d0:
    // 0x1a84d0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A84D0u;
    {
        const bool branch_taken_0x1a84d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a84d0) {
            ctx->pc = 0x1A84D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A84D0u;
            // 0x1a84d4: 0x26100240  addiu       $s0, $s0, 0x240 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A84B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a84b8;
        }
    }
    ctx->pc = 0x1A84D8u;
    // 0x1a84d8: 0xafb00310  sw          $s0, 0x310($sp)
    ctx->pc = 0x1a84d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 16));
label_1a84dc:
    // 0x1a84dc: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x1a84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1a84e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A84E0u;
    {
        const bool branch_taken_0x1a84e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A84E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84E0u;
        // 0x1a84e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84e0) {
            ctx->pc = 0x1A84F8u;
            goto label_1a84f8;
        }
    }
    ctx->pc = 0x1A84E8u;
    // 0x1a84e8: 0xc049986  jal         func_126618
    ctx->pc = 0x1A84E8u;
    SET_GPR_U32(ctx, 31, 0x1A84F0u);
    ctx->pc = 0x1A84ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84E8u;
    // 0x1a84ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A84E8u, 0x1A84F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84F0u;
label_1a84f0:
    // 0x1a84f0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1A84F0u;
    {
        const bool branch_taken_0x1a84f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84F0u;
        // 0x1a84f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84f0) {
            ctx->pc = 0x1A865Cu;
            goto label_1a865c;
        }
    }
    ctx->pc = 0x1A84F8u;
label_1a84f8:
    // 0x1a84f8: 0xc06a07a  jal         func_1A81E8
    ctx->pc = 0x1A84F8u;
    SET_GPR_U32(ctx, 31, 0x1A8500u);
    ctx->pc = 0x1A84FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84F8u;
    // 0x1a84fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A81E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A81E8u, 0x1A84F8u, 0x1A8500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8500u;
label_1a8500:
    // 0x1a8500: 0xc06a032  jal         func_1A80C8
    ctx->pc = 0x1A8500u;
    SET_GPR_U32(ctx, 31, 0x1A8508u);
    ctx->pc = 0x1A8504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8500u;
    // 0x1a8504: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80C8u, 0x1A8500u, 0x1A8508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8508u;
label_1a8508:
    // 0x1a8508: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1A8508u;
    {
        const bool branch_taken_0x1a8508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8508) {
            ctx->pc = 0x1A8500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a8500;
        }
    }
    ctx->pc = 0x1A8510u;
    // 0x1a8510: 0xc06a042  jal         func_1A8108
    ctx->pc = 0x1A8510u;
    SET_GPR_U32(ctx, 31, 0x1A8518u);
    ctx->pc = 0x1A8514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8510u;
    // 0x1a8514: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8108u, 0x1A8510u, 0x1A8518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8518u;
label_1a8518:
    // 0x1a8518: 0x8fb50000  lw          $s5, 0x0($sp)
    ctx->pc = 0x1a8518u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a851c: 0x1ea00005  bgtz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A851Cu;
    {
        const bool branch_taken_0x1a851c = (GPR_S32(ctx, 21) > 0);
        ctx->pc = 0x1A8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A851Cu;
        // 0x1a8520: 0x24050240  addiu       $a1, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a851c) {
            ctx->pc = 0x1A8534u;
            goto label_1a8534;
        }
    }
    ctx->pc = 0x1A8524u;
    // 0x1a8524: 0xc049986  jal         func_126618
    ctx->pc = 0x1A8524u;
    SET_GPR_U32(ctx, 31, 0x1A852Cu);
    ctx->pc = 0x1A8528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8524u;
    // 0x1a8528: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A8524u, 0x1A852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A852Cu;
label_1a852c:
    // 0x1a852c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1A852Cu;
    {
        const bool branch_taken_0x1a852c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A852Cu;
        // 0x1a8530: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a852c) {
            ctx->pc = 0x1A86B8u;
            goto label_1a86b8;
        }
    }
    ctx->pc = 0x1A8534u;
label_1a8534:
    // 0x1a8534: 0x2a50018  mult        $zero, $s5, $a1
    ctx->pc = 0x1a8534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1a8538: 0x2812  mflo        $a1
    ctx->pc = 0x1a8538u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1a853c: 0xc049902  jal         func_126408
    ctx->pc = 0x1A853Cu;
    SET_GPR_U32(ctx, 31, 0x1A8544u);
    ctx->pc = 0x1A8540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A853Cu;
    // 0x1a8540: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126408u, 0x1A853Cu, 0x1A8544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8544u;
label_1a8544:
    // 0x1a8544: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a8544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8548: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8548u;
    {
        const bool branch_taken_0x1a8548 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8548) {
            ctx->pc = 0x1A856Cu;
            goto label_1a856c;
        }
    }
    ctx->pc = 0x1A8550u;
    // 0x1a8550: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a8550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a8554:
    // 0x1a8554: 0xc049986  jal         func_126618
    ctx->pc = 0x1A8554u;
    SET_GPR_U32(ctx, 31, 0x1A855Cu);
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A8554u, 0x1A855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A855Cu;
label_1a855c:
    // 0x1a855c: 0xc049986  jal         func_126618
    ctx->pc = 0x1A855Cu;
    SET_GPR_U32(ctx, 31, 0x1A8564u);
    ctx->pc = 0x1A8560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A855Cu;
    // 0x1a8560: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A855Cu, 0x1A8564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8564u;
label_1a8564:
    // 0x1a8564: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1A8564u;
    {
        const bool branch_taken_0x1a8564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8564u;
        // 0x1a8568: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8564) {
            ctx->pc = 0x1A870Cu;
            goto label_1a870c;
        }
    }
    ctx->pc = 0x1A856Cu;
label_1a856c:
    // 0x1a856c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1A856Cu;
    SET_GPR_U32(ctx, 31, 0x1A8574u);
    ctx->pc = 0x1A8570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A856Cu;
    // 0x1a8570: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x1A856Cu, 0x1A8574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8574u;
label_1a8574:
    // 0x1a8574: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a8574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a857c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a857cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8580: 0xc06a094  jal         func_1A8250
    ctx->pc = 0x1A8580u;
    SET_GPR_U32(ctx, 31, 0x1A8588u);
    ctx->pc = 0x1A8584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8580u;
    // 0x1a8584: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8250u, 0x1A8580u, 0x1A8588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8588u;
label_1a8588:
    // 0x1a8588: 0xc06a032  jal         func_1A80C8
    ctx->pc = 0x1A8588u;
    SET_GPR_U32(ctx, 31, 0x1A8590u);
    ctx->pc = 0x1A858Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8588u;
    // 0x1a858c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80C8u, 0x1A8588u, 0x1A8590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8590u;
label_1a8590:
    // 0x1a8590: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1A8590u;
    {
        const bool branch_taken_0x1a8590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8590) {
            ctx->pc = 0x1A8588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a8588;
        }
    }
    ctx->pc = 0x1A8598u;
    // 0x1a8598: 0xc06a042  jal         func_1A8108
    ctx->pc = 0x1A8598u;
    SET_GPR_U32(ctx, 31, 0x1A85A0u);
    ctx->pc = 0x1A859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8598u;
    // 0x1a859c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8108u, 0x1A8598u, 0x1A85A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A85A0u;
label_1a85a0:
    // 0x1a85a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a85a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a85a4: 0x4600041  bltz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1A85A4u;
    {
        const bool branch_taken_0x1a85a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1A85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85A4u;
        // 0x1a85a8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85a4) {
            ctx->pc = 0x1A86ACu;
            goto label_1a86ac;
        }
    }
    ctx->pc = 0x1A85ACu;
    // 0x1a85ac: 0x1aa00026  blez        $s5, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A85ACu;
    {
        const bool branch_taken_0x1a85ac = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x1A85B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85ACu;
        // 0x1a85b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85ac) {
            ctx->pc = 0x1A8648u;
            goto label_1a8648;
        }
    }
    ctx->pc = 0x1A85B4u;
    // 0x1a85b4: 0x0  nop
    ctx->pc = 0x1a85b4u;
    // NOP
label_1a85b8:
    // 0x1a85b8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1A85B8u;
    SET_GPR_U32(ctx, 31, 0x1A85C0u);
    ctx->pc = 0x1A85BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85B8u;
    // 0x1a85bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x1A85B8u, 0x1A85C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A85C0u;
label_1a85c0:
    // 0x1a85c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a85c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a85c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85c8: 0x26060108  addiu       $a2, $s0, 0x108
    ctx->pc = 0x1a85c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    // 0x1a85cc: 0xc06a0b8  jal         func_1A82E0
    ctx->pc = 0x1A85CCu;
    SET_GPR_U32(ctx, 31, 0x1A85D4u);
    ctx->pc = 0x1A85D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85CCu;
    // 0x1a85d0: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A82E0u;
    goto label_1a82e0;
    ctx->pc = 0x1A85D4u;
label_1a85d4:
    // 0x1a85d4: 0x0  nop
    ctx->pc = 0x1a85d4u;
    // NOP
label_1a85d8:
    // 0x1a85d8: 0xc06a032  jal         func_1A80C8
    ctx->pc = 0x1A85D8u;
    SET_GPR_U32(ctx, 31, 0x1A85E0u);
    ctx->pc = 0x1A85DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85D8u;
    // 0x1a85dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80C8u, 0x1A85D8u, 0x1A85E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A85E0u;
label_1a85e0:
    // 0x1a85e0: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1A85E0u;
    {
        const bool branch_taken_0x1a85e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a85e0) {
            ctx->pc = 0x1A85D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a85d8;
        }
    }
    ctx->pc = 0x1A85E8u;
    // 0x1a85e8: 0xc06a042  jal         func_1A8108
    ctx->pc = 0x1A85E8u;
    SET_GPR_U32(ctx, 31, 0x1A85F0u);
    ctx->pc = 0x1A85ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85E8u;
    // 0x1a85ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8108u, 0x1A85E8u, 0x1A85F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A85F0u;
label_1a85f0:
    // 0x1a85f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a85f4: 0x4600034  bltz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1A85F4u;
    {
        const bool branch_taken_0x1a85f4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1A85F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85F4u;
        // 0x1a85f8: 0x8fa20314  lw          $v0, 0x314($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85f4) {
            ctx->pc = 0x1A86C8u;
            goto label_1a86c8;
        }
    }
    ctx->pc = 0x1A85FCu;
    // 0x1a85fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8600: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8600u;
    {
        const bool branch_taken_0x1a8600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A8604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8600u;
        // 0x1a8604: 0x8fa30310  lw          $v1, 0x310($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8600) {
            ctx->pc = 0x1A8618u;
            goto label_1a8618;
        }
    }
    ctx->pc = 0x1A8608u;
    // 0x1a8608: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x1a8608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1a860c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a860cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8610: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8610u;
    {
        const bool branch_taken_0x1a8610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8610u;
        // 0x1a8614: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8610) {
            ctx->pc = 0x1A8620u;
            goto label_1a8620;
        }
    }
    ctx->pc = 0x1A8618u;
label_1a8618:
    // 0x1a8618: 0x26e50100  addiu       $a1, $s7, 0x100
    ctx->pc = 0x1a8618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 256));
    // 0x1a861c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1a861cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1a8620:
    // 0x1a8620: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x1A8620u;
    SET_GPR_U32(ctx, 31, 0x1A8628u);
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x1A8620u, 0x1A8628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8628u;
label_1a8628:
    // 0x1a8628: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8628u;
    {
        const bool branch_taken_0x1a8628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8628) {
            ctx->pc = 0x1A862Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8628u;
            // 0x1a862c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A863Cu;
            goto label_1a863c;
        }
    }
    ctx->pc = 0x1A8630u;
    // 0x1a8630: 0x17c0002b  bnez        $fp, . + 4 + (0x2B << 2)
    ctx->pc = 0x1A8630u;
    {
        const bool branch_taken_0x1a8630 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8630u;
        // 0x1a8634: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8630) {
            ctx->pc = 0x1A86E0u;
            goto label_1a86e0;
        }
    }
    ctx->pc = 0x1A8638u;
    // 0x1a8638: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a8638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a863c:
    // 0x1a863c: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x1a863cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1a8640: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1A8640u;
    {
        const bool branch_taken_0x1a8640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8640u;
        // 0x1a8644: 0x26100240  addiu       $s0, $s0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8640) {
            ctx->pc = 0x1A85B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a85b8;
        }
    }
    ctx->pc = 0x1A8648u;
label_1a8648:
    // 0x1a8648: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8648u;
    {
        const bool branch_taken_0x1a8648 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8648) {
            ctx->pc = 0x1A866Cu;
            goto label_1a866c;
        }
    }
    ctx->pc = 0x1A8650u;
    // 0x1a8650: 0xc049986  jal         func_126618
    ctx->pc = 0x1A8650u;
    SET_GPR_U32(ctx, 31, 0x1A8658u);
    ctx->pc = 0x1A8654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8650u;
    // 0x1a8654: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A8650u, 0x1A8658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8658u;
label_1a8658:
    // 0x1a8658: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a8658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a865c:
    // 0x1a865c: 0xc049986  jal         func_126618
    ctx->pc = 0x1A865Cu;
    SET_GPR_U32(ctx, 31, 0x1A8664u);
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A865Cu, 0x1A8664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8664u;
label_1a8664:
    // 0x1a8664: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1A8664u;
    {
        const bool branch_taken_0x1a8664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8664u;
        // 0x1a8668: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8664) {
            ctx->pc = 0x1A870Cu;
            goto label_1a870c;
        }
    }
    ctx->pc = 0x1A866Cu;
label_1a866c:
    // 0x1a866c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1A866Cu;
    SET_GPR_U32(ctx, 31, 0x1A8674u);
    ctx->pc = 0x1A8670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A866Cu;
    // 0x1a8670: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x1A866Cu, 0x1A8674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8674u;
label_1a8674:
    // 0x1a8674: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a8674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8678: 0x27c60108  addiu       $a2, $fp, 0x108
    ctx->pc = 0x1a8678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 264));
    // 0x1a867c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1a867cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8680: 0xc06a0b8  jal         func_1A82E0
    ctx->pc = 0x1A8680u;
    SET_GPR_U32(ctx, 31, 0x1A8688u);
    ctx->pc = 0x1A8684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8680u;
    // 0x1a8684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A82E0u;
    goto label_1a82e0;
    ctx->pc = 0x1A8688u;
label_1a8688:
    // 0x1a8688: 0xc06a032  jal         func_1A80C8
    ctx->pc = 0x1A8688u;
    SET_GPR_U32(ctx, 31, 0x1A8690u);
    ctx->pc = 0x1A868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8688u;
    // 0x1a868c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80C8u, 0x1A8688u, 0x1A8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8690u;
label_1a8690:
    // 0x1a8690: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1A8690u;
    {
        const bool branch_taken_0x1a8690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8690) {
            ctx->pc = 0x1A8688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a8688;
        }
    }
    ctx->pc = 0x1A8698u;
    // 0x1a8698: 0xc06a042  jal         func_1A8108
    ctx->pc = 0x1A8698u;
    SET_GPR_U32(ctx, 31, 0x1A86A0u);
    ctx->pc = 0x1A869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8698u;
    // 0x1a869c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8108u, 0x1A8698u, 0x1A86A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86A0u;
label_1a86a0:
    // 0x1a86a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a86a4: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A86A4u;
    {
        const bool branch_taken_0x1a86a4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a86a4) {
            ctx->pc = 0x1A86F8u;
            goto label_1a86f8;
        }
    }
    ctx->pc = 0x1A86ACu;
label_1a86ac:
    // 0x1a86ac: 0xc049986  jal         func_126618
    ctx->pc = 0x1A86ACu;
    SET_GPR_U32(ctx, 31, 0x1A86B4u);
    ctx->pc = 0x1A86B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86ACu;
    // 0x1a86b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A86ACu, 0x1A86B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86B4u;
label_1a86b4:
    // 0x1a86b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a86b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a86b8:
    // 0x1a86b8: 0xc049986  jal         func_126618
    ctx->pc = 0x1A86B8u;
    SET_GPR_U32(ctx, 31, 0x1A86C0u);
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A86B8u, 0x1A86C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86C0u;
label_1a86c0:
    // 0x1a86c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A86C0u;
    {
        const bool branch_taken_0x1a86c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86C0u;
        // 0x1a86c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86c0) {
            ctx->pc = 0x1A870Cu;
            goto label_1a870c;
        }
    }
    ctx->pc = 0x1A86C8u;
label_1a86c8:
    // 0x1a86c8: 0xc049986  jal         func_126618
    ctx->pc = 0x1A86C8u;
    SET_GPR_U32(ctx, 31, 0x1A86D0u);
    ctx->pc = 0x1A86CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86C8u;
    // 0x1a86cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A86C8u, 0x1A86D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86D0u;
label_1a86d0:
    // 0x1a86d0: 0xc049986  jal         func_126618
    ctx->pc = 0x1A86D0u;
    SET_GPR_U32(ctx, 31, 0x1A86D8u);
    ctx->pc = 0x1A86D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86D0u;
    // 0x1a86d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A86D0u, 0x1A86D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86D8u;
label_1a86d8:
    // 0x1a86d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A86D8u;
    {
        const bool branch_taken_0x1a86d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86D8u;
        // 0x1a86dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86d8) {
            ctx->pc = 0x1A870Cu;
            goto label_1a870c;
        }
    }
    ctx->pc = 0x1A86E0u;
label_1a86e0:
    // 0x1a86e0: 0xc049986  jal         func_126618
    ctx->pc = 0x1A86E0u;
    SET_GPR_U32(ctx, 31, 0x1A86E8u);
    ctx->pc = 0x1A86E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86E0u;
    // 0x1a86e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A86E0u, 0x1A86E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86E8u;
label_1a86e8:
    // 0x1a86e8: 0xc049986  jal         func_126618
    ctx->pc = 0x1A86E8u;
    SET_GPR_U32(ctx, 31, 0x1A86F0u);
    ctx->pc = 0x1A86ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86E8u;
    // 0x1a86ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A86E8u, 0x1A86F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86F0u;
label_1a86f0:
    // 0x1a86f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A86F0u;
    {
        const bool branch_taken_0x1a86f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A86F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86F0u;
        // 0x1a86f4: 0x2402fff4  addiu       $v0, $zero, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86f0) {
            ctx->pc = 0x1A870Cu;
            goto label_1a870c;
        }
    }
    ctx->pc = 0x1A86F8u;
label_1a86f8:
    // 0x1a86f8: 0xc049986  jal         func_126618
    ctx->pc = 0x1A86F8u;
    SET_GPR_U32(ctx, 31, 0x1A8700u);
    ctx->pc = 0x1A86FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86F8u;
    // 0x1a86fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A86F8u, 0x1A8700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8700u;
label_1a8700:
    // 0x1a8700: 0xc049986  jal         func_126618
    ctx->pc = 0x1A8700u;
    SET_GPR_U32(ctx, 31, 0x1A8708u);
    ctx->pc = 0x1A8704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8700u;
    // 0x1a8704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x1A8700u, 0x1A8708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8708u;
label_1a8708:
    // 0x1a8708: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a8708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a870c:
    // 0x1a870c: 0xdfbf03b0  ld          $ra, 0x3B0($sp)
    ctx->pc = 0x1a870cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x1a8710: 0xdfbe03a0  ld          $fp, 0x3A0($sp)
    ctx->pc = 0x1a8710u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x1a8714: 0xdfb70390  ld          $s7, 0x390($sp)
    ctx->pc = 0x1a8714u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1a8718: 0xdfb60380  ld          $s6, 0x380($sp)
    ctx->pc = 0x1a8718u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x1a871c: 0xdfb50370  ld          $s5, 0x370($sp)
    ctx->pc = 0x1a871cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1a8720: 0xdfb40360  ld          $s4, 0x360($sp)
    ctx->pc = 0x1a8720u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x1a8724: 0xdfb30350  ld          $s3, 0x350($sp)
    ctx->pc = 0x1a8724u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1a8728: 0xdfb20340  ld          $s2, 0x340($sp)
    ctx->pc = 0x1a8728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1a872c: 0xdfb10330  ld          $s1, 0x330($sp)
    ctx->pc = 0x1a872cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1a8730: 0xdfb00320  ld          $s0, 0x320($sp)
    ctx->pc = 0x1a8730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1a8734: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8734u;
        // 0x1a8738: 0x27bd03c0  addiu       $sp, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A873Cu;
    // 0x1a873c: 0x0  nop
    ctx->pc = 0x1a873cu;
    // NOP
    // 0x1a8740: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a8740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a8744: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a8744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a8748: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a8748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a874c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a874cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8750: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a8750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a8754: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a8754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a875c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a875cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a8760: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A8760u;
    SET_GPR_U32(ctx, 31, 0x1A8768u);
    ctx->pc = 0x1A8764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8760u;
    // 0x1a8764: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F60u, 0x1A8760u, 0x1A8768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8768u;
label_1a8768:
    // 0x1a8768: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1a8768u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1a876c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a876cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8770: 0x26103280  addiu       $s0, $s0, 0x3280
    ctx->pc = 0x1a8770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12928));
    // 0x1a8774: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A8774u;
    SET_GPR_U32(ctx, 31, 0x1A877Cu);
    ctx->pc = 0x1A8778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8774u;
    // 0x1a8778: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A8774u, 0x1A877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A877Cu;
label_1a877c:
    // 0x1a877c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1a877cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1a8780: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a8780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8784: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A8784u;
    SET_GPR_U32(ctx, 31, 0x1A878Cu);
    ctx->pc = 0x1A8788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8784u;
    // 0x1a8788: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A8784u, 0x1A878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A878Cu;
label_1a878c:
    // 0x1a878c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a878cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1a8790: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a8790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a8794: 0x8c62e148  lw          $v0, -0x1EB8($v1)
    ctx->pc = 0x1a8794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959432)));
    // 0x1a8798: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a879c: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a879cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x1a87a0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1a87a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a87a4: 0xc06a3de  jal         func_1A8F78
    ctx->pc = 0x1A87A4u;
    SET_GPR_U32(ctx, 31, 0x1A87ACu);
    ctx->pc = 0x1A87A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A87A4u;
    // 0x1a87a8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F78u, 0x1A87A4u, 0x1A87ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A87ACu;
label_1a87ac:
    // 0x1a87ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a87acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a87b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a87b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a87b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a87b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a87b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a87b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a87bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a87bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a87c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A87C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A87C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87C0u;
        // 0x1a87c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A87C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A87C8u;
    // 0x1a87c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a87c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a87cc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a87ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a87d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a87d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a87d4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1a87d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a87d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a87d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a87dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a87dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a87e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a87e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a87e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a87e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a87e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a87e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a87ec: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a87ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a87f0: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A87F0u;
    SET_GPR_U32(ctx, 31, 0x1A87F8u);
    ctx->pc = 0x1A87F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A87F0u;
    // 0x1a87f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F60u, 0x1A87F0u, 0x1A87F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A87F8u;
label_1a87f8:
    // 0x1a87f8: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1a87f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1a87fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a87fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8800: 0x26103280  addiu       $s0, $s0, 0x3280
    ctx->pc = 0x1a8800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12928));
    // 0x1a8804: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A8804u;
    SET_GPR_U32(ctx, 31, 0x1A880Cu);
    ctx->pc = 0x1A8808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8804u;
    // 0x1a8808: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A8804u, 0x1A880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A880Cu;
label_1a880c:
    // 0x1a880c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1a880cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1a8810: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a8810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8814: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A8814u;
    SET_GPR_U32(ctx, 31, 0x1A881Cu);
    ctx->pc = 0x1A8818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8814u;
    // 0x1a8818: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A8814u, 0x1A881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A881Cu;
label_1a881c:
    // 0x1a881c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a881cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8820: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A8820u;
    SET_GPR_U32(ctx, 31, 0x1A8828u);
    ctx->pc = 0x1A8824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8820u;
    // 0x1a8824: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A8820u, 0x1A8828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8828u;
label_1a8828:
    // 0x1a8828: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a8828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1a882c: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a882cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a8830: 0x8c62e148  lw          $v0, -0x1EB8($v1)
    ctx->pc = 0x1a8830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959432)));
    // 0x1a8834: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8838: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a8838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x1a883c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a883cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a8840: 0xc06a3de  jal         func_1A8F78
    ctx->pc = 0x1A8840u;
    SET_GPR_U32(ctx, 31, 0x1A8848u);
    ctx->pc = 0x1A8844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8840u;
    // 0x1a8844: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F78u, 0x1A8840u, 0x1A8848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8848u;
label_1a8848:
    // 0x1a8848: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a8848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a884c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a884cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8850: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a8850u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8854: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a8854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8858: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a8858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a885c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a885cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8860: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8860u;
        // 0x1a8864: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8868u;
    // 0x1a8868: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a8868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a886c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a886cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a8870: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a8870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a8874: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a8874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8878: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a8878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a887c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a887cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8880: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8884: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a8884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a8888: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A8888u;
    SET_GPR_U32(ctx, 31, 0x1A8890u);
    ctx->pc = 0x1A888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8888u;
    // 0x1a888c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F60u, 0x1A8888u, 0x1A8890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8890u;
label_1a8890:
    // 0x1a8890: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1a8890u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1a8894: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a8894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8898: 0x26103280  addiu       $s0, $s0, 0x3280
    ctx->pc = 0x1a8898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12928));
    // 0x1a889c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A889Cu;
    SET_GPR_U32(ctx, 31, 0x1A88A4u);
    ctx->pc = 0x1A88A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A889Cu;
    // 0x1a88a0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A889Cu, 0x1A88A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88A4u;
label_1a88a4:
    // 0x1a88a4: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1a88a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1a88a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a88a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88ac: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A88ACu;
    SET_GPR_U32(ctx, 31, 0x1A88B4u);
    ctx->pc = 0x1A88B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A88ACu;
    // 0x1a88b0: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A88ACu, 0x1A88B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88B4u;
label_1a88b4:
    // 0x1a88b4: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a88b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a88b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a88b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88bc: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a88bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x1a88c0: 0xc06a3de  jal         func_1A8F78
    ctx->pc = 0x1A88C0u;
    SET_GPR_U32(ctx, 31, 0x1A88C8u);
    ctx->pc = 0x1A88C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A88C0u;
    // 0x1a88c4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F78u, 0x1A88C0u, 0x1A88C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88C8u;
label_1a88c8:
    // 0x1a88c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a88c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a88cc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a88ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a88d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a88d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a88d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a88d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a88d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a88d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a88dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A88DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A88E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88DCu;
        // 0x1a88e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A88DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A88E4u;
    // 0x1a88e4: 0x0  nop
    ctx->pc = 0x1a88e4u;
    // NOP
    // 0x1a88e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a88e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a88ec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a88ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a88f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a88f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a88f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a88f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a88f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a88fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a88fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8900: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8904: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a8904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a8908: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A8908u;
    SET_GPR_U32(ctx, 31, 0x1A8910u);
    ctx->pc = 0x1A890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8908u;
    // 0x1a890c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F60u, 0x1A8908u, 0x1A8910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8910u;
label_1a8910:
    // 0x1a8910: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1a8910u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1a8914: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a8914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8918: 0x26103280  addiu       $s0, $s0, 0x3280
    ctx->pc = 0x1a8918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12928));
    // 0x1a891c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A891Cu;
    SET_GPR_U32(ctx, 31, 0x1A8924u);
    ctx->pc = 0x1A8920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A891Cu;
    // 0x1a8920: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A891Cu, 0x1A8924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8924u;
label_1a8924:
    // 0x1a8924: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1a8924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1a8928: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a8928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a892c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A892Cu;
    SET_GPR_U32(ctx, 31, 0x1A8934u);
    ctx->pc = 0x1A8930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A892Cu;
    // 0x1a8930: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A892Cu, 0x1A8934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8934u;
label_1a8934:
    // 0x1a8934: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a8934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a8938: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a893c: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a893cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x1a8940: 0xc06a3de  jal         func_1A8F78
    ctx->pc = 0x1A8940u;
    SET_GPR_U32(ctx, 31, 0x1A8948u);
    ctx->pc = 0x1A8944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8940u;
    // 0x1a8944: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F78u, 0x1A8940u, 0x1A8948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8948u;
label_1a8948:
    // 0x1a8948: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a8948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a894c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a894cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8950: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a8950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8954: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a8954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a895c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A895Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A895Cu;
        // 0x1a8960: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A895Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8964u;
    // 0x1a8964: 0x0  nop
    ctx->pc = 0x1a8964u;
    // NOP
}
