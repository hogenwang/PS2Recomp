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

// Function: sub_0018EA60
// Address: 0x18ea60 - 0x18ec60
void sub_0018EA60_0x18ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EA60_0x18ea60");
#endif

    switch (ctx->pc) {
        case 0x18ea80u: goto label_18ea80;
        case 0x18eac8u: goto label_18eac8;
        case 0x18eae0u: goto label_18eae0;
        case 0x18eb20u: goto label_18eb20;
        case 0x18eb60u: goto label_18eb60;
        case 0x18eb94u: goto label_18eb94;
        case 0x18eba4u: goto label_18eba4;
        case 0x18ebd4u: goto label_18ebd4;
        case 0x18ec08u: goto label_18ec08;
        case 0x18ec18u: goto label_18ec18;
        case 0x18ec24u: goto label_18ec24;
        default: break;
    }

    ctx->pc = 0x18ea60u;

    // 0x18ea60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18ea64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18ea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18ea68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18ea6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ea6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ea70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18ea70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ea74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ea78: 0xc0639e8  jal         func_18E7A0
    ctx->pc = 0x18EA78u;
    SET_GPR_U32(ctx, 31, 0x18EA80u);
    ctx->pc = 0x18EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA78u;
    // 0x18ea7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E7A0u, 0x18EA78u, 0x18EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA80u;
label_18ea80:
    // 0x18ea80: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18ea84: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x18ea84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ea88: 0x3271ffff  andi        $s1, $s3, 0xFFFF
    ctx->pc = 0x18ea88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x18ea8c: 0x2463bcc0  addiu       $v1, $v1, -0x4340
    ctx->pc = 0x18ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950080));
    // 0x18ea90: 0x718021  addu        $s0, $v1, $s1
    ctx->pc = 0x18ea90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18ea94: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18ea98: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18ea98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18ea9c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EA9Cu;
    {
        const bool branch_taken_0x18ea9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18ea9c) {
            ctx->pc = 0x18EAACu;
            goto label_18eaac;
        }
    }
    ctx->pc = 0x18EAA4u;
    // 0x18eaa4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x18EAA4u;
    {
        const bool branch_taken_0x18eaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAA4u;
        // 0x18eaa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eaa4) {
            ctx->pc = 0x18EC40u;
            goto label_18ec40;
        }
    }
    ctx->pc = 0x18EAACu;
label_18eaac:
    // 0x18eaac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18eab0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18eab4: 0x2442bc40  addiu       $v0, $v0, -0x43C0
    ctx->pc = 0x18eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949952));
    // 0x18eab8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18eab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eabc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18eac0: 0xc0cb404  jal         func_32D010
    ctx->pc = 0x18EAC0u;
    SET_GPR_U32(ctx, 31, 0x18EAC8u);
    ctx->pc = 0x18EAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EAC0u;
    // 0x18eac4: 0xa0520000  sb          $s2, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D010u, 0x18EAC0u, 0x18EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAC8u;
label_18eac8:
    // 0x18eac8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x18eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x18eacc: 0x5622000f  bnel        $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18EACCu;
    {
        const bool branch_taken_0x18eacc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x18eacc) {
            ctx->pc = 0x18EAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EACCu;
            // 0x18ead0: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EB0Cu;
            goto label_18eb0c;
        }
    }
    ctx->pc = 0x18EAD4u;
    // 0x18ead4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18ead4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18ead8: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x18EAD8u;
    SET_GPR_U32(ctx, 31, 0x18EAE0u);
    ctx->pc = 0x18EADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EAD8u;
    // 0x18eadc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x18EAD8u, 0x18EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAE0u;
label_18eae0:
    // 0x18eae0: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x18eae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x18eae4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18eae8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18eaec: 0x2463bdc8  addiu       $v1, $v1, -0x4238
    ctx->pc = 0x18eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950344));
    // 0x18eaf0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18eaf4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x18eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18eaf8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18eafc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18eb00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18eb04: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x18EB04u;
    {
        const bool branch_taken_0x18eb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB04u;
        // 0x18eb08: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb04) {
            ctx->pc = 0x18EC18u;
            goto label_18ec18;
        }
    }
    ctx->pc = 0x18EB0Cu;
label_18eb0c:
    // 0x18eb0c: 0x5622000f  bnel        $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18EB0Cu;
    {
        const bool branch_taken_0x18eb0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x18eb0c) {
            ctx->pc = 0x18EB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EB0Cu;
            // 0x18eb10: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EB4Cu;
            goto label_18eb4c;
        }
    }
    ctx->pc = 0x18EB14u;
    // 0x18eb14: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18eb18: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x18EB18u;
    SET_GPR_U32(ctx, 31, 0x18EB20u);
    ctx->pc = 0x18EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB18u;
    // 0x18eb1c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x18EB18u, 0x18EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB20u;
label_18eb20:
    // 0x18eb20: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x18eb20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x18eb24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18eb28: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18eb2c: 0x2463bdc8  addiu       $v1, $v1, -0x4238
    ctx->pc = 0x18eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950344));
    // 0x18eb30: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18eb34: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x18eb34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18eb38: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18eb3c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18eb40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18eb44: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x18EB44u;
    {
        const bool branch_taken_0x18eb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB44u;
        // 0x18eb48: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb44) {
            ctx->pc = 0x18EC18u;
            goto label_18ec18;
        }
    }
    ctx->pc = 0x18EB4Cu;
