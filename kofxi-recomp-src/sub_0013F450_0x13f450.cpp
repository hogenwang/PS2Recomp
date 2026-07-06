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

// Function: sub_0013F450
// Address: 0x13f450 - 0x13f600
void sub_0013F450_0x13f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F450_0x13f450");
#endif

    ctx->pc = 0x13f450u;

    // 0x13f450: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x13f450u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x13f454: 0x5020003d  beql        $at, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x13F454u;
    {
        const bool branch_taken_0x13f454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f454) {
            ctx->pc = 0x13F458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F454u;
            // 0x13f458: 0x8ca40238  lw          $a0, 0x238($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F54Cu;
            goto label_13f54c;
        }
    }
    ctx->pc = 0x13F45Cu;
    // 0x13f45c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x13f460: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x13f460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13f464: 0x2463cc40  addiu       $v1, $v1, -0x33C0
    ctx->pc = 0x13f464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954048));
    // 0x13f468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f46c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f470: 0x400008  jr          $v0
    ctx->pc = 0x13F470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F478u: goto label_13f478;
            case 0x13F49Cu: goto label_13f49c;
            case 0x13F4C0u: goto label_13f4c0;
            case 0x13F4E0u: goto label_13f4e0;
            case 0x13F504u: goto label_13f504;
            case 0x13F524u: goto label_13f524;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F470u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13F478u;
label_13f478:
    // 0x13f478: 0x8ca20490  lw          $v0, 0x490($a1)
    ctx->pc = 0x13f478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1168)));
    // 0x13f47c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x13f47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13f480: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x13F480u;
    {
        const bool branch_taken_0x13f480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f480) {
            ctx->pc = 0x13F548u;
            goto label_13f548;
        }
    }
    ctx->pc = 0x13F488u;
    // 0x13f488: 0x8ca30238  lw          $v1, 0x238($a1)
    ctx->pc = 0x13f488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 568)));
    // 0x13f48c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f490: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x13f490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x13f494: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x13F494u;
    {
        const bool branch_taken_0x13f494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F494u;
        // 0x13f498: 0xaca30238  sw          $v1, 0x238($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f494) {
            ctx->pc = 0x13F55Cu;
            goto label_13f55c;
        }
    }
    ctx->pc = 0x13F49Cu;
label_13f49c:
    // 0x13f49c: 0x8ca20490  lw          $v0, 0x490($a1)
    ctx->pc = 0x13f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1168)));
    // 0x13f4a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x13f4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x13f4a4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x13F4A4u;
    {
        const bool branch_taken_0x13f4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f4a4) {
            ctx->pc = 0x13F548u;
            goto label_13f548;
        }
    }
    ctx->pc = 0x13F4ACu;
    // 0x13f4ac: 0x8ca30238  lw          $v1, 0x238($a1)
    ctx->pc = 0x13f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 568)));
    // 0x13f4b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f4b4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x13f4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x13f4b8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x13F4B8u;
    {
        const bool branch_taken_0x13f4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4B8u;
        // 0x13f4bc: 0xaca30238  sw          $v1, 0x238($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4b8) {
            ctx->pc = 0x13F55Cu;
            goto label_13f55c;
        }
    }
    ctx->pc = 0x13F4C0u;
label_13f4c0:
    // 0x13f4c0: 0x90a20282  lbu         $v0, 0x282($a1)
    ctx->pc = 0x13f4c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 642)));
    // 0x13f4c4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13F4C4u;
    {
        const bool branch_taken_0x13f4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f4c4) {
            ctx->pc = 0x13F548u;
            goto label_13f548;
        }
    }
    ctx->pc = 0x13F4CCu;
    // 0x13f4cc: 0x8ca30238  lw          $v1, 0x238($a1)
    ctx->pc = 0x13f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 568)));
    // 0x13f4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f4d4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x13f4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x13f4d8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x13F4D8u;
    {
        const bool branch_taken_0x13f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4D8u;
        // 0x13f4dc: 0xaca30238  sw          $v1, 0x238($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4d8) {
            ctx->pc = 0x13F55Cu;
            goto label_13f55c;
        }
    }
    ctx->pc = 0x13F4E0u;
label_13f4e0:
    // 0x13f4e0: 0x90a20281  lbu         $v0, 0x281($a1)
    ctx->pc = 0x13f4e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 641)));
    // 0x13f4e4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x13f4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x13f4e8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13F4E8u;
    {
        const bool branch_taken_0x13f4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f4e8) {
            ctx->pc = 0x13F548u;
            goto label_13f548;
        }
    }
    ctx->pc = 0x13F4F0u;
    // 0x13f4f0: 0x8ca30238  lw          $v1, 0x238($a1)
    ctx->pc = 0x13f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 568)));
    // 0x13f4f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f4f8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x13f4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x13f4fc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x13F4FCu;
    {
        const bool branch_taken_0x13f4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4FCu;
        // 0x13f500: 0xaca30238  sw          $v1, 0x238($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4fc) {
            ctx->pc = 0x13F55Cu;
            goto label_13f55c;
        }
    }
    ctx->pc = 0x13F504u;
label_13f504:
    // 0x13f504: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x13f504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x13f508: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13F508u;
    {
        const bool branch_taken_0x13f508 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13f508) {
            ctx->pc = 0x13F548u;
            goto label_13f548;
        }
    }
    ctx->pc = 0x13F510u;
    // 0x13f510: 0x8ca30238  lw          $v1, 0x238($a1)
    ctx->pc = 0x13f510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 568)));
    // 0x13f514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f518: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x13f518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x13f51c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13F51Cu;
    {
        const bool branch_taken_0x13f51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F51Cu;
        // 0x13f520: 0xaca30238  sw          $v1, 0x238($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f51c) {
            ctx->pc = 0x13F55Cu;
            goto label_13f55c;
        }
    }
    ctx->pc = 0x13F524u;
