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

// Function: sub_0019C4D0
// Address: 0x19c4d0 - 0x19d1a0
void sub_0019C4D0_0x19c4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C4D0_0x19c4d0");
#endif

    switch (ctx->pc) {
        case 0x19c5a4u: goto label_19c5a4;
        case 0x19c700u: goto label_19c700;
        case 0x19c748u: goto label_19c748;
        case 0x19ca24u: goto label_19ca24;
        case 0x19cabcu: goto label_19cabc;
        case 0x19caccu: goto label_19cacc;
        case 0x19cb44u: goto label_19cb44;
        case 0x19cb54u: goto label_19cb54;
        case 0x19cbd4u: goto label_19cbd4;
        case 0x19cbe4u: goto label_19cbe4;
        case 0x19cc64u: goto label_19cc64;
        case 0x19cc74u: goto label_19cc74;
        case 0x19cf88u: goto label_19cf88;
        case 0x19cfa0u: goto label_19cfa0;
        default: break;
    }

    ctx->pc = 0x19c4d0u;

    // 0x19c4d0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19c4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x19C4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4D4u;
        // 0x19c4d8: 0xe46cd580  swc1        $f12, -0x2A80($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956416), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C4DCu;
    // 0x19c4dc: 0x0  nop
    ctx->pc = 0x19c4dcu;
    // NOP
    // 0x19c4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x19C4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C4E8u;
    // 0x19c4e8: 0x0  nop
    ctx->pc = 0x19c4e8u;
    // NOP
    // 0x19c4ec: 0x0  nop
    ctx->pc = 0x19c4ecu;
    // NOP
    // 0x19c4f0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19c4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19c4f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19c4f8: 0x24050643  addiu       $a1, $zero, 0x643
    ctx->pc = 0x19c4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1603));
    // 0x19c4fc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c500: 0x24030384  addiu       $v1, $zero, 0x384
    ctx->pc = 0x19c500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x19c504: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19c504u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c508: 0x3e00008  jr          $ra
    ctx->pc = 0x19C508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C508u;
        // 0x19c50c: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C510u;
    // 0x19c510: 0x2484028c  addiu       $a0, $a0, 0x28C
    ctx->pc = 0x19c510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 652));
    // 0x19c514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c518: 0x804bbe8  j           func_12EFA0
    ctx->pc = 0x19C518u;
    ctx->pc = 0x19C51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C518u;
    // 0x19c51c: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    sub_0012EFA0_0x12efa0(rdram, ctx, runtime); return;
    ctx->pc = 0x19C520u;
    // 0x19c520: 0x3e00008  jr          $ra
    ctx->pc = 0x19C520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C528u;
    // 0x19c528: 0x0  nop
    ctx->pc = 0x19c528u;
    // NOP
    // 0x19c52c: 0x0  nop
    ctx->pc = 0x19c52cu;
    // NOP
    // 0x19c530: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19c530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19c534: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x19c534u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19c538: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x19c538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19c53c: 0x24030243  addiu       $v1, $zero, 0x243
    ctx->pc = 0x19c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
    // 0x19c540: 0xa4c30100  sh          $v1, 0x100($a2)
    ctx->pc = 0x19c540u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 256), (uint16_t)GPR_U32(ctx, 3));
    // 0x19c544: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x19c544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x19c548: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c54c: 0xa4c50104  sh          $a1, 0x104($a2)
    ctx->pc = 0x19c54cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 260), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c550: 0xa08300f7  sb          $v1, 0xF7($a0)
    ctx->pc = 0x19c550u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 247), (uint8_t)GPR_U32(ctx, 3));
    // 0x19c554: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x19c554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19c558: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x19c558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x19c55c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C55Cu;
        // 0x19c560: 0xac830498  sw          $v1, 0x498($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C564u;
    // 0x19c564: 0x0  nop
    ctx->pc = 0x19c564u;
    // NOP
    // 0x19c568: 0x0  nop
    ctx->pc = 0x19c568u;
    // NOP
    // 0x19c56c: 0x0  nop
    ctx->pc = 0x19c56cu;
    // NOP
    // 0x19c570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c57c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c580: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c584: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x19c584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x19c588: 0xa08200f7  sb          $v0, 0xF7($a0)
    ctx->pc = 0x19c588u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 247), (uint8_t)GPR_U32(ctx, 2));
    // 0x19c58c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c590: 0x8c820498  lw          $v0, 0x498($a0)
    ctx->pc = 0x19c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19c594: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x19c594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x19c598: 0xac820498  sw          $v0, 0x498($a0)
    ctx->pc = 0x19c598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 2));
    // 0x19c59c: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x19C59Cu;
    SET_GPR_U32(ctx, 31, 0x19C5A4u);
    ctx->pc = 0x19C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C59Cu;
    // 0x19c5a0: 0x2604028c  addiu       $a0, $s0, 0x28C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x19C59Cu, 0x19C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C5A4u;
