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

// Function: sub_00186E70
// Address: 0x186e70 - 0x187000
void sub_00186E70_0x186e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186E70_0x186e70");
#endif

    switch (ctx->pc) {
        case 0x186f14u: goto label_186f14;
        case 0x186f1cu: goto label_186f1c;
        case 0x186f24u: goto label_186f24;
        case 0x186fa8u: goto label_186fa8;
        case 0x186fb0u: goto label_186fb0;
        case 0x186fb8u: goto label_186fb8;
        default: break;
    }

    ctx->pc = 0x186e70u;

    // 0x186e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186e74: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x186e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x186e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186e7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x186e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x186e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186e84: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x186e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x186e88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x186e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x186e90: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x186e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x186e94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186E94u;
    {
        const bool branch_taken_0x186e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E94u;
        // 0x186e98: 0xac830498  sw          $v1, 0x498($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e94) {
            ctx->pc = 0x186EA8u;
            goto label_186ea8;
        }
    }
    ctx->pc = 0x186E9Cu;
    // 0x186e9c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x186e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x186ea0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x186ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x186ea4: 0xae020498  sw          $v0, 0x498($s0)
    ctx->pc = 0x186ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 2));
label_186ea8:
    // 0x186ea8: 0x8e070498  lw          $a3, 0x498($s0)
    ctx->pc = 0x186ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x186eac: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x186eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x186eb0: 0x3c02ff7b  lui         $v0, 0xFF7B
    ctx->pc = 0x186eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65403 << 16));
    // 0x186eb4: 0x2406ffdf  addiu       $a2, $zero, -0x21
    ctx->pc = 0x186eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x186eb8: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x186eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x186ebc: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x186ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x186ec0: 0x7387c  dsll32      $a3, $a3, 1
    ctx->pc = 0x186ec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 1));
    // 0x186ec4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x186ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x186ec8: 0x7387e  dsrl32      $a3, $a3, 1
    ctx->pc = 0x186ec8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 1));
    // 0x186ecc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x186eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x186ed0: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x186ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x186ed4: 0xae070498  sw          $a3, 0x498($s0)
    ctx->pc = 0x186ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 7));
    // 0x186ed8: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x186ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x186edc: 0xae060498  sw          $a2, 0x498($s0)
    ctx->pc = 0x186edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 6));
    // 0x186ee0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x186ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x186ee4: 0xae050498  sw          $a1, 0x498($s0)
    ctx->pc = 0x186ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 5));
    // 0x186ee8: 0xae040498  sw          $a0, 0x498($s0)
    ctx->pc = 0x186ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 4));
    // 0x186eec: 0x8e05049c  lw          $a1, 0x49C($s0)
    ctx->pc = 0x186eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x186ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ef4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x186ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x186ef8: 0xae03049c  sw          $v1, 0x49C($s0)
    ctx->pc = 0x186ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 3));
    // 0x186efc: 0x96030292  lhu         $v1, 0x292($s0)
    ctx->pc = 0x186efcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 658)));
    // 0x186f00: 0xa6030294  sh          $v1, 0x294($s0)
    ctx->pc = 0x186f00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 660), (uint16_t)GPR_U32(ctx, 3));
    // 0x186f04: 0x8e030494  lw          $v1, 0x494($s0)
    ctx->pc = 0x186f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x186f08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x186f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x186f0c: 0xc061e68  jal         func_1879A0
    ctx->pc = 0x186F0Cu;
    SET_GPR_U32(ctx, 31, 0x186F14u);
    ctx->pc = 0x186F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F0Cu;
    // 0x186f10: 0xae020494  sw          $v0, 0x494($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879A0u, 0x186F0Cu, 0x186F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F14u;
label_186f14:
    // 0x186f14: 0xc061c00  jal         func_187000
    ctx->pc = 0x186F14u;
    SET_GPR_U32(ctx, 31, 0x186F1Cu);
    ctx->pc = 0x186F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F14u;
    // 0x186f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187000u, 0x186F14u, 0x186F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F1Cu;
label_186f1c:
    // 0x186f1c: 0xc061c0c  jal         func_187030
    ctx->pc = 0x186F1Cu;
    SET_GPR_U32(ctx, 31, 0x186F24u);
    ctx->pc = 0x186F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F1Cu;
    // 0x186f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187030u, 0x186F1Cu, 0x186F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F24u;
