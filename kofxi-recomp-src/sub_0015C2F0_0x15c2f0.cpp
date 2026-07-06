#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C2F0
// Address: 0x15c2f0 - 0x15c450
void sub_0015C2F0_0x15c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C2F0_0x15c2f0");
#endif

    switch (ctx->pc) {
        case 0x15c314u: goto label_15c314;
        default: break;
    }

    ctx->pc = 0x15c2f0u;

    // 0x15c2f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15c2f4: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c2f8: 0xa060d9c8  sb          $zero, -0x2638($v1)
    ctx->pc = 0x15c2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957512), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c2fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c300: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15c300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15c304: 0x24843fe0  addiu       $a0, $a0, 0x3FE0
    ctx->pc = 0x15c304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16352));
    // 0x15c308: 0xac60d9c0  sw          $zero, -0x2640($v1)
    ctx->pc = 0x15c308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957504), GPR_U32(ctx, 0));
    // 0x15c30c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c310: 0xa0604060  sb          $zero, 0x4060($v1)
    ctx->pc = 0x15c310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16480), (uint8_t)GPR_U32(ctx, 0));
label_15c314:
    // 0x15c314: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x15c314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x15c318: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x15c318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x15c31c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x15c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x15c320: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x15c320u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x15c324: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x15c324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x15c328: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x15c328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x15c32c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x15c32cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x15c330: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x15c330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x15c334: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x15c334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x15c338: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x15c338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x15c33c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x15C33Cu;
    {
        const bool branch_taken_0x15c33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C33Cu;
            // 0x15c340: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c33c) {
            ctx->pc = 0x15C314u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c314;
        }
    }
    ctx->pc = 0x15C344u;
    // 0x15c344: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c348: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c34c: 0xa0604074  sb          $zero, 0x4074($v1)
    ctx->pc = 0x15c34cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16500), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c350: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c354: 0xa0804070  sb          $zero, 0x4070($a0)
    ctx->pc = 0x15c354u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16496), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c358: 0xa0604078  sb          $zero, 0x4078($v1)
    ctx->pc = 0x15c358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16504), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c35c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c360: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c364: 0xac80407c  sw          $zero, 0x407C($a0)
    ctx->pc = 0x15c364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16508), GPR_U32(ctx, 0));
    // 0x15c368: 0xa0604080  sb          $zero, 0x4080($v1)
    ctx->pc = 0x15c368u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16512), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c36c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c370: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c374: 0xac80408c  sw          $zero, 0x408C($a0)
    ctx->pc = 0x15c374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16524), GPR_U32(ctx, 0));
    // 0x15c378: 0xac604090  sw          $zero, 0x4090($v1)
    ctx->pc = 0x15c378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16528), GPR_U32(ctx, 0));
    // 0x15c37c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c380: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c384: 0xac804094  sw          $zero, 0x4094($a0)
    ctx->pc = 0x15c384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16532), GPR_U32(ctx, 0));
    // 0x15c388: 0xac604098  sw          $zero, 0x4098($v1)
    ctx->pc = 0x15c388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16536), GPR_U32(ctx, 0));
    // 0x15c38c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c390: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c394: 0xa0804071  sb          $zero, 0x4071($a0)
    ctx->pc = 0x15c394u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16497), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c398: 0xa060409c  sb          $zero, 0x409C($v1)
    ctx->pc = 0x15c398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16540), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c39c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c3a0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c3a4: 0xac8040a0  sw          $zero, 0x40A0($a0)
    ctx->pc = 0x15c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16544), GPR_U32(ctx, 0));
    // 0x15c3a8: 0xa06040a4  sb          $zero, 0x40A4($v1)
    ctx->pc = 0x15c3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16548), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c3ac: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c3b0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c3b4: 0xac8040b0  sw          $zero, 0x40B0($a0)
    ctx->pc = 0x15c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16560), GPR_U32(ctx, 0));
    // 0x15c3b8: 0xac6040b4  sw          $zero, 0x40B4($v1)
    ctx->pc = 0x15c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16564), GPR_U32(ctx, 0));
    // 0x15c3bc: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c3c0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c3c4: 0xac8040b8  sw          $zero, 0x40B8($a0)
    ctx->pc = 0x15c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16568), GPR_U32(ctx, 0));
    // 0x15c3c8: 0xac6040bc  sw          $zero, 0x40BC($v1)
    ctx->pc = 0x15c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16572), GPR_U32(ctx, 0));
    // 0x15c3cc: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c3d0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c3d4: 0xa0804072  sb          $zero, 0x4072($a0)
    ctx->pc = 0x15c3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16498), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c3d8: 0xa06040c0  sb          $zero, 0x40C0($v1)
    ctx->pc = 0x15c3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16576), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c3dc: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c3e0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c3e4: 0xac8040c4  sw          $zero, 0x40C4($a0)
    ctx->pc = 0x15c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16580), GPR_U32(ctx, 0));
    // 0x15c3e8: 0xa06040c8  sb          $zero, 0x40C8($v1)
    ctx->pc = 0x15c3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16584), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c3ec: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c3f0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c3f4: 0xac8040d4  sw          $zero, 0x40D4($a0)
    ctx->pc = 0x15c3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16596), GPR_U32(ctx, 0));
    // 0x15c3f8: 0xac6040d8  sw          $zero, 0x40D8($v1)
    ctx->pc = 0x15c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16600), GPR_U32(ctx, 0));
    // 0x15c3fc: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c400: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c404: 0xac8040dc  sw          $zero, 0x40DC($a0)
    ctx->pc = 0x15c404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16604), GPR_U32(ctx, 0));
    // 0x15c408: 0xac6040e0  sw          $zero, 0x40E0($v1)
    ctx->pc = 0x15c408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16608), GPR_U32(ctx, 0));
    // 0x15c40c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c410: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c414: 0xa0804073  sb          $zero, 0x4073($a0)
    ctx->pc = 0x15c414u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16499), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c418: 0xa06040e4  sb          $zero, 0x40E4($v1)
    ctx->pc = 0x15c418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16612), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c41c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c41cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c420: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c424: 0xac8040e8  sw          $zero, 0x40E8($a0)
    ctx->pc = 0x15c424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16616), GPR_U32(ctx, 0));
    // 0x15c428: 0xa06040ec  sb          $zero, 0x40EC($v1)
    ctx->pc = 0x15c428u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16620), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c42c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c430: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c434: 0xac8040f8  sw          $zero, 0x40F8($a0)
    ctx->pc = 0x15c434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16632), GPR_U32(ctx, 0));
    // 0x15c438: 0xac6040fc  sw          $zero, 0x40FC($v1)
    ctx->pc = 0x15c438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16636), GPR_U32(ctx, 0));
    // 0x15c43c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c440: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c444: 0xac804100  sw          $zero, 0x4100($a0)
    ctx->pc = 0x15c444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16640), GPR_U32(ctx, 0));
    // 0x15c448: 0x3e00008  jr          $ra
    ctx->pc = 0x15C448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C448u;
            // 0x15c44c: 0xac604104  sw          $zero, 0x4104($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C450u;
    ctx->pc = 0x15c450u;
}