label_19c5a4:
    // 0x19c5a4: 0x8e04049c  lw          $a0, 0x49C($s0)
    ctx->pc = 0x19c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x19c5a8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x19c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x19c5ac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x19c5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x19c5b0: 0xae03049c  sw          $v1, 0x49C($s0)
    ctx->pc = 0x19c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 3));
    // 0x19c5b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c5b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19C5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5BCu;
        // 0x19c5c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C5C4u;
    // 0x19c5c4: 0x0  nop
    ctx->pc = 0x19c5c4u;
    // NOP
    // 0x19c5c8: 0x0  nop
    ctx->pc = 0x19c5c8u;
    // NOP
    // 0x19c5cc: 0x0  nop
    ctx->pc = 0x19c5ccu;
    // NOP
    // 0x19c5d0: 0xa08000f7  sb          $zero, 0xF7($a0)
    ctx->pc = 0x19c5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 247), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c5d4: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x19c5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19c5d8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x19c5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x19c5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x19C5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5DCu;
        // 0x19c5e0: 0xac830498  sw          $v1, 0x498($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C5E4u;
    // 0x19c5e4: 0x0  nop
    ctx->pc = 0x19c5e4u;
    // NOP
    // 0x19c5e8: 0x0  nop
    ctx->pc = 0x19c5e8u;
    // NOP
    // 0x19c5ec: 0x0  nop
    ctx->pc = 0x19c5ecu;
    // NOP
    // 0x19c5f0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19c5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19c5f4: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x19c5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19c5f8: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x19c5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19c5fc: 0x24030243  addiu       $v1, $zero, 0x243
    ctx->pc = 0x19c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
    // 0x19c600: 0xa4c30100  sh          $v1, 0x100($a2)
    ctx->pc = 0x19c600u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 256), (uint16_t)GPR_U32(ctx, 3));
    // 0x19c604: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x19c604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x19c608: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c60c: 0xa4c50104  sh          $a1, 0x104($a2)
    ctx->pc = 0x19c60cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 260), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c610: 0xa08300f7  sb          $v1, 0xF7($a0)
    ctx->pc = 0x19c610u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 247), (uint8_t)GPR_U32(ctx, 3));
    // 0x19c614: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x19c614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19c618: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x19c618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x19c61c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C61Cu;
        // 0x19c620: 0xac830498  sw          $v1, 0x498($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C624u;
    // 0x19c624: 0x0  nop
    ctx->pc = 0x19c624u;
    // NOP
    // 0x19c628: 0x0  nop
    ctx->pc = 0x19c628u;
    // NOP
    // 0x19c62c: 0x0  nop
    ctx->pc = 0x19c62cu;
    // NOP
    // 0x19c630: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c634: 0xa08300f7  sb          $v1, 0xF7($a0)
    ctx->pc = 0x19c634u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 247), (uint8_t)GPR_U32(ctx, 3));
    // 0x19c638: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x19c638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19c63c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x19c63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x19c640: 0x3e00008  jr          $ra
    ctx->pc = 0x19C640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C640u;
        // 0x19c644: 0xac830498  sw          $v1, 0x498($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C648u;
    // 0x19c648: 0x0  nop
    ctx->pc = 0x19c648u;
    // NOP
    // 0x19c64c: 0x0  nop
    ctx->pc = 0x19c64cu;
    // NOP
    // 0x19c650: 0xa08000f7  sb          $zero, 0xF7($a0)
    ctx->pc = 0x19c650u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 247), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c654: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x19c654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19c658: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x19c658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x19c65c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C65Cu;
        // 0x19c660: 0xac830498  sw          $v1, 0x498($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C664u;
    // 0x19c664: 0x0  nop
    ctx->pc = 0x19c664u;
    // NOP
    // 0x19c668: 0x0  nop
    ctx->pc = 0x19c668u;
    // NOP
    // 0x19c66c: 0x0  nop
    ctx->pc = 0x19c66cu;
    // NOP
    // 0x19c670: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x19c670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19c674: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x19c674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19c678: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19c678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19c67c: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x19c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x19c680: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x19c680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19c684: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x19c684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19c688: 0xa4650100  sh          $a1, 0x100($v1)
    ctx->pc = 0x19c688u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c68c: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x19c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x19c690: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19c690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c694: 0xa4620104  sh          $v0, 0x104($v1)
    ctx->pc = 0x19c694u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 260), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c698: 0xa08500f7  sb          $a1, 0xF7($a0)
    ctx->pc = 0x19c698u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 247), (uint8_t)GPR_U32(ctx, 5));
    // 0x19c69c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x19c69cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19c6a0: 0x8c820498  lw          $v0, 0x498($a0)
    ctx->pc = 0x19c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19c6a4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x19c6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x19c6a8: 0xac820498  sw          $v0, 0x498($a0)
    ctx->pc = 0x19c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 2));
    // 0x19c6ac: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x19c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x19c6b0: 0x80587d0  j           func_161F40
    ctx->pc = 0x19C6B0u;
    ctx->pc = 0x19C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C6B0u;
    // 0x19c6b4: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161F40u;
    sub_00161F40_0x161f40(rdram, ctx, runtime); return;
    ctx->pc = 0x19C6B8u;
    // 0x19c6b8: 0x0  nop
    ctx->pc = 0x19c6b8u;
    // NOP
    // 0x19c6bc: 0x0  nop
    ctx->pc = 0x19c6bcu;
    // NOP
    // 0x19c6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c6c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c6c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c6cc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x19c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x19c6d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c6d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c6d8: 0xa08300f7  sb          $v1, 0xF7($a0)
    ctx->pc = 0x19c6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 247), (uint8_t)GPR_U32(ctx, 3));
    // 0x19c6dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c6e0: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x19c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19c6e4: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x19c6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x19c6e8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x19c6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x19c6ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c6f0: 0xac830498  sw          $v1, 0x498($a0)
    ctx->pc = 0x19c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
    // 0x19c6f4: 0xac820498  sw          $v0, 0x498($a0)
    ctx->pc = 0x19c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 2));
    // 0x19c6f8: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x19C6F8u;
    SET_GPR_U32(ctx, 31, 0x19C700u);
    ctx->pc = 0x19C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C6F8u;
    // 0x19c6fc: 0x2604028c  addiu       $a0, $s0, 0x28C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x19C6F8u, 0x19C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C700u;
label_19c700:
    // 0x19c700: 0x8e04049c  lw          $a0, 0x49C($s0)
    ctx->pc = 0x19c700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x19c704: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x19c704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x19c708: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x19c708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x19c70c: 0xae03049c  sw          $v1, 0x49C($s0)
    ctx->pc = 0x19c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 3));
    // 0x19c710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c718: 0x3e00008  jr          $ra
    ctx->pc = 0x19C718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C718u;
        // 0x19c71c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C720u;
    // 0x19c720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c72c: 0xa08000f7  sb          $zero, 0xF7($a0)
    ctx->pc = 0x19c72cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 247), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c730: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c734: 0x8c820498  lw          $v0, 0x498($a0)
    ctx->pc = 0x19c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19c738: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x19c738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x19c73c: 0xac820498  sw          $v0, 0x498($a0)
    ctx->pc = 0x19c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 2));
    // 0x19c740: 0xc05880c  jal         func_162030
    ctx->pc = 0x19C740u;
    SET_GPR_U32(ctx, 31, 0x19C748u);
    ctx->pc = 0x19C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C740u;
    // 0x19c744: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162030u, 0x19C740u, 0x19C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C748u;
