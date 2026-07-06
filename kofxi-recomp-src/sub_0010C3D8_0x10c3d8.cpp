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

// Function: sub_0010C3D8
// Address: 0x10c3d8 - 0x10c590
void sub_0010C3D8_0x10c3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C3D8_0x10c3d8");
#endif

    switch (ctx->pc) {
        case 0x10c45cu: goto label_10c45c;
        case 0x10c468u: goto label_10c468;
        case 0x10c498u: goto label_10c498;
        case 0x10c528u: goto label_10c528;
        case 0x10c550u: goto label_10c550;
        default: break;
    }

    ctx->pc = 0x10c3d8u;

    // 0x10c3d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10c3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10c3dc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10c3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10c3e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10c3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10c3e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10c3e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c3ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10c3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10c3f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c3f4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10c3f8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x10c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10c3fc: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x10c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x10c400: 0x3053007f  andi        $s3, $v0, 0x7F
    ctx->pc = 0x10c400u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x10c404: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x10c404u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x10c408: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x10c408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x10c40c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x10c40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x10c410: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x10c410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c414: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10c414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10c418: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x10c418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10c41c: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x10c41cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10c420: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10c420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10c424: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x10C424u;
    {
        const bool branch_taken_0x10c424 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C424u;
        // 0x10c428: 0xa28823  subu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c424) {
            ctx->pc = 0x10C45Cu;
            goto label_10c45c;
        }
    }
    ctx->pc = 0x10C42Cu;
    // 0x10c42c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x10c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x10c430: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10C430u;
    {
        const bool branch_taken_0x10c430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C430u;
        // 0x10c434: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c430) {
            ctx->pc = 0x10C45Cu;
            goto label_10c45c;
        }
    }
    ctx->pc = 0x10C438u;
    // 0x10c438: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c43c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x10c43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x10c440: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x10c440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x10c444: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x10c444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x10c448: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x10c448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x10c44c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x10c450: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10c450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10c454: 0xc043080  jal         func_10C200
    ctx->pc = 0x10C454u;
    SET_GPR_U32(ctx, 31, 0x10C45Cu);
    ctx->pc = 0x10C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C454u;
    // 0x10c458: 0x34840100  ori         $a0, $a0, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C200u, 0x10C454u, 0x10C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C45Cu;
label_10c45c:
    // 0x10c45c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c460: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10c460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10c464: 0x0  nop
    ctx->pc = 0x10c464u;
    // NOP
label_10c468:
    // 0x10c468: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c46c: 0x0  nop
    ctx->pc = 0x10c46cu;
    // NOP
    // 0x10c470: 0x0  nop
    ctx->pc = 0x10c470u;
    // NOP
    // 0x10c474: 0x0  nop
    ctx->pc = 0x10c474u;
    // NOP
    // 0x10c478: 0x0  nop
    ctx->pc = 0x10c478u;
    // NOP
    // 0x10c47c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C47Cu;
    {
        const bool branch_taken_0x10c47c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c47c) {
            ctx->pc = 0x10C468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c468;
        }
    }
    ctx->pc = 0x10C484u;
    // 0x10c484: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c488: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c48c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10c48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10c490: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10c490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10c494: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x10c494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_10c498:
    // 0x10c498: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c49c: 0x0  nop
    ctx->pc = 0x10c49cu;
    // NOP
    // 0x10c4a0: 0x0  nop
    ctx->pc = 0x10c4a0u;
    // NOP
    // 0x10c4a4: 0x0  nop
    ctx->pc = 0x10c4a4u;
    // NOP
    // 0x10c4a8: 0x0  nop
    ctx->pc = 0x10c4a8u;
    // NOP
    // 0x10c4ac: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C4ACu;
    {
        const bool branch_taken_0x10c4ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c4ac) {
            ctx->pc = 0x10C498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c498;
        }
    }
    ctx->pc = 0x10C4B4u;
    // 0x10c4b4: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x10C4B4u;
    {
        const bool branch_taken_0x10c4b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4B4u;
        // 0x10c4b8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4b4) {
            ctx->pc = 0x10C510u;
            goto label_10c510;
        }
    }
    ctx->pc = 0x10C4BCu;
    // 0x10c4bc: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x10C4BCu;
    {
        const bool branch_taken_0x10c4bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4BCu;
        // 0x10c4c0: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4bc) {
            ctx->pc = 0x10C514u;
            goto label_10c514;
        }
    }
    ctx->pc = 0x10C4C4u;
    // 0x10c4c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c4c8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c4cc: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x10c4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x10c4d0: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x10c4d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x10c4d4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x10c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x10c4d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c4dc: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x10c4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x10c4e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10c4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c4e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10c4e8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10c4e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c4ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x10c4f0: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x10c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x10c4f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10c4f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c4f8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x10c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10c4fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10c4fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c504: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x10c504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x10c508: 0x804309e  j           func_10C278
    ctx->pc = 0x10C508u;
    ctx->pc = 0x10C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C508u;
    // 0x10c50c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C278u;
    sub_0010C278_0x10c278(rdram, ctx, runtime); return;
    ctx->pc = 0x10C510u;
label_10c510:
    // 0x10c510: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10c510u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10c514:
    // 0x10c514: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10c514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c518: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10c518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c51c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c51cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c520: 0x3e00008  jr          $ra
    ctx->pc = 0x10C520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C520u;
        // 0x10c524: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C528u;
label_10c528:
    // 0x10c528: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C528u;
    {
        const bool branch_taken_0x10c528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C528u;
        // 0x10c52c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c528) {
            ctx->pc = 0x10C544u;
            goto label_10c544;
        }
    }
    ctx->pc = 0x10C530u;
    // 0x10c530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c534: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10C534u;
    {
        const bool branch_taken_0x10c534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C534u;
        // 0x10c538: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c534) {
            ctx->pc = 0x10C574u;
            goto label_10c574;
        }
    }
    ctx->pc = 0x10C53Cu;
    // 0x10c53c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10C53Cu;
    {
        const bool branch_taken_0x10c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c53c) {
            ctx->pc = 0x10C588u;
            goto label_10c588;
        }
    }
    ctx->pc = 0x10C544u;
label_10c544:
    // 0x10c544: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c548: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10c548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10c54c: 0x0  nop
    ctx->pc = 0x10c54cu;
    // NOP
label_10c550:
    // 0x10c550: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c554: 0x0  nop
    ctx->pc = 0x10c554u;
    // NOP
    // 0x10c558: 0x0  nop
    ctx->pc = 0x10c558u;
    // NOP
    // 0x10c55c: 0x0  nop
    ctx->pc = 0x10c55cu;
    // NOP
    // 0x10c560: 0x0  nop
    ctx->pc = 0x10c560u;
    // NOP
    // 0x10c564: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C564u;
    {
        const bool branch_taken_0x10c564 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c564) {
            ctx->pc = 0x10C550u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c550;
        }
    }
    ctx->pc = 0x10C56Cu;
    // 0x10c56c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10C56Cu;
    {
        const bool branch_taken_0x10c56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C56Cu;
        // 0x10c570: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c56c) {
            ctx->pc = 0x10C584u;
            goto label_10c584;
        }
    }
    ctx->pc = 0x10C574u;
label_10c574:
    // 0x10c574: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c578: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10c578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x10c57c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c580: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x10c580u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_10c584:
    // 0x10c584: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10c584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10c588:
    // 0x10c588: 0x3e00008  jr          $ra
    ctx->pc = 0x10C588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C590u;
}