label_18eb4c:
    // 0x18eb4c: 0x5622000f  bnel        $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18EB4Cu;
    {
        const bool branch_taken_0x18eb4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x18eb4c) {
            ctx->pc = 0x18EB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EB4Cu;
            // 0x18eb50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EB8Cu;
            goto label_18eb8c;
        }
    }
    ctx->pc = 0x18EB54u;
    // 0x18eb54: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18eb58: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x18EB58u;
    SET_GPR_U32(ctx, 31, 0x18EB60u);
    ctx->pc = 0x18EB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB58u;
    // 0x18eb5c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x18EB58u, 0x18EB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB60u;
label_18eb60:
    // 0x18eb60: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x18eb60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x18eb64: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18eb68: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18eb6c: 0x2463bdc8  addiu       $v1, $v1, -0x4238
    ctx->pc = 0x18eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950344));
    // 0x18eb70: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18eb74: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x18eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18eb78: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18eb7c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18eb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18eb80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18eb84: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x18EB84u;
    {
        const bool branch_taken_0x18eb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB84u;
        // 0x18eb88: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb84) {
            ctx->pc = 0x18EC18u;
            goto label_18ec18;
        }
    }
    ctx->pc = 0x18EB8Cu;
label_18eb8c:
    // 0x18eb8c: 0xc0cb4a8  jal         func_32D2A0
    ctx->pc = 0x18EB8Cu;
    SET_GPR_U32(ctx, 31, 0x18EB94u);
    ctx->pc = 0x32D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D2A0u, 0x18EB8Cu, 0x18EB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB94u;
label_18eb94:
    // 0x18eb94: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x18EB94u;
    {
        const bool branch_taken_0x18eb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb94) {
            ctx->pc = 0x18EB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EB94u;
            // 0x18eb98: 0x324600ff  andi        $a2, $s2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EBDCu;
            goto label_18ebdc;
        }
    }
    ctx->pc = 0x18EB9Cu;
    // 0x18eb9c: 0xc0693a0  jal         func_1A4E80
    ctx->pc = 0x18EB9Cu;
    SET_GPR_U32(ctx, 31, 0x18EBA4u);
    ctx->pc = 0x18EBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB9Cu;
    // 0x18eba0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E80u, 0x18EB9Cu, 0x18EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EBA4u;
label_18eba4:
    // 0x18eba4: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x18eba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x18eba8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18ebac: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x18ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18ebb0: 0x2463bdc8  addiu       $v1, $v1, -0x4238
    ctx->pc = 0x18ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950344));
    // 0x18ebb4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18ebb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18ebb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18ebb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ebbc: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x18ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18ebc0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18ebc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18ebc4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x18ebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18ebc8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18ebcc: 0xc0cb4c0  jal         func_32D300
    ctx->pc = 0x18EBCCu;
    SET_GPR_U32(ctx, 31, 0x18EBD4u);
    ctx->pc = 0x18EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EBCCu;
    // 0x18ebd0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D300u, 0x18EBCCu, 0x18EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EBD4u;
label_18ebd4:
    // 0x18ebd4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18EBD4u;
    {
        const bool branch_taken_0x18ebd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBD4u;
        // 0x18ebd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebd4) {
            ctx->pc = 0x18EC1Cu;
            goto label_18ec1c;
        }
    }
    ctx->pc = 0x18EBDCu;
label_18ebdc:
    // 0x18ebdc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18ebe0: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x18ebe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18ebe4: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x18ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x18ebe8: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x18ebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18ebec: 0x2463bdc8  addiu       $v1, $v1, -0x4238
    ctx->pc = 0x18ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950344));
    // 0x18ebf0: 0x34443800  ori         $a0, $v0, 0x3800
    ctx->pc = 0x18ebf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
    // 0x18ebf4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x18ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18ebf8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x18ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18ebfc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18ec00: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x18EC00u;
    SET_GPR_U32(ctx, 31, 0x18EC08u);
    ctx->pc = 0x18EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC00u;
    // 0x18ec04: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B80u, 0x18EC00u, 0x18EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC08u;
label_18ec08:
    // 0x18ec08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18ec0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ec0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec10: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x18EC10u;
    SET_GPR_U32(ctx, 31, 0x18EC18u);
    ctx->pc = 0x18EC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC10u;
    // 0x18ec14: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB0u, 0x18EC10u, 0x18EC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC18u;
label_18ec18:
    // 0x18ec18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18ec18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18ec1c:
    // 0x18ec1c: 0xc063b18  jal         func_18EC60
    ctx->pc = 0x18EC1Cu;
    SET_GPR_U32(ctx, 31, 0x18EC24u);
    ctx->pc = 0x18EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC1Cu;
    // 0x18ec20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC60u, 0x18EC1Cu, 0x18EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC24u;
label_18ec24:
    // 0x18ec24: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18ec28: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18ec2c: 0x9044bd40  lbu         $a0, -0x42C0($v0)
    ctx->pc = 0x18ec2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950208)));
    // 0x18ec30: 0xa2120000  sb          $s2, 0x0($s0)
    ctx->pc = 0x18ec30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x18ec34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18ec34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18ec38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ec3c: 0xa064bd40  sb          $a0, -0x42C0($v1)
    ctx->pc = 0x18ec3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950208), (uint8_t)GPR_U32(ctx, 4));
label_18ec40:
    // 0x18ec40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18ec40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ec44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ec44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ec48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ec48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ec4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ec4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ec50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ec50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ec54: 0x3e00008  jr          $ra
    ctx->pc = 0x18EC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC54u;
        // 0x18ec58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EC5Cu;
    // 0x18ec5c: 0x0  nop
    ctx->pc = 0x18ec5cu;
    // NOP
    if (ctx->pc == 0x18ec5cu) { ctx->pc = 0x18ec60u; }
}