label_19c748:
    // 0x19c748: 0x8e040498  lw          $a0, 0x498($s0)
    ctx->pc = 0x19c748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x19c74c: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x19c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x19c750: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19c750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19c754: 0xae030498  sw          $v1, 0x498($s0)
    ctx->pc = 0x19c754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 3));
    // 0x19c758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c75c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c760: 0x3e00008  jr          $ra
    ctx->pc = 0x19C760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C760u;
        // 0x19c764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C768u;
    // 0x19c768: 0x0  nop
    ctx->pc = 0x19c768u;
    // NOP
    // 0x19c76c: 0x0  nop
    ctx->pc = 0x19c76cu;
    // NOP
    // 0x19c770: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19c770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19c774: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19c774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19c778: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x19c778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x19c77c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c780: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x19c780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x19c784: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19c784u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c788: 0x3e00008  jr          $ra
    ctx->pc = 0x19C788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C788u;
        // 0x19c78c: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C790u;
    // 0x19c790: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x19c790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x19c794: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x19c794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x19c798: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19c798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19c79c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7a0: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x19c7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x19c7a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19c7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19c7a8: 0xac82049c  sw          $v0, 0x49C($a0)
    ctx->pc = 0x19c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1180), GPR_U32(ctx, 2));
    // 0x19c7ac: 0x804bbe8  j           func_12EFA0
    ctx->pc = 0x19C7ACu;
    ctx->pc = 0x19C7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C7ACu;
    // 0x19c7b0: 0x2484028c  addiu       $a0, $a0, 0x28C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 652));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    sub_0012EFA0_0x12efa0(rdram, ctx, runtime); return;
    ctx->pc = 0x19C7B4u;
    // 0x19c7b4: 0x0  nop
    ctx->pc = 0x19c7b4u;
    // NOP
    // 0x19c7b8: 0x0  nop
    ctx->pc = 0x19c7b8u;
    // NOP
    // 0x19c7bc: 0x0  nop
    ctx->pc = 0x19c7bcu;
    // NOP
    // 0x19c7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19C7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C7C8u;
    // 0x19c7c8: 0x0  nop
    ctx->pc = 0x19c7c8u;
    // NOP
    // 0x19c7cc: 0x0  nop
    ctx->pc = 0x19c7ccu;
    // NOP
    // 0x19c7d0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19c7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19c7d4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19c7d8: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x19c7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x19c7dc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19c7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c7e0: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x19c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x19c7e4: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19c7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x19C7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7E8u;
        // 0x19c7ec: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C7F0u;
    // 0x19c7f0: 0x8c82049c  lw          $v0, 0x49C($a0)
    ctx->pc = 0x19c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x19c7f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7f8: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x19c7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x19c7fc: 0x34420078  ori         $v0, $v0, 0x78
    ctx->pc = 0x19c7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)120);
    // 0x19c800: 0xac82049c  sw          $v0, 0x49C($a0)
    ctx->pc = 0x19c800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1180), GPR_U32(ctx, 2));
    // 0x19c804: 0x804bbe8  j           func_12EFA0
    ctx->pc = 0x19C804u;
    ctx->pc = 0x19C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C804u;
    // 0x19c808: 0x2484028c  addiu       $a0, $a0, 0x28C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 652));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    sub_0012EFA0_0x12efa0(rdram, ctx, runtime); return;
    ctx->pc = 0x19C80Cu;
    // 0x19c80c: 0x0  nop
    ctx->pc = 0x19c80cu;
    // NOP
    // 0x19c810: 0x3e00008  jr          $ra
    ctx->pc = 0x19C810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C818u;
    // 0x19c818: 0x0  nop
    ctx->pc = 0x19c818u;
    // NOP
    // 0x19c81c: 0x0  nop
    ctx->pc = 0x19c81cu;
    // NOP
    // 0x19c820: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19c820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19c824: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19c824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19c828: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x19c828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x19c82c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c830: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x19c830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x19c834: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19c834u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c838: 0x3e00008  jr          $ra
    ctx->pc = 0x19C838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C838u;
        // 0x19c83c: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C840u;
    // 0x19c840: 0x908300fc  lbu         $v1, 0xFC($a0)
    ctx->pc = 0x19c840u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x19c844: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x19c844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x19c848: 0x3e00008  jr          $ra
    ctx->pc = 0x19C848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C848u;
        // 0x19c84c: 0xa08300fc  sb          $v1, 0xFC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 252), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C850u;
    // 0x19c850: 0x3e00008  jr          $ra
    ctx->pc = 0x19C850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C858u;
    // 0x19c858: 0x0  nop
    ctx->pc = 0x19c858u;
    // NOP
    // 0x19c85c: 0x0  nop
    ctx->pc = 0x19c85cu;
    // NOP
    // 0x19c860: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19c860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19c864: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19c864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19c868: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x19c868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x19c86c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c870: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x19c870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x19c874: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19c874u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c878: 0x3e00008  jr          $ra
    ctx->pc = 0x19C878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C878u;
        // 0x19c87c: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C880u;
    // 0x19c880: 0x908300fc  lbu         $v1, 0xFC($a0)
    ctx->pc = 0x19c880u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x19c884: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x19c884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x19c888: 0x3e00008  jr          $ra
    ctx->pc = 0x19C888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C888u;
        // 0x19c88c: 0xa08300fc  sb          $v1, 0xFC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 252), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C890u;
    // 0x19c890: 0x3e00008  jr          $ra
    ctx->pc = 0x19C890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C898u;
    // 0x19c898: 0x0  nop
    ctx->pc = 0x19c898u;
    // NOP
    // 0x19c89c: 0x0  nop
    ctx->pc = 0x19c89cu;
    // NOP
    // 0x19c8a0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19c8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19c8a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19c8a8: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x19c8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x19c8ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c8b0: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x19c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x19c8b4: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19c8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x19C8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8B8u;
        // 0x19c8bc: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C8C0u;
    // 0x19c8c0: 0x908300fc  lbu         $v1, 0xFC($a0)
    ctx->pc = 0x19c8c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x19c8c4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x19c8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x19c8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19C8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8C8u;
        // 0x19c8cc: 0xa08300fc  sb          $v1, 0xFC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 252), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C8D0u;
    // 0x19c8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19C8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C8D8u;
    // 0x19c8d8: 0x0  nop
    ctx->pc = 0x19c8d8u;
    // NOP
    // 0x19c8dc: 0x0  nop
    ctx->pc = 0x19c8dcu;
    // NOP
    // 0x19c8e0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19c8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19c8e4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19c8e8: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x19c8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x19c8ec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19c8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c8f0: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x19c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x19c8f4: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19c8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x19C8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8F8u;
        // 0x19c8fc: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C900u;
    // 0x19c900: 0x908300fc  lbu         $v1, 0xFC($a0)
    ctx->pc = 0x19c900u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x19c904: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x19c904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x19c908: 0x3e00008  jr          $ra
    ctx->pc = 0x19C908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C908u;
        // 0x19c90c: 0xa08300fc  sb          $v1, 0xFC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 252), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C910u;
    // 0x19c910: 0x3e00008  jr          $ra
    ctx->pc = 0x19C910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C918u;
    // 0x19c918: 0x0  nop
    ctx->pc = 0x19c918u;
    // NOP
    // 0x19c91c: 0x0  nop
    ctx->pc = 0x19c91cu;
    // NOP
    // 0x19c920: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19c920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19c924: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19c924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19c928: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x19c928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x19c92c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c930: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x19c930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x19c934: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19c934u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c938: 0x3e00008  jr          $ra
    ctx->pc = 0x19C938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C938u;
        // 0x19c93c: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C940u;
    // 0x19c940: 0x908300fc  lbu         $v1, 0xFC($a0)
    ctx->pc = 0x19c940u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x19c944: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x19c944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x19c948: 0x3e00008  jr          $ra
    ctx->pc = 0x19C948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C948u;
        // 0x19c94c: 0xa08300fc  sb          $v1, 0xFC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 252), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C950u;
    // 0x19c950: 0x3e00008  jr          $ra
    ctx->pc = 0x19C950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C958u;
    // 0x19c958: 0x0  nop
    ctx->pc = 0x19c958u;
    // NOP
    // 0x19c95c: 0x0  nop
    ctx->pc = 0x19c95cu;
    // NOP
    // 0x19c960: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19c960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19c964: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19c964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19c968: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x19c968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x19c96c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19c96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c970: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x19c970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x19c974: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19c974u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c978: 0x3e00008  jr          $ra
    ctx->pc = 0x19C978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C978u;
        // 0x19c97c: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C980u;
    // 0x19c980: 0x2484028c  addiu       $a0, $a0, 0x28C
    ctx->pc = 0x19c980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 652));
    // 0x19c984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c988: 0x804bbe8  j           func_12EFA0
    ctx->pc = 0x19C988u;
    ctx->pc = 0x19C98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C988u;
    // 0x19c98c: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    sub_0012EFA0_0x12efa0(rdram, ctx, runtime); return;
    ctx->pc = 0x19C990u;
    // 0x19c990: 0x3e00008  jr          $ra
    ctx->pc = 0x19C990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C998u;
    // 0x19c998: 0x0  nop
    ctx->pc = 0x19c998u;
    // NOP
    // 0x19c99c: 0x0  nop
    ctx->pc = 0x19c99cu;
    // NOP
    // 0x19c9a0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19c9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19c9a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19c9a8: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x19c9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x19c9ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c9b0: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x19c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x19c9b4: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19c9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x19C9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9B8u;
        // 0x19c9bc: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C9C0u;
    // 0x19c9c0: 0x2484028c  addiu       $a0, $a0, 0x28C
    ctx->pc = 0x19c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 652));
    // 0x19c9c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9c8: 0x804bbe8  j           func_12EFA0
    ctx->pc = 0x19C9C8u;
    ctx->pc = 0x19C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C9C8u;
    // 0x19c9cc: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    sub_0012EFA0_0x12efa0(rdram, ctx, runtime); return;
    ctx->pc = 0x19C9D0u;
    // 0x19c9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19C9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C9D8u;
    // 0x19c9d8: 0x0  nop
    ctx->pc = 0x19c9d8u;
    // NOP
    // 0x19c9dc: 0x0  nop
    ctx->pc = 0x19c9dcu;
    // NOP
    // 0x19c9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c9e4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x19c9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19c9e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c9ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19c9f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c9f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9f8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x19c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19c9fc: 0x24020647  addiu       $v0, $zero, 0x647
    ctx->pc = 0x19c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1607));
    // 0x19ca00: 0xa4620100  sh          $v0, 0x100($v1)
    ctx->pc = 0x19ca00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 2));
    // 0x19ca04: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x19ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x19ca08: 0xa4620104  sh          $v0, 0x104($v1)
    ctx->pc = 0x19ca08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 260), (uint16_t)GPR_U32(ctx, 2));
    // 0x19ca0c: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x19ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19ca10: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x19ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x19ca14: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19ca14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19ca18: 0xac820498  sw          $v0, 0x498($a0)
    ctx->pc = 0x19ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 2));
    // 0x19ca1c: 0xc062804  jal         func_18A010
    ctx->pc = 0x19CA1Cu;
    SET_GPR_U32(ctx, 31, 0x19CA24u);
    ctx->pc = 0x19CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA1Cu;
    // 0x19ca20: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x19CA1Cu, 0x19CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CA24u;