label_13f524:
    // 0x13f524: 0x8ca20490  lw          $v0, 0x490($a1)
    ctx->pc = 0x13f524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1168)));
    // 0x13f528: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x13f528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13f52c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F52Cu;
    {
        const bool branch_taken_0x13f52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f52c) {
            ctx->pc = 0x13F548u;
            goto label_13f548;
        }
    }
    ctx->pc = 0x13F534u;
    // 0x13f534: 0x8ca30238  lw          $v1, 0x238($a1)
    ctx->pc = 0x13f534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 568)));
    // 0x13f538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f53c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x13f53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x13f540: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13F540u;
    {
        const bool branch_taken_0x13f540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F540u;
        // 0x13f544: 0xaca30238  sw          $v1, 0x238($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f540) {
            ctx->pc = 0x13F55Cu;
            goto label_13f55c;
        }
    }
    ctx->pc = 0x13F548u;
label_13f548:
    // 0x13f548: 0x8ca40238  lw          $a0, 0x238($a1)
    ctx->pc = 0x13f548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 568)));
label_13f54c:
    // 0x13f54c: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x13f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x13f550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f554: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13f554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f558: 0xaca30238  sw          $v1, 0x238($a1)
    ctx->pc = 0x13f558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 568), GPR_U32(ctx, 3));
label_13f55c:
    // 0x13f55c: 0x3e00008  jr          $ra
    ctx->pc = 0x13F55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F564u;
    // 0x13f564: 0x0  nop
    ctx->pc = 0x13f564u;
    // NOP
    // 0x13f568: 0x0  nop
    ctx->pc = 0x13f568u;
    // NOP
    // 0x13f56c: 0x0  nop
    ctx->pc = 0x13f56cu;
    // NOP
    // 0x13f570: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13f570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f574: 0x50860012  beql        $a0, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x13F574u;
    {
        const bool branch_taken_0x13f574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x13f574) {
            ctx->pc = 0x13F578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F574u;
            // 0x13f578: 0x8ca30238  lw          $v1, 0x238($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F5C0u;
            goto label_13f5c0;
        }
    }
    ctx->pc = 0x13F57Cu;
    // 0x13f57c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F57Cu;
    {
        const bool branch_taken_0x13f57c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f57c) {
            ctx->pc = 0x13F580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F57Cu;
            // 0x13f580: 0x8ca30238  lw          $v1, 0x238($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F58Cu;
            goto label_13f58c;
        }
    }
    ctx->pc = 0x13F584u;
    // 0x13f584: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x13F584u;
    {
        const bool branch_taken_0x13f584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f584) {
            ctx->pc = 0x13F5F0u;
            goto label_13f5f0;
        }
    }
    ctx->pc = 0x13F58Cu;
label_13f58c:
    // 0x13f58c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x13f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x13f590: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13f590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13f594: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F594u;
    {
        const bool branch_taken_0x13f594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f594) {
            ctx->pc = 0x13F598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F594u;
            // 0x13f598: 0x94a30234  lhu         $v1, 0x234($a1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F5B0u;
            goto label_13f5b0;
        }
    }
    ctx->pc = 0x13F59Cu;
    // 0x13f59c: 0x94a30234  lhu         $v1, 0x234($a1)
    ctx->pc = 0x13f59cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 564)));
    // 0x13f5a0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x13f5a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5a4: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x13f5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x13f5a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13F5A8u;
    {
        const bool branch_taken_0x13f5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F5A8u;
        // 0x13f5ac: 0xa4a30234  sh          $v1, 0x234($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5a8) {
            ctx->pc = 0x13F5F0u;
            goto label_13f5f0;
        }
    }
    ctx->pc = 0x13F5B0u;
label_13f5b0:
    // 0x13f5b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5b4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x13f5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x13f5b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13F5B8u;
    {
        const bool branch_taken_0x13f5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F5B8u;
        // 0x13f5bc: 0xa4a30234  sh          $v1, 0x234($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5b8) {
            ctx->pc = 0x13F5F0u;
            goto label_13f5f0;
        }
    }
    ctx->pc = 0x13F5C0u;
label_13f5c0:
    // 0x13f5c0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x13f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x13f5c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13f5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13f5c8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F5C8u;
    {
        const bool branch_taken_0x13f5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f5c8) {
            ctx->pc = 0x13F5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F5C8u;
            // 0x13f5cc: 0x94a30234  lhu         $v1, 0x234($a1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F5E4u;
            goto label_13f5e4;
        }
    }
    ctx->pc = 0x13F5D0u;
    // 0x13f5d0: 0x94a30234  lhu         $v1, 0x234($a1)
    ctx->pc = 0x13f5d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 564)));
    // 0x13f5d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f5d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5d8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x13f5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x13f5dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13F5DCu;
    {
        const bool branch_taken_0x13f5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F5DCu;
        // 0x13f5e0: 0xa4a30234  sh          $v1, 0x234($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 564), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5dc) {
            ctx->pc = 0x13F5F0u;
            goto label_13f5f0;
        }
    }
    ctx->pc = 0x13F5E4u;
label_13f5e4:
    // 0x13f5e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f5e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5e8: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x13f5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x13f5ec: 0xa4a30234  sh          $v1, 0x234($a1)
    ctx->pc = 0x13f5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 564), (uint16_t)GPR_U32(ctx, 3));
label_13f5f0:
    // 0x13f5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x13F5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F5F8u;
    // 0x13f5f8: 0x0  nop
    ctx->pc = 0x13f5f8u;
    // NOP
    // 0x13f5fc: 0x0  nop
    ctx->pc = 0x13f5fcu;
    // NOP
}
