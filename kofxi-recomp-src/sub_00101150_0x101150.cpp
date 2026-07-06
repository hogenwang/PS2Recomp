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

// Function: sub_00101150
// Address: 0x101150 - 0x101468
void sub_00101150_0x101150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101150_0x101150");
#endif

    switch (ctx->pc) {
        case 0x101188u: goto label_101188;
        case 0x1011c8u: goto label_1011c8;
        case 0x101218u: goto label_101218;
        case 0x101248u: goto label_101248;
        case 0x101288u: goto label_101288;
        case 0x1012ecu: goto label_1012ec;
        case 0x101304u: goto label_101304;
        case 0x10131cu: goto label_10131c;
        case 0x101334u: goto label_101334;
        case 0x10134cu: goto label_10134c;
        case 0x101364u: goto label_101364;
        case 0x10137cu: goto label_10137c;
        case 0x101394u: goto label_101394;
        case 0x1013acu: goto label_1013ac;
        case 0x1013c4u: goto label_1013c4;
        case 0x1013dcu: goto label_1013dc;
        default: break;
    }

    ctx->pc = 0x101150u;

    // 0x101150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101158: 0x148000a2  bnez        $a0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x101158u;
    {
        const bool branch_taken_0x101158 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101158u;
        // 0x10115c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101158) {
            ctx->pc = 0x1013E4u;
            goto label_1013e4;
        }
    }
    ctx->pc = 0x101160u;
    // 0x101160: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101164: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x101164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x101168: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x101168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10116c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x10116cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x101170: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x101170u;
    {
        const bool branch_taken_0x101170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101170u;
        // 0x101174: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101170) {
            ctx->pc = 0x1011A4u;
            goto label_1011a4;
        }
    }
    ctx->pc = 0x101178u;
    // 0x101178: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x101178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x10117c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x10117cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x101180: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x101180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101184: 0x0  nop
    ctx->pc = 0x101184u;
    // NOP
label_101188:
    // 0x101188: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x101188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10118c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x10118Cu;
    {
        const bool branch_taken_0x10118c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10118Cu;
        // 0x101190: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10118c) {
            ctx->pc = 0x1012ACu;
            goto label_1012ac;
        }
    }
    ctx->pc = 0x101194u;
    // 0x101194: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101198: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x101198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10119c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10119Cu;
    {
        const bool branch_taken_0x10119c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1011A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10119Cu;
        // 0x1011a0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10119c) {
            ctx->pc = 0x101188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101188;
        }
    }
    ctx->pc = 0x1011A4u;
label_1011a4:
    // 0x1011a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1011a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1011a8: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x1011a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x1011ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1011acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1011b0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1011b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1011b4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1011B4u;
    {
        const bool branch_taken_0x1011b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1011B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011B4u;
        // 0x1011b8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1011b4) {
            ctx->pc = 0x1011E4u;
            goto label_1011e4;
        }
    }
    ctx->pc = 0x1011BCu;
    // 0x1011bc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1011bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1011c0: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1011c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x1011c4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1011c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1011c8:
    // 0x1011c8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1011c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1011cc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1011CCu;
    {
        const bool branch_taken_0x1011cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1011D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011CCu;
        // 0x1011d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1011cc) {
            ctx->pc = 0x1012B8u;
            goto label_1012b8;
        }
    }
    ctx->pc = 0x1011D4u;
    // 0x1011d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1011d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1011d8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1011d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1011dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1011DCu;
    {
        const bool branch_taken_0x1011dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1011E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011DCu;
        // 0x1011e0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1011dc) {
            ctx->pc = 0x1011C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1011c8;
        }
    }
    ctx->pc = 0x1011E4u;