label_19ca24:
    // 0x19ca24: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x19ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x19ca28: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x19ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x19ca2c: 0xa60000e8  sh          $zero, 0xE8($s0)
    ctx->pc = 0x19ca2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ca30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ca30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ca34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ca34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ca38: 0x3e00008  jr          $ra
    ctx->pc = 0x19CA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA38u;
        // 0x19ca3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CA40u;
    // 0x19ca40: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x19ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x19ca44: 0x34630070  ori         $v1, $v1, 0x70
    ctx->pc = 0x19ca44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x19ca48: 0x3e00008  jr          $ra
    ctx->pc = 0x19CA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA48u;
        // 0x19ca4c: 0xac83049c  sw          $v1, 0x49C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CA50u;
    // 0x19ca50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ca54: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19ca54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19ca58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ca58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ca5c: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x19ca5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x19ca60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ca60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ca64: 0x2405ff8f  addiu       $a1, $zero, -0x71
    ctx->pc = 0x19ca64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x19ca68: 0x8c870498  lw          $a3, 0x498($a0)
    ctx->pc = 0x19ca68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19ca6c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19ca70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ca70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca74: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19ca78: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x19ca78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x19ca7c: 0xac860498  sw          $a2, 0x498($a0)
    ctx->pc = 0x19ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 6));
    // 0x19ca80: 0x8c8600dc  lw          $a2, 0xDC($a0)
    ctx->pc = 0x19ca80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x19ca84: 0xac8600e0  sw          $a2, 0xE0($a0)
    ctx->pc = 0x19ca84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 6));
    // 0x19ca88: 0x8c86049c  lw          $a2, 0x49C($a0)
    ctx->pc = 0x19ca88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x19ca8c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x19ca8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x19ca90: 0xac85049c  sw          $a1, 0x49C($a0)
    ctx->pc = 0x19ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1180), GPR_U32(ctx, 5));
    // 0x19ca94: 0x94630102  lhu         $v1, 0x102($v1)
    ctx->pc = 0x19ca94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 258)));
    // 0x19ca98: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x19ca98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x19ca9c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19CA9Cu;
    {
        const bool branch_taken_0x19ca9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ca9c) {
            ctx->pc = 0x19CAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CA9Cu;
            // 0x19caa0: 0xa60000e8  sh          $zero, 0xE8($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CAB0u;
            goto label_19cab0;
        }
    }
    ctx->pc = 0x19CAA4u;
    // 0x19caa4: 0x240300cd  addiu       $v1, $zero, 0xCD
    ctx->pc = 0x19caa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x19caa8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19CAA8u;
    {
        const bool branch_taken_0x19caa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAA8u;
        // 0x19caac: 0xa60300e8  sh          $v1, 0xE8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19caa8) {
            ctx->pc = 0x19CAE4u;
            goto label_19cae4;
        }
    }
    ctx->pc = 0x19CAB0u;
label_19cab0:
    // 0x19cab0: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x19cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x19cab4: 0xc062d2c  jal         func_18B4B0
    ctx->pc = 0x19CAB4u;
    SET_GPR_U32(ctx, 31, 0x19CABCu);
    ctx->pc = 0x19CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CAB4u;
    // 0x19cab8: 0xae0400e4  sw          $a0, 0xE4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B4B0u, 0x19CAB4u, 0x19CABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CABCu;
label_19cabc:
    // 0x19cabc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19cabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19cac0: 0xa60200ea  sh          $v0, 0xEA($s0)
    ctx->pc = 0x19cac0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 234), (uint16_t)GPR_U32(ctx, 2));
    // 0x19cac4: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x19CAC4u;
    SET_GPR_U32(ctx, 31, 0x19CACCu);
    ctx->pc = 0x19CAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CAC4u;
    // 0x19cac8: 0x960400ea  lhu         $a0, 0xEA($s0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DA90u, 0x19CAC4u, 0x19CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CACCu;
label_19cacc:
    // 0x19cacc: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x19caccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x19cad0: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x19cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x19cad4: 0x8e040498  lw          $a0, 0x498($s0)
    ctx->pc = 0x19cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x19cad8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19cad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19cadc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19cadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19cae0: 0xae030498  sw          $v1, 0x498($s0)
    ctx->pc = 0x19cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 3));
label_19cae4:
    // 0x19cae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19cae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19caec: 0x3e00008  jr          $ra
    ctx->pc = 0x19CAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAECu;
        // 0x19caf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CAF4u;
    // 0x19caf4: 0x0  nop
    ctx->pc = 0x19caf4u;
    // NOP
    // 0x19caf8: 0x0  nop
    ctx->pc = 0x19caf8u;
    // NOP
    // 0x19cafc: 0x0  nop
    ctx->pc = 0x19cafcu;
    // NOP
    // 0x19cb00: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19cb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19cb04: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19cb08: 0x24050217  addiu       $a1, $zero, 0x217
    ctx->pc = 0x19cb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x19cb0c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19cb10: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x19cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x19cb14: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19cb14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19cb18: 0x3e00008  jr          $ra
    ctx->pc = 0x19CB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB18u;
        // 0x19cb1c: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CB20u;
    // 0x19cb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19cb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19cb24: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19cb28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19cb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19cb2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cb30: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x19cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x19cb34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19cb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb38: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x19cb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x19cb3c: 0xc05cc98  jal         func_173260
    ctx->pc = 0x19CB3Cu;
    SET_GPR_U32(ctx, 31, 0x19CB44u);
    ctx->pc = 0x19CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB3Cu;
    // 0x19cb40: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173260u, 0x19CB3Cu, 0x19CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CB44u;
label_19cb44:
    // 0x19cb44: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x19cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x19cb48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19cb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb4c: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x19CB4Cu;
    SET_GPR_U32(ctx, 31, 0x19CB54u);
    ctx->pc = 0x19CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB4Cu;
    // 0x19cb50: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x19CB4Cu, 0x19CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CB54u;
