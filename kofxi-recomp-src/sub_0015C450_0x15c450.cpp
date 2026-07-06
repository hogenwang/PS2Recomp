#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C450
// Address: 0x15c450 - 0x15c5b0
void sub_0015C450_0x15c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C450_0x15c450");
#endif

    switch (ctx->pc) {
        case 0x15c474u: goto label_15c474;
        default: break;
    }

    ctx->pc = 0x15c450u;

    // 0x15c450: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15c450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15c454: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c458: 0xa060d9c8  sb          $zero, -0x2638($v1)
    ctx->pc = 0x15c458u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957512), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c45c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c460: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15c460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15c464: 0x24843fe0  addiu       $a0, $a0, 0x3FE0
    ctx->pc = 0x15c464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16352));
    // 0x15c468: 0xac60d9c0  sw          $zero, -0x2640($v1)
    ctx->pc = 0x15c468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957504), GPR_U32(ctx, 0));
    // 0x15c46c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c470: 0xa0604060  sb          $zero, 0x4060($v1)
    ctx->pc = 0x15c470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16480), (uint8_t)GPR_U32(ctx, 0));
label_15c474:
    // 0x15c474: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x15c474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x15c478: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x15c478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x15c47c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x15c47cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x15c480: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x15c480u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x15c484: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x15c484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x15c488: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x15c488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x15c48c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x15c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x15c490: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x15c490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x15c494: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x15c494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x15c498: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x15c498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x15c49c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x15C49Cu;
    {
        const bool branch_taken_0x15c49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C49Cu;
            // 0x15c4a0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c49c) {
            ctx->pc = 0x15C474u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c474;
        }
    }
    ctx->pc = 0x15C4A4u;
    // 0x15c4a4: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c4a8: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c4ac: 0xa0604074  sb          $zero, 0x4074($v1)
    ctx->pc = 0x15c4acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16500), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c4b0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c4b4: 0xa0804070  sb          $zero, 0x4070($a0)
    ctx->pc = 0x15c4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16496), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c4b8: 0xa0604078  sb          $zero, 0x4078($v1)
    ctx->pc = 0x15c4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16504), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c4bc: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c4c0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c4c4: 0xac80407c  sw          $zero, 0x407C($a0)
    ctx->pc = 0x15c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16508), GPR_U32(ctx, 0));
    // 0x15c4c8: 0xa0604080  sb          $zero, 0x4080($v1)
    ctx->pc = 0x15c4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16512), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c4cc: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c4d0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c4d4: 0xac80408c  sw          $zero, 0x408C($a0)
    ctx->pc = 0x15c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16524), GPR_U32(ctx, 0));
    // 0x15c4d8: 0xac604090  sw          $zero, 0x4090($v1)
    ctx->pc = 0x15c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16528), GPR_U32(ctx, 0));
    // 0x15c4dc: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c4e0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c4e4: 0xac804094  sw          $zero, 0x4094($a0)
    ctx->pc = 0x15c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16532), GPR_U32(ctx, 0));
    // 0x15c4e8: 0xac604098  sw          $zero, 0x4098($v1)
    ctx->pc = 0x15c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16536), GPR_U32(ctx, 0));
    // 0x15c4ec: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c4f0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c4f4: 0xa0804071  sb          $zero, 0x4071($a0)
    ctx->pc = 0x15c4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16497), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c4f8: 0xa060409c  sb          $zero, 0x409C($v1)
    ctx->pc = 0x15c4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16540), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c4fc: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c500: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c504: 0xac8040a0  sw          $zero, 0x40A0($a0)
    ctx->pc = 0x15c504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16544), GPR_U32(ctx, 0));
    // 0x15c508: 0xa06040a4  sb          $zero, 0x40A4($v1)
    ctx->pc = 0x15c508u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16548), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c50c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c510: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c514: 0xac8040b0  sw          $zero, 0x40B0($a0)
    ctx->pc = 0x15c514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16560), GPR_U32(ctx, 0));
    // 0x15c518: 0xac6040b4  sw          $zero, 0x40B4($v1)
    ctx->pc = 0x15c518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16564), GPR_U32(ctx, 0));
    // 0x15c51c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c520: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c524: 0xac8040b8  sw          $zero, 0x40B8($a0)
    ctx->pc = 0x15c524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16568), GPR_U32(ctx, 0));
    // 0x15c528: 0xac6040bc  sw          $zero, 0x40BC($v1)
    ctx->pc = 0x15c528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16572), GPR_U32(ctx, 0));
    // 0x15c52c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c530: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c534: 0xa0804072  sb          $zero, 0x4072($a0)
    ctx->pc = 0x15c534u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16498), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c538: 0xa06040c0  sb          $zero, 0x40C0($v1)
    ctx->pc = 0x15c538u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16576), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c53c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c540: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c544: 0xac8040c4  sw          $zero, 0x40C4($a0)
    ctx->pc = 0x15c544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16580), GPR_U32(ctx, 0));
    // 0x15c548: 0xa06040c8  sb          $zero, 0x40C8($v1)
    ctx->pc = 0x15c548u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16584), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c54c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c550: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c554: 0xac8040d4  sw          $zero, 0x40D4($a0)
    ctx->pc = 0x15c554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16596), GPR_U32(ctx, 0));
    // 0x15c558: 0xac6040d8  sw          $zero, 0x40D8($v1)
    ctx->pc = 0x15c558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16600), GPR_U32(ctx, 0));
    // 0x15c55c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c560: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c564: 0xac8040dc  sw          $zero, 0x40DC($a0)
    ctx->pc = 0x15c564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16604), GPR_U32(ctx, 0));
    // 0x15c568: 0xac6040e0  sw          $zero, 0x40E0($v1)
    ctx->pc = 0x15c568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16608), GPR_U32(ctx, 0));
    // 0x15c56c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c570: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c574: 0xa0804073  sb          $zero, 0x4073($a0)
    ctx->pc = 0x15c574u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16499), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c578: 0xa06040e4  sb          $zero, 0x40E4($v1)
    ctx->pc = 0x15c578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16612), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c57c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c580: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c584: 0xac8040e8  sw          $zero, 0x40E8($a0)
    ctx->pc = 0x15c584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16616), GPR_U32(ctx, 0));
    // 0x15c588: 0xa06040ec  sb          $zero, 0x40EC($v1)
    ctx->pc = 0x15c588u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16620), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c58c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c590: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c594: 0xac8040f8  sw          $zero, 0x40F8($a0)
    ctx->pc = 0x15c594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16632), GPR_U32(ctx, 0));
    // 0x15c598: 0xac6040fc  sw          $zero, 0x40FC($v1)
    ctx->pc = 0x15c598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16636), GPR_U32(ctx, 0));
    // 0x15c59c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15c59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15c5a0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c5a4: 0xac804100  sw          $zero, 0x4100($a0)
    ctx->pc = 0x15c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16640), GPR_U32(ctx, 0));
    // 0x15c5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x15C5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C5A8u;
            // 0x15c5ac: 0xac604104  sw          $zero, 0x4104($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C5B0u;
    ctx->pc = 0x15c5b0u;
}