label_1011e4:
    // 0x1011e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1011e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1011e8: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x1011e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x1011ec: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x1011ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x1011f0: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x1011f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x1011f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1011f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1011f8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1011f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1011fc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1011FCu;
    {
        const bool branch_taken_0x1011fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011FCu;
        // 0x101200: 0x3c031f00  lui         $v1, 0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1011fc) {
            ctx->pc = 0x101234u;
            goto label_101234;
        }
    }
    ctx->pc = 0x101204u;
    // 0x101204: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x101204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x101208: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x101208u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x10120c: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x10120cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x101210: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x101210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x101214: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x101214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_101218:
    // 0x101218: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x101218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10121c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x10121Cu;
    {
        const bool branch_taken_0x10121c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10121Cu;
        // 0x101220: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10121c) {
            ctx->pc = 0x1012C4u;
            goto label_1012c4;
        }
    }
    ctx->pc = 0x101224u;
    // 0x101224: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x101224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x101228: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x101228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10122c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10122Cu;
    {
        const bool branch_taken_0x10122c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10122Cu;
        // 0x101230: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10122c) {
            ctx->pc = 0x101218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101218;
        }
    }
    ctx->pc = 0x101234u;
label_101234:
    // 0x101234: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x101234u;
    SET_GPR_U32(ctx, 6, ctx->vu0_top);
    // 0x101238: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x101238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x10123c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10123Cu;
    {
        const bool branch_taken_0x10123c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10123Cu;
        // 0x101240: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10123c) {
            ctx->pc = 0x101264u;
            goto label_101264;
        }
    }
    ctx->pc = 0x101244u;
    // 0x101244: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x101244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_101248:
    // 0x101248: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x101248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10124c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x10124Cu;
    {
        const bool branch_taken_0x10124c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10124Cu;
        // 0x101250: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10124c) {
            ctx->pc = 0x1012D0u;
            goto label_1012d0;
        }
    }
    ctx->pc = 0x101254u;
    // 0x101254: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x101254u;
    SET_GPR_U32(ctx, 6, ctx->vu0_top);
    // 0x101258: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x101258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x10125c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10125Cu;
    {
        const bool branch_taken_0x10125c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10125Cu;
        // 0x101260: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10125c) {
            ctx->pc = 0x101248u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101248;
        }
    }
    ctx->pc = 0x101264u;
label_101264:
    // 0x101264: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101268: 0x34423020  ori         $v0, $v0, 0x3020
    ctx->pc = 0x101268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
    // 0x10126c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101270: 0x30630c00  andi        $v1, $v1, 0xC00
    ctx->pc = 0x101270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3072);
    // 0x101274: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x101274u;
    {
        const bool branch_taken_0x101274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101274u;
        // 0x101278: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101274) {
            ctx->pc = 0x1012A4u;
            goto label_1012a4;
        }
    }
    ctx->pc = 0x10127Cu;
    // 0x10127c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x10127cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x101280: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x101280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
    // 0x101284: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x101284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_101288:
    // 0x101288: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x101288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10128c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10128Cu;
    {
        const bool branch_taken_0x10128c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10128Cu;
        // 0x101290: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10128c) {
            ctx->pc = 0x1012DCu;
            goto label_1012dc;
        }
    }
    ctx->pc = 0x101294u;
    // 0x101294: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101298: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x101298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
    // 0x10129c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10129Cu;
    {
        const bool branch_taken_0x10129c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1012A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10129Cu;
        // 0x1012a0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10129c) {
            ctx->pc = 0x101288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101288;
        }
    }
    ctx->pc = 0x1012A4u;
label_1012a4:
    // 0x1012a4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1012A4u;
    {
        const bool branch_taken_0x1012a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012A4u;
        // 0x1012a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012a4) {
            ctx->pc = 0x101458u;
            goto label_101458;
        }
    }
    ctx->pc = 0x1012ACu;
label_1012ac:
    // 0x1012ac: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1012acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1012b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1012B0u;
    {
        const bool branch_taken_0x1012b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012B0u;
        // 0x1012b4: 0x248499f8  addiu       $a0, $a0, -0x6608 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012b0) {
            ctx->pc = 0x1012E4u;
            goto label_1012e4;
        }
    }
    ctx->pc = 0x1012B8u;
label_1012b8:
    // 0x1012b8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1012b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1012bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1012BCu;
    {
        const bool branch_taken_0x1012bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012BCu;
        // 0x1012c0: 0x24849ad8  addiu       $a0, $a0, -0x6528 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012bc) {
            ctx->pc = 0x1012E4u;
            goto label_1012e4;
        }
    }
    ctx->pc = 0x1012C4u;