label_19cb54:
    // 0x19cb54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19cb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cb58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB5Cu;
        // 0x19cb60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CB64u;
    // 0x19cb64: 0x0  nop
    ctx->pc = 0x19cb64u;
    // NOP
    // 0x19cb68: 0x0  nop
    ctx->pc = 0x19cb68u;
    // NOP
    // 0x19cb6c: 0x0  nop
    ctx->pc = 0x19cb6cu;
    // NOP
    // 0x19cb70: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x19cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x19cb74: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19cb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19cb78: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x19cb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x19cb7c: 0x805ccb0  j           func_1732C0
    ctx->pc = 0x19CB7Cu;
    ctx->pc = 0x19CB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB7Cu;
    // 0x19cb80: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1732C0u;
    sub_001732C0_0x1732c0(rdram, ctx, runtime); return;
    ctx->pc = 0x19CB84u;
    // 0x19cb84: 0x0  nop
    ctx->pc = 0x19cb84u;
    // NOP
    // 0x19cb88: 0x0  nop
    ctx->pc = 0x19cb88u;
    // NOP
    // 0x19cb8c: 0x0  nop
    ctx->pc = 0x19cb8cu;
    // NOP
    // 0x19cb90: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19cb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19cb94: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19cb98: 0x24050217  addiu       $a1, $zero, 0x217
    ctx->pc = 0x19cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x19cb9c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19cb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19cba0: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x19cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x19cba4: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19cba4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19cba8: 0x3e00008  jr          $ra
    ctx->pc = 0x19CBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBA8u;
        // 0x19cbac: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CBB0u;
    // 0x19cbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19cbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19cbb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19cbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19cbb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19cbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19cbbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cbc0: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x19cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x19cbc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19cbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cbc8: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x19cbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x19cbcc: 0xc05cc98  jal         func_173260
    ctx->pc = 0x19CBCCu;
    SET_GPR_U32(ctx, 31, 0x19CBD4u);
    ctx->pc = 0x19CBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CBCCu;
    // 0x19cbd0: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173260u, 0x19CBCCu, 0x19CBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CBD4u;
label_19cbd4:
    // 0x19cbd4: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x19cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x19cbd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19cbd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cbdc: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x19CBDCu;
    SET_GPR_U32(ctx, 31, 0x19CBE4u);
    ctx->pc = 0x19CBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CBDCu;
    // 0x19cbe0: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x19CBDCu, 0x19CBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CBE4u;
label_19cbe4:
    // 0x19cbe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19cbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cbe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cbe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cbec: 0x3e00008  jr          $ra
    ctx->pc = 0x19CBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBECu;
        // 0x19cbf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CBF4u;
    // 0x19cbf4: 0x0  nop
    ctx->pc = 0x19cbf4u;
    // NOP
    // 0x19cbf8: 0x0  nop
    ctx->pc = 0x19cbf8u;
    // NOP
    // 0x19cbfc: 0x0  nop
    ctx->pc = 0x19cbfcu;
    // NOP
    // 0x19cc00: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x19cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x19cc04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19cc08: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x19cc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x19cc0c: 0x805ccb0  j           func_1732C0
    ctx->pc = 0x19CC0Cu;
    ctx->pc = 0x19CC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC0Cu;
    // 0x19cc10: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1732C0u;
    sub_001732C0_0x1732c0(rdram, ctx, runtime); return;
    ctx->pc = 0x19CC14u;
    // 0x19cc14: 0x0  nop
    ctx->pc = 0x19cc14u;
    // NOP
    // 0x19cc18: 0x0  nop
    ctx->pc = 0x19cc18u;
    // NOP
    // 0x19cc1c: 0x0  nop
    ctx->pc = 0x19cc1cu;
    // NOP
    // 0x19cc20: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19cc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19cc24: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19cc28: 0x24050217  addiu       $a1, $zero, 0x217
    ctx->pc = 0x19cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x19cc2c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19cc30: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x19cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x19cc34: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19cc34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19cc38: 0x3e00008  jr          $ra
    ctx->pc = 0x19CC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC38u;
        // 0x19cc3c: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CC40u;
    // 0x19cc40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19cc44: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x19cc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19cc48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19cc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19cc4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cc50: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x19cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x19cc54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19cc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc58: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x19cc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x19cc5c: 0xc05cc98  jal         func_173260
    ctx->pc = 0x19CC5Cu;
    SET_GPR_U32(ctx, 31, 0x19CC64u);
    ctx->pc = 0x19CC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC5Cu;
    // 0x19cc60: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173260u, 0x19CC5Cu, 0x19CC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CC64u;
label_19cc64:
    // 0x19cc64: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x19cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x19cc68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19cc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc6c: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x19CC6Cu;
    SET_GPR_U32(ctx, 31, 0x19CC74u);
    ctx->pc = 0x19CC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC6Cu;
    // 0x19cc70: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x19CC6Cu, 0x19CC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CC74u;