label_186f24:
    // 0x186f24: 0x8e04049c  lw          $a0, 0x49C($s0)
    ctx->pc = 0x186f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x186f28: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x186f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x186f2c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x186f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x186f30: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x186f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x186f34: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x186f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x186f38: 0xae04049c  sw          $a0, 0x49C($s0)
    ctx->pc = 0x186f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 4));
    // 0x186f3c: 0x8c44d918  lw          $a0, -0x26E8($v0)
    ctx->pc = 0x186f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x186f40: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x186f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x186f44: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x186F44u;
    {
        const bool branch_taken_0x186f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186f44) {
            ctx->pc = 0x186F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186F44u;
            // 0x186f48: 0x8e04049c  lw          $a0, 0x49C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186F6Cu;
            goto label_186f6c;
        }
    }
    ctx->pc = 0x186F4Cu;
    // 0x186f4c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x186f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x186f50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186F50u;
    {
        const bool branch_taken_0x186f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186f50) {
            ctx->pc = 0x186F68u;
            goto label_186f68;
        }
    }
    ctx->pc = 0x186F58u;
    // 0x186f58: 0x8e03049c  lw          $v1, 0x49C($s0)
    ctx->pc = 0x186f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x186f5c: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x186f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x186f60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x186f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x186f64: 0xae02049c  sw          $v0, 0x49C($s0)
    ctx->pc = 0x186f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 2));
label_186f68:
    // 0x186f68: 0x8e04049c  lw          $a0, 0x49C($s0)
    ctx->pc = 0x186f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
label_186f6c:
    // 0x186f6c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x186f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x186f70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x186f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x186f74: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x186f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x186f78: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x186f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x186f7c: 0xae02049c  sw          $v0, 0x49C($s0)
    ctx->pc = 0x186f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 2));
    // 0x186f80: 0x8e020498  lw          $v0, 0x498($s0)
    ctx->pc = 0x186f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x186f84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x186f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x186f88: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x186F88u;
    {
        const bool branch_taken_0x186f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186f88) {
            ctx->pc = 0x186F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186F88u;
            // 0x186f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186FA0u;
            goto label_186fa0;
        }
    }
    ctx->pc = 0x186F90u;
    // 0x186f90: 0x8e02049c  lw          $v0, 0x49C($s0)
    ctx->pc = 0x186f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x186f94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x186f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x186f98: 0xae02049c  sw          $v0, 0x49C($s0)
    ctx->pc = 0x186f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 2));
    // 0x186f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186fa0:
    // 0x186fa0: 0xc062d3c  jal         func_18B4F0
    ctx->pc = 0x186FA0u;
    SET_GPR_U32(ctx, 31, 0x186FA8u);
    ctx->pc = 0x18B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B4F0u, 0x186FA0u, 0x186FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186FA8u;
label_186fa8:
    // 0x186fa8: 0xc052a3c  jal         func_14A8F0
    ctx->pc = 0x186FA8u;
    SET_GPR_U32(ctx, 31, 0x186FB0u);
    ctx->pc = 0x186FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186FA8u;
    // 0x186fac: 0x26040484  addiu       $a0, $s0, 0x484 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A8F0u, 0x186FA8u, 0x186FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186FB0u;
label_186fb0:
    // 0x186fb0: 0xc059654  jal         func_165950
    ctx->pc = 0x186FB0u;
    SET_GPR_U32(ctx, 31, 0x186FB8u);
    ctx->pc = 0x165950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165950u, 0x186FB0u, 0x186FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186FB8u;
label_186fb8:
    // 0x186fb8: 0x8e040270  lw          $a0, 0x270($s0)
    ctx->pc = 0x186fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x186fbc: 0x3c03000d  lui         $v1, 0xD
    ctx->pc = 0x186fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13 << 16));
    // 0x186fc0: 0x3463b600  ori         $v1, $v1, 0xB600
    ctx->pc = 0x186fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46592);
    // 0x186fc4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x186fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x186fc8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x186FC8u;
    {
        const bool branch_taken_0x186fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186fc8) {
            ctx->pc = 0x186FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186FC8u;
            // 0x186fcc: 0x86030502  lh          $v1, 0x502($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1282)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186FE0u;
            goto label_186fe0;
        }
    }
    ctx->pc = 0x186FD0u;
    // 0x186fd0: 0x86030502  lh          $v1, 0x502($s0)
    ctx->pc = 0x186fd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1282)));
    // 0x186fd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x186fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x186fd8: 0xa6030502  sh          $v1, 0x502($s0)
    ctx->pc = 0x186fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1282), (uint16_t)GPR_U32(ctx, 3));
    // 0x186fdc: 0x86030502  lh          $v1, 0x502($s0)
    ctx->pc = 0x186fdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1282)));
label_186fe0:
    // 0x186fe0: 0x5c600003  bgtzl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x186FE0u;
    {
        const bool branch_taken_0x186fe0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x186fe0) {
            ctx->pc = 0x186FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186FE0u;
            // 0x186fe4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186FF0u;
            goto label_186ff0;
        }
    }
    ctx->pc = 0x186FE8u;
    // 0x186fe8: 0xa6000502  sh          $zero, 0x502($s0)
    ctx->pc = 0x186fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1282), (uint16_t)GPR_U32(ctx, 0));
    // 0x186fec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_186ff0:
    // 0x186ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x186FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FF4u;
        // 0x186ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186FFCu;
    // 0x186ffc: 0x0  nop
    ctx->pc = 0x186ffcu;
    // NOP
    if (ctx->pc == 0x186ffcu) { ctx->pc = 0x187000u; }
}