label_1012c4:
    // 0x1012c4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1012c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1012c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1012C8u;
    {
        const bool branch_taken_0x1012c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012C8u;
        // 0x1012cc: 0x24849b08  addiu       $a0, $a0, -0x64F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012c8) {
            ctx->pc = 0x1012E4u;
            goto label_1012e4;
        }
    }
    ctx->pc = 0x1012D0u;
label_1012d0:
    // 0x1012d0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1012d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1012d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1012D4u;
    {
        const bool branch_taken_0x1012d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012D4u;
        // 0x1012d8: 0x24849b38  addiu       $a0, $a0, -0x64C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012d4) {
            ctx->pc = 0x1012E4u;
            goto label_1012e4;
        }
    }
    ctx->pc = 0x1012DCu;
label_1012dc:
    // 0x1012dc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1012dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1012e0: 0x24849b60  addiu       $a0, $a0, -0x64A0
    ctx->pc = 0x1012e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941536));
label_1012e4:
    // 0x1012e4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1012E4u;
    SET_GPR_U32(ctx, 31, 0x1012ECu);
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1012E4u, 0x1012ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012ECu;
label_1012ec:
    // 0x1012ec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1012ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1012f0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1012f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1012f4: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1012f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1012f8: 0x24849a28  addiu       $a0, $a0, -0x65D8
    ctx->pc = 0x1012f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941224));
    // 0x1012fc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1012FCu;
    SET_GPR_U32(ctx, 31, 0x101304u);
    ctx->pc = 0x101300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012FCu;
    // 0x101300: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1012FCu, 0x101304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101304u;
label_101304:
    // 0x101304: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101308: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x101308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x10130c: 0x34429030  ori         $v0, $v0, 0x9030
    ctx->pc = 0x10130cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36912);
    // 0x101310: 0x24849a38  addiu       $a0, $a0, -0x65C8
    ctx->pc = 0x101310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941240));
    // 0x101314: 0xc043e52  jal         func_10F948
    ctx->pc = 0x101314u;
    SET_GPR_U32(ctx, 31, 0x10131Cu);
    ctx->pc = 0x101318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101314u;
    // 0x101318: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x101314u, 0x10131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10131Cu;
label_10131c:
    // 0x10131c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101320: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x101320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x101324: 0x34429010  ori         $v0, $v0, 0x9010
    ctx->pc = 0x101324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36880);
    // 0x101328: 0x24849a48  addiu       $a0, $a0, -0x65B8
    ctx->pc = 0x101328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941256));
    // 0x10132c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x10132Cu;
    SET_GPR_U32(ctx, 31, 0x101334u);
    ctx->pc = 0x101330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10132Cu;
    // 0x101330: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x10132Cu, 0x101334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101334u;
label_101334:
    // 0x101334: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101338: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x101338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x10133c: 0x34429020  ori         $v0, $v0, 0x9020
    ctx->pc = 0x10133cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36896);
    // 0x101340: 0x24849a58  addiu       $a0, $a0, -0x65A8
    ctx->pc = 0x101340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941272));
    // 0x101344: 0xc043e52  jal         func_10F948
    ctx->pc = 0x101344u;
    SET_GPR_U32(ctx, 31, 0x10134Cu);
    ctx->pc = 0x101348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101344u;
    // 0x101348: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x101344u, 0x10134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10134Cu;
label_10134c:
    // 0x10134c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101350: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x101350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x101354: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x101354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x101358: 0x24849a68  addiu       $a0, $a0, -0x6598
    ctx->pc = 0x101358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941288));
    // 0x10135c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x10135Cu;
    SET_GPR_U32(ctx, 31, 0x101364u);
    ctx->pc = 0x101360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10135Cu;
    // 0x101360: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x10135Cu, 0x101364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101364u;
label_101364:
    // 0x101364: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101368: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x101368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x10136c: 0x3442a030  ori         $v0, $v0, 0xA030
    ctx->pc = 0x10136cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41008);
    // 0x101370: 0x24849a78  addiu       $a0, $a0, -0x6588
    ctx->pc = 0x101370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941304));
    // 0x101374: 0xc043e52  jal         func_10F948
    ctx->pc = 0x101374u;
    SET_GPR_U32(ctx, 31, 0x10137Cu);
    ctx->pc = 0x101378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101374u;
    // 0x101378: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x101374u, 0x10137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10137Cu;