label_19cc74:
    // 0x19cc74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19cc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cc78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cc78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC7Cu;
        // 0x19cc80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CC84u;
    // 0x19cc84: 0x0  nop
    ctx->pc = 0x19cc84u;
    // NOP
    // 0x19cc88: 0x0  nop
    ctx->pc = 0x19cc88u;
    // NOP
    // 0x19cc8c: 0x0  nop
    ctx->pc = 0x19cc8cu;
    // NOP
    // 0x19cc90: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x19cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x19cc94: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x19cc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19cc98: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x19cc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x19cc9c: 0x805ccb0  j           func_1732C0
    ctx->pc = 0x19CC9Cu;
    ctx->pc = 0x19CCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC9Cu;
    // 0x19cca0: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1732C0u;
    sub_001732C0_0x1732c0(rdram, ctx, runtime); return;
    ctx->pc = 0x19CCA4u;
    // 0x19cca4: 0x0  nop
    ctx->pc = 0x19cca4u;
    // NOP
    // 0x19cca8: 0x0  nop
    ctx->pc = 0x19cca8u;
    // NOP
    // 0x19ccac: 0x0  nop
    ctx->pc = 0x19ccacu;
    // NOP
    // 0x19ccb0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19ccb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19ccb4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19ccb8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19ccbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19ccc0: 0xa4650100  sh          $a1, 0x100($v1)
    ctx->pc = 0x19ccc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19ccc4: 0x3e00008  jr          $ra
    ctx->pc = 0x19CCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCC4u;
        // 0x19ccc8: 0xa4600104  sh          $zero, 0x104($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 260), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CCCCu;
    // 0x19cccc: 0x0  nop
    ctx->pc = 0x19ccccu;
    // NOP
    // 0x19ccd0: 0xa08002d4  sb          $zero, 0x2D4($a0)
    ctx->pc = 0x19ccd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 724), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ccd4: 0x3e00008  jr          $ra
    ctx->pc = 0x19CCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCD4u;
        // 0x19ccd8: 0xa08002fc  sb          $zero, 0x2FC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 764), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CCDCu;
    // 0x19ccdc: 0x0  nop
    ctx->pc = 0x19ccdcu;
    // NOP
    // 0x19cce0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CCE8u;
    // 0x19cce8: 0x0  nop
    ctx->pc = 0x19cce8u;
    // NOP
    // 0x19ccec: 0x0  nop
    ctx->pc = 0x19ccecu;
    // NOP
    // 0x19ccf0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19ccf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19ccf4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19ccf8: 0x24050207  addiu       $a1, $zero, 0x207
    ctx->pc = 0x19ccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
    // 0x19ccfc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19cd00: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x19cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x19cd04: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19cd04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19cd08: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD08u;
        // 0x19cd0c: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CD10u;
    // 0x19cd10: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x19cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x19cd14: 0xa08302b9  sb          $v1, 0x2B9($a0)
    ctx->pc = 0x19cd14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 697), (uint8_t)GPR_U32(ctx, 3));
    // 0x19cd18: 0xa08302e1  sb          $v1, 0x2E1($a0)
    ctx->pc = 0x19cd18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 737), (uint8_t)GPR_U32(ctx, 3));
    // 0x19cd1c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD1Cu;
        // 0x19cd20: 0xa0830309  sb          $v1, 0x309($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 777), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CD24u;
    // 0x19cd24: 0x0  nop
    ctx->pc = 0x19cd24u;
    // NOP
    // 0x19cd28: 0x0  nop
    ctx->pc = 0x19cd28u;
    // NOP
    // 0x19cd2c: 0x0  nop
    ctx->pc = 0x19cd2cu;
    // NOP
    // 0x19cd30: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CD38u;
    // 0x19cd38: 0x0  nop
    ctx->pc = 0x19cd38u;
    // NOP
    // 0x19cd3c: 0x0  nop
    ctx->pc = 0x19cd3cu;
    // NOP
    // 0x19cd40: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19cd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19cd44: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19cd48: 0x240502c0  addiu       $a1, $zero, 0x2C0
    ctx->pc = 0x19cd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x19cd4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19cd50: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD50u;
        // 0x19cd54: 0xa4650100  sh          $a1, 0x100($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CD58u;
    // 0x19cd58: 0x0  nop
    ctx->pc = 0x19cd58u;
    // NOP
    // 0x19cd5c: 0x0  nop
    ctx->pc = 0x19cd5cu;
    // NOP
    // 0x19cd60: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x19cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x19cd64: 0x3c0203c0  lui         $v0, 0x3C0
    ctx->pc = 0x19cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)960 << 16));
    // 0x19cd68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19cd68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd6c: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x19cd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x19cd70: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19cd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19cd74: 0xac82049c  sw          $v0, 0x49C($a0)
    ctx->pc = 0x19cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1180), GPR_U32(ctx, 2));
    // 0x19cd78: 0x804bbe8  j           func_12EFA0
    ctx->pc = 0x19CD78u;
    ctx->pc = 0x19CD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CD78u;
    // 0x19cd7c: 0x2484028c  addiu       $a0, $a0, 0x28C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 652));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    sub_0012EFA0_0x12efa0(rdram, ctx, runtime); return;
    ctx->pc = 0x19CD80u;
    // 0x19cd80: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CD88u;
    // 0x19cd88: 0x0  nop
    ctx->pc = 0x19cd88u;
    // NOP
    // 0x19cd8c: 0x0  nop
    ctx->pc = 0x19cd8cu;
    // NOP
    // 0x19cd90: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19cd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19cd94: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19cd98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19cd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD9Cu;
        // 0x19cda0: 0xa4600106  sh          $zero, 0x106($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 262), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CDA4u;
    // 0x19cda4: 0x0  nop
    ctx->pc = 0x19cda4u;
    // NOP
    // 0x19cda8: 0x0  nop
    ctx->pc = 0x19cda8u;
    // NOP
    // 0x19cdac: 0x0  nop
    ctx->pc = 0x19cdacu;
    // NOP
    // 0x19cdb0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19cdb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19cdb4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19cdb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19cdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19cdbc: 0x84650106  lh          $a1, 0x106($v1)
    ctx->pc = 0x19cdbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 262)));
    // 0x19cdc0: 0x24660106  addiu       $a2, $v1, 0x106
    ctx->pc = 0x19cdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 262));
    // 0x19cdc4: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19CDC4u;
    {
        const bool branch_taken_0x19cdc4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x19CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDC4u;
        // 0x19cdc8: 0x30a30007  andi        $v1, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdc4) {
            ctx->pc = 0x19CDD8u;
            goto label_19cdd8;
        }
    }
    ctx->pc = 0x19CDCCu;
    // 0x19cdcc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19CDCCu;
    {
        const bool branch_taken_0x19cdcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cdcc) {
            ctx->pc = 0x19CDD8u;
            goto label_19cdd8;
        }
    }
    ctx->pc = 0x19CDD4u;
    // 0x19cdd4: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x19cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_19cdd8:
    // 0x19cdd8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19CDD8u;
    {
        const bool branch_taken_0x19cdd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cdd8) {
            ctx->pc = 0x19CDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CDD8u;
            // 0x19cddc: 0x84c30000  lh          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CDF0u;
            goto label_19cdf0;
        }
    }
    ctx->pc = 0x19CDE0u;
    // 0x19cde0: 0x848304a8  lh          $v1, 0x4A8($a0)
    ctx->pc = 0x19cde0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1192)));
    // 0x19cde4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19cde8: 0xa48304a8  sh          $v1, 0x4A8($a0)
    ctx->pc = 0x19cde8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1192), (uint16_t)GPR_U32(ctx, 3));
    // 0x19cdec: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x19cdecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_19cdf0:
    // 0x19cdf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19cdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x19CDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDF4u;
        // 0x19cdf8: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CDFCu;
    // 0x19cdfc: 0x0  nop
    ctx->pc = 0x19cdfcu;
    // NOP
    // 0x19ce00: 0x3e00008  jr          $ra
    ctx->pc = 0x19CE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CE08u;
    // 0x19ce08: 0x0  nop
    ctx->pc = 0x19ce08u;
    // NOP
    // 0x19ce0c: 0x0  nop
    ctx->pc = 0x19ce0cu;
    // NOP
    // 0x19ce10: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19ce10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19ce14: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19ce18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19ce1c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE1Cu;
        // 0x19ce20: 0xa4600106  sh          $zero, 0x106($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 262), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CE24u;
    // 0x19ce24: 0x0  nop
    ctx->pc = 0x19ce24u;
    // NOP
    // 0x19ce28: 0x0  nop
    ctx->pc = 0x19ce28u;
    // NOP
    // 0x19ce2c: 0x0  nop
    ctx->pc = 0x19ce2cu;
    // NOP
    // 0x19ce30: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x19ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x19ce34: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x19ce34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x19ce38: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x19CE38u;
    {
        const bool branch_taken_0x19ce38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce38) {
            ctx->pc = 0x19CE88u;
            goto label_19ce88;
        }
    }
    ctx->pc = 0x19CE40u;
    // 0x19ce40: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19ce40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19ce44: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19ce48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19ce4c: 0x84650106  lh          $a1, 0x106($v1)
    ctx->pc = 0x19ce4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 262)));
    // 0x19ce50: 0x24660106  addiu       $a2, $v1, 0x106
    ctx->pc = 0x19ce50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 262));
    // 0x19ce54: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19CE54u;
    {
        const bool branch_taken_0x19ce54 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x19CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE54u;
        // 0x19ce58: 0x30a30007  andi        $v1, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce54) {
            ctx->pc = 0x19CE68u;
            goto label_19ce68;
        }
    }
    ctx->pc = 0x19CE5Cu;
    // 0x19ce5c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19CE5Cu;
    {
        const bool branch_taken_0x19ce5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce5c) {
            ctx->pc = 0x19CE68u;
            goto label_19ce68;
        }
    }
    ctx->pc = 0x19CE64u;
    // 0x19ce64: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x19ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_19ce68:
    // 0x19ce68: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19CE68u;
    {
        const bool branch_taken_0x19ce68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ce68) {
            ctx->pc = 0x19CE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CE68u;
            // 0x19ce6c: 0x84c30000  lh          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CE80u;
            goto label_19ce80;
        }
    }
    ctx->pc = 0x19CE70u;
    // 0x19ce70: 0x848304a8  lh          $v1, 0x4A8($a0)
    ctx->pc = 0x19ce70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1192)));
    // 0x19ce74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ce78: 0xa48304a8  sh          $v1, 0x4A8($a0)
    ctx->pc = 0x19ce78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1192), (uint16_t)GPR_U32(ctx, 3));
    // 0x19ce7c: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x19ce7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_19ce80:
    // 0x19ce80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ce84: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x19ce84u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_19ce88:
    // 0x19ce88: 0x3e00008  jr          $ra
    ctx->pc = 0x19CE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CE90u;
    // 0x19ce90: 0x3e00008  jr          $ra
    ctx->pc = 0x19CE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CE98u;
    // 0x19ce98: 0x0  nop
    ctx->pc = 0x19ce98u;
    // NOP
    // 0x19ce9c: 0x0  nop
    ctx->pc = 0x19ce9cu;
    // NOP
    // 0x19cea0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19cea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19cea4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19cea8: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x19cea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x19ceac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19ceacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19ceb0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x19ceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x19ceb4: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19ceb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19ceb8: 0x3e00008  jr          $ra
    ctx->pc = 0x19CEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEB8u;
        // 0x19cebc: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CEC0u;
    // 0x19cec0: 0x8c85049c  lw          $a1, 0x49C($a0)
    ctx->pc = 0x19cec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x19cec4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x19cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x19cec8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x19cec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x19cecc: 0x3e00008  jr          $ra
    ctx->pc = 0x19CECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CECCu;
        // 0x19ced0: 0xac83049c  sw          $v1, 0x49C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CED4u;
    // 0x19ced4: 0x0  nop
    ctx->pc = 0x19ced4u;
    // NOP
    // 0x19ced8: 0x0  nop
    ctx->pc = 0x19ced8u;
    // NOP
    // 0x19cedc: 0x0  nop
    ctx->pc = 0x19cedcu;
    // NOP
    // 0x19cee0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CEE8u;
    // 0x19cee8: 0x0  nop
    ctx->pc = 0x19cee8u;
    // NOP
    // 0x19ceec: 0x0  nop
    ctx->pc = 0x19ceecu;
    // NOP
    // 0x19cef0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19cef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19cef4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19cef8: 0x24050243  addiu       $a1, $zero, 0x243
    ctx->pc = 0x19cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
    // 0x19cefc: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x19cefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19cf00: 0xa4c50100  sh          $a1, 0x100($a2)
    ctx->pc = 0x19cf00u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19cf04: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x19cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x19cf08: 0xa4c30104  sh          $v1, 0x104($a2)
    ctx->pc = 0x19cf08u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 260), (uint16_t)GPR_U32(ctx, 3));
    // 0x19cf0c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x19cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x19cf10: 0x9063f35b  lbu         $v1, -0xCA5($v1)
    ctx->pc = 0x19cf10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964059)));
    // 0x19cf14: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CF14u;
    {
        const bool branch_taken_0x19cf14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF14u;
        // 0x19cf18: 0x24c50104  addiu       $a1, $a2, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf14) {
            ctx->pc = 0x19CF24u;
            goto label_19cf24;
        }
    }
    ctx->pc = 0x19CF1Cu;
    // 0x19cf1c: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x19cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x19cf20: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x19cf20u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_19cf24:
    // 0x19cf24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19cf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cf28: 0xa08300f7  sb          $v1, 0xF7($a0)
    ctx->pc = 0x19cf28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 247), (uint8_t)GPR_U32(ctx, 3));
    // 0x19cf2c: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x19cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19cf30: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x19cf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x19cf34: 0x3e00008  jr          $ra
    ctx->pc = 0x19CF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF34u;
        // 0x19cf38: 0xac830498  sw          $v1, 0x498($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CF3Cu;
    // 0x19cf3c: 0x0  nop
    ctx->pc = 0x19cf3cu;
    // NOP
    // 0x19cf40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19cf44: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x19cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x19cf48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19cf4c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x19cf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19cf50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cf54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cf58: 0x8c87049c  lw          $a3, 0x49C($a0)
    ctx->pc = 0x19cf58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x19cf5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19cf5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19cf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf64: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x19cf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x19cf68: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x19cf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x19cf6c: 0xac83049c  sw          $v1, 0x49C($a0)
    ctx->pc = 0x19cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1180), GPR_U32(ctx, 3));
    // 0x19cf70: 0xa08200f7  sb          $v0, 0xF7($a0)
    ctx->pc = 0x19cf70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 247), (uint8_t)GPR_U32(ctx, 2));
    // 0x19cf74: 0x8c820498  lw          $v0, 0x498($a0)
    ctx->pc = 0x19cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19cf78: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x19cf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x19cf7c: 0xac820498  sw          $v0, 0x498($a0)
    ctx->pc = 0x19cf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 2));
    // 0x19cf80: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x19CF80u;
    SET_GPR_U32(ctx, 31, 0x19CF88u);
    ctx->pc = 0x19CF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CF80u;
    // 0x19cf84: 0x2604028c  addiu       $a0, $s0, 0x28C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x19CF80u, 0x19CF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF88u;
label_19cf88:
    // 0x19cf88: 0x920500f7  lbu         $a1, 0xF7($s0)
    ctx->pc = 0x19cf88u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 247)));
    // 0x19cf8c: 0x960600ee  lhu         $a2, 0xEE($s0)
    ctx->pc = 0x19cf8cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 238)));
    // 0x19cf90: 0x960700ec  lhu         $a3, 0xEC($s0)
    ctx->pc = 0x19cf90u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x19cf94: 0x8e0800f8  lw          $t0, 0xF8($s0)
    ctx->pc = 0x19cf94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x19cf98: 0xc059f80  jal         func_167E00
    ctx->pc = 0x19CF98u;
    SET_GPR_U32(ctx, 31, 0x19CFA0u);
    ctx->pc = 0x19CF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CF98u;
    // 0x19cf9c: 0x960400ea  lhu         $a0, 0xEA($s0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167E00u, 0x19CF98u, 0x19CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CFA0u;
label_19cfa0:
    // 0x19cfa0: 0x8e040498  lw          $a0, 0x498($s0)
    ctx->pc = 0x19cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x19cfa4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x19cfa8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19cfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19cfac: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x19CFACu;
    {
        const bool branch_taken_0x19cfac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cfac) {
            ctx->pc = 0x19CFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CFACu;
            // 0x19cfb0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CFDCu;
            goto label_19cfdc;
        }
    }
    ctx->pc = 0x19CFB4u;
    // 0x19cfb4: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x19cfb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x19cfb8: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x19cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x19cfbc: 0xa60301bc  sh          $v1, 0x1BC($s0)
    ctx->pc = 0x19cfbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 3));
    // 0x19cfc0: 0x860301c4  lh          $v1, 0x1C4($s0)
    ctx->pc = 0x19cfc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x19cfc4: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x19cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x19cfc8: 0xa60301c4  sh          $v1, 0x1C4($s0)
    ctx->pc = 0x19cfc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 452), (uint16_t)GPR_U32(ctx, 3));
    // 0x19cfcc: 0x860301dc  lh          $v1, 0x1DC($s0)
    ctx->pc = 0x19cfccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x19cfd0: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x19cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x19cfd4: 0xa60301dc  sh          $v1, 0x1DC($s0)
    ctx->pc = 0x19cfd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 476), (uint16_t)GPR_U32(ctx, 3));
    // 0x19cfd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19cfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19cfdc:
    // 0x19cfdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cfdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cfe0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFE0u;
        // 0x19cfe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CFE8u;
    // 0x19cfe8: 0x0  nop
    ctx->pc = 0x19cfe8u;
    // NOP
    // 0x19cfec: 0x0  nop
    ctx->pc = 0x19cfecu;
    // NOP
    // 0x19cff0: 0xa08000f7  sb          $zero, 0xF7($a0)
    ctx->pc = 0x19cff0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 247), (uint8_t)GPR_U32(ctx, 0));
    // 0x19cff4: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x19cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19cff8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x19cff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x19cffc: 0x3e00008  jr          $ra
    ctx->pc = 0x19CFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFFCu;
        // 0x19d000: 0xac830498  sw          $v1, 0x498($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D004u;
    // 0x19d004: 0x0  nop
    ctx->pc = 0x19d004u;
    // NOP
    // 0x19d008: 0x0  nop
    ctx->pc = 0x19d008u;
    // NOP
    // 0x19d00c: 0x0  nop
    ctx->pc = 0x19d00cu;
    // NOP
    // 0x19d010: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19d010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19d014: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19d014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d018: 0x24050243  addiu       $a1, $zero, 0x243
    ctx->pc = 0x19d018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
    // 0x19d01c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d020: 0x240301e0  addiu       $v1, $zero, 0x1E0
    ctx->pc = 0x19d020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x19d024: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19d024u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19d028: 0x3e00008  jr          $ra
    ctx->pc = 0x19D028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D028u;
        // 0x19d02c: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D030u;
    // 0x19d030: 0x2484028c  addiu       $a0, $a0, 0x28C
    ctx->pc = 0x19d030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 652));
    // 0x19d034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19d034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d038: 0x804bbe8  j           func_12EFA0
    ctx->pc = 0x19D038u;
    ctx->pc = 0x19D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D038u;
    // 0x19d03c: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    sub_0012EFA0_0x12efa0(rdram, ctx, runtime); return;
    ctx->pc = 0x19D040u;
    // 0x19d040: 0x3e00008  jr          $ra
    ctx->pc = 0x19D040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D048u;
    // 0x19d048: 0x0  nop
    ctx->pc = 0x19d048u;
    // NOP
    // 0x19d04c: 0x0  nop
    ctx->pc = 0x19d04cu;
    // NOP
    // 0x19d050: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19d050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19d054: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19d054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d058: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x19d058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19d05c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d060: 0xa4650100  sh          $a1, 0x100($v1)
    ctx->pc = 0x19d060u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19d064: 0x3e00008  jr          $ra
    ctx->pc = 0x19D064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D064u;
        // 0x19d068: 0xa4600104  sh          $zero, 0x104($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 260), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D06Cu;
    // 0x19d06c: 0x0  nop
    ctx->pc = 0x19d06cu;
    // NOP
    // 0x19d070: 0x2484028c  addiu       $a0, $a0, 0x28C
    ctx->pc = 0x19d070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 652));
    // 0x19d074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19d074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d078: 0x804bbe8  j           func_12EFA0
    ctx->pc = 0x19D078u;
    ctx->pc = 0x19D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D078u;
    // 0x19d07c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    sub_0012EFA0_0x12efa0(rdram, ctx, runtime); return;
    ctx->pc = 0x19D080u;
    // 0x19d080: 0x3e00008  jr          $ra
    ctx->pc = 0x19D080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D088u;
    // 0x19d088: 0x0  nop
    ctx->pc = 0x19d088u;
    // NOP
    // 0x19d08c: 0x0  nop
    ctx->pc = 0x19d08cu;
    // NOP
    // 0x19d090: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19d090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19d094: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x19d094u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d098: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x19d098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19d09c: 0x24030203  addiu       $v1, $zero, 0x203
    ctx->pc = 0x19d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x19d0a0: 0xa4c30100  sh          $v1, 0x100($a2)
    ctx->pc = 0x19d0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 256), (uint16_t)GPR_U32(ctx, 3));
    // 0x19d0a4: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x19d0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x19d0a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d0ac: 0xa4c50104  sh          $a1, 0x104($a2)
    ctx->pc = 0x19d0acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 260), (uint16_t)GPR_U32(ctx, 5));
    // 0x19d0b0: 0xa08300f7  sb          $v1, 0xF7($a0)
    ctx->pc = 0x19d0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 247), (uint8_t)GPR_U32(ctx, 3));
    // 0x19d0b4: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x19d0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19d0b8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x19d0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x19d0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19D0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0BCu;
        // 0x19d0c0: 0xac830498  sw          $v1, 0x498($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D0C4u;
    // 0x19d0c4: 0x0  nop
    ctx->pc = 0x19d0c4u;
    // NOP
    // 0x19d0c8: 0x0  nop
    ctx->pc = 0x19d0c8u;
    // NOP
    // 0x19d0cc: 0x0  nop
    ctx->pc = 0x19d0ccu;
    // NOP
    // 0x19d0d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d0d4: 0xa08300f7  sb          $v1, 0xF7($a0)
    ctx->pc = 0x19d0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 247), (uint8_t)GPR_U32(ctx, 3));
    // 0x19d0d8: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x19d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19d0dc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x19d0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x19d0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0E0u;
        // 0x19d0e4: 0xac830498  sw          $v1, 0x498($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D0E8u;
    // 0x19d0e8: 0x0  nop
    ctx->pc = 0x19d0e8u;
    // NOP
    // 0x19d0ec: 0x0  nop
    ctx->pc = 0x19d0ecu;
    // NOP
    // 0x19d0f0: 0xa08000f7  sb          $zero, 0xF7($a0)
    ctx->pc = 0x19d0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 247), (uint8_t)GPR_U32(ctx, 0));
    // 0x19d0f4: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x19d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x19d0f8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x19d0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x19d0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x19D0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0FCu;
        // 0x19d100: 0xac830498  sw          $v1, 0x498($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D104u;
    // 0x19d104: 0x0  nop
    ctx->pc = 0x19d104u;
    // NOP
    // 0x19d108: 0x0  nop
    ctx->pc = 0x19d108u;
    // NOP
    // 0x19d10c: 0x0  nop
    ctx->pc = 0x19d10cu;
    // NOP
    // 0x19d110: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19d110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19d114: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19d114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d118: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x19d118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x19d11c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19d11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d120: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x19d120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x19d124: 0xa4850100  sh          $a1, 0x100($a0)
    ctx->pc = 0x19d124u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19d128: 0x3e00008  jr          $ra
    ctx->pc = 0x19D128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D128u;
        // 0x19d12c: 0xa4830104  sh          $v1, 0x104($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D130u;
    // 0x19d130: 0x8c85049c  lw          $a1, 0x49C($a0)
    ctx->pc = 0x19d130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x19d134: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x19d134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x19d138: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x19d138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x19d13c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D13Cu;
        // 0x19d140: 0xac83049c  sw          $v1, 0x49C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D144u;
    // 0x19d144: 0x0  nop
    ctx->pc = 0x19d144u;
    // NOP
    // 0x19d148: 0x0  nop
    ctx->pc = 0x19d148u;
    // NOP
    // 0x19d14c: 0x0  nop
    ctx->pc = 0x19d14cu;
    // NOP
    // 0x19d150: 0x3e00008  jr          $ra
    ctx->pc = 0x19D150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D158u;
    // 0x19d158: 0x0  nop
    ctx->pc = 0x19d158u;
    // NOP
    // 0x19d15c: 0x0  nop
    ctx->pc = 0x19d15cu;
    // NOP
    // 0x19d160: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x19d160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19d164: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19d164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d168: 0x240502c0  addiu       $a1, $zero, 0x2C0
    ctx->pc = 0x19d168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x19d16c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d170: 0xa4650100  sh          $a1, 0x100($v1)
    ctx->pc = 0x19d170u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 5));
    // 0x19d174: 0x3e00008  jr          $ra
    ctx->pc = 0x19D174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D174u;
        // 0x19d178: 0xa4600104  sh          $zero, 0x104($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 260), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D17Cu;
    // 0x19d17c: 0x0  nop
    ctx->pc = 0x19d17cu;
    // NOP
    // 0x19d180: 0x908300fc  lbu         $v1, 0xFC($a0)
    ctx->pc = 0x19d180u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x19d184: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x19d184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x19d188: 0x3e00008  jr          $ra
    ctx->pc = 0x19D188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D188u;
        // 0x19d18c: 0xa08300fc  sb          $v1, 0xFC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 252), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D190u;
    // 0x19d190: 0x3e00008  jr          $ra
    ctx->pc = 0x19D190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D198u;
    // 0x19d198: 0x0  nop
    ctx->pc = 0x19d198u;
    // NOP
    // 0x19d19c: 0x0  nop
    ctx->pc = 0x19d19cu;
    // NOP
}