label_10137c:
    // 0x10137c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101380: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x101380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x101384: 0x3442a010  ori         $v0, $v0, 0xA010
    ctx->pc = 0x101384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40976);
    // 0x101388: 0x24849a88  addiu       $a0, $a0, -0x6578
    ctx->pc = 0x101388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941320));
    // 0x10138c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x10138Cu;
    SET_GPR_U32(ctx, 31, 0x101394u);
    ctx->pc = 0x101390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10138Cu;
    // 0x101390: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x10138Cu, 0x101394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101394u;
label_101394:
    // 0x101394: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101398: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x101398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x10139c: 0x3442a020  ori         $v0, $v0, 0xA020
    ctx->pc = 0x10139cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40992);
    // 0x1013a0: 0x24849a98  addiu       $a0, $a0, -0x6568
    ctx->pc = 0x1013a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941336));
    // 0x1013a4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1013A4u;
    SET_GPR_U32(ctx, 31, 0x1013ACu);
    ctx->pc = 0x1013A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1013A4u;
    // 0x1013a8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1013A4u, 0x1013ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013ACu;
label_1013ac:
    // 0x1013ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1013acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1013b0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1013b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1013b4: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x1013b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x1013b8: 0x24849aa8  addiu       $a0, $a0, -0x6558
    ctx->pc = 0x1013b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941352));
    // 0x1013bc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1013BCu;
    SET_GPR_U32(ctx, 31, 0x1013C4u);
    ctx->pc = 0x1013C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1013BCu;
    // 0x1013c0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1013BCu, 0x1013C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013C4u;
label_1013c4:
    // 0x1013c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1013c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1013c8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1013c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1013cc: 0x34423020  ori         $v0, $v0, 0x3020
    ctx->pc = 0x1013ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
    // 0x1013d0: 0x24849ac0  addiu       $a0, $a0, -0x6540
    ctx->pc = 0x1013d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941376));
    // 0x1013d4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1013D4u;
    SET_GPR_U32(ctx, 31, 0x1013DCu);
    ctx->pc = 0x1013D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1013D4u;
    // 0x1013d8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1013D4u, 0x1013DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013DCu;
label_1013dc:
    // 0x1013dc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1013DCu;
    {
        const bool branch_taken_0x1013dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1013E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013DCu;
        // 0x1013e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1013dc) {
            ctx->pc = 0x101458u;
            goto label_101458;
        }
    }
    ctx->pc = 0x1013E4u;
label_1013e4:
    // 0x1013e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1013e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1013e8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1013e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1013ec: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1013ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1013f0: 0x34a5a000  ori         $a1, $a1, 0xA000
    ctx->pc = 0x1013f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40960);
    // 0x1013f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1013f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1013f8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1013f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1013fc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1013fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x101400: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x101400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x101404: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x101404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x101408: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x101408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10140c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10140cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101410: 0x30c60100  andi        $a2, $a2, 0x100
    ctx->pc = 0x101410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x101414: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x101414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x101418: 0x3c031f00  lui         $v1, 0x1F00
    ctx->pc = 0x101418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
    // 0x10141c: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x10141cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x101420: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x101420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x101424: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x101424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x101428: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x101428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x10142c: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x10142cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x101430: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x101430u;
    SET_GPR_U32(ctx, 6, ctx->vu0_top);
    // 0x101434: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101438: 0x30c60100  andi        $a2, $a2, 0x100
    ctx->pc = 0x101438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x10143c: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x10143cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
    // 0x101440: 0x34450008  ori         $a1, $v0, 0x8
    ctx->pc = 0x101440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x101444: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x101444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101448: 0xa6100b  movn        $v0, $a1, $a2
    ctx->pc = 0x101448u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x10144c: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x10144cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x101450: 0x30840c00  andi        $a0, $a0, 0xC00
    ctx->pc = 0x101450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3072);
    // 0x101454: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x101454u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_101458:
    // 0x101458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10145c: 0x3e00008  jr          $ra
    ctx->pc = 0x10145Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10145Cu;
        // 0x101460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10145Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101464u;
    // 0x101464: 0x0  nop
    ctx->pc = 0x101464u;
    // NOP
    if (ctx->pc == 0x101464u) { ctx->pc = 0x101468u; }
}
