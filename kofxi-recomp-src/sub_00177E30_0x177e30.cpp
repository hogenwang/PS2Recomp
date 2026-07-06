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

// Function: sub_00177E30
// Address: 0x177e30 - 0x177f10
void sub_00177E30_0x177e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177E30_0x177e30");
#endif

    switch (ctx->pc) {
        case 0x177ec8u: goto label_177ec8;
        default: break;
    }

    ctx->pc = 0x177e30u;

    // 0x177e30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x177e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x177e34: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177e38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x177e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x177e3c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x177e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x177e40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x177e44: 0x2442acf0  addiu       $v0, $v0, -0x5310
    ctx->pc = 0x177e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946032));
    // 0x177e48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x177e4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x177e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x177e50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177e54: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x177e54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177e58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177E58u;
    {
        const bool branch_taken_0x177e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E58u;
        // 0x177e5c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e58) {
            ctx->pc = 0x177E68u;
            goto label_177e68;
        }
    }
    ctx->pc = 0x177E60u;
    // 0x177e60: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x177E60u;
    {
        const bool branch_taken_0x177e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E60u;
        // 0x177e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e60) {
            ctx->pc = 0x177EECu;
            goto label_177eec;
        }
    }
    ctx->pc = 0x177E68u;
label_177e68:
    // 0x177e68: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x177e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x177e6c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177e70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x177e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x177e74: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x177e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
    // 0x177e78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x177e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x177e7c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x177e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177e80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x177e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x177e84: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x177E84u;
    {
        const bool branch_taken_0x177e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177e84) {
            ctx->pc = 0x177E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177E84u;
            // 0x177e88: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177EE8u;
            goto label_177ee8;
        }
    }
    ctx->pc = 0x177E8Cu;
    // 0x177e8c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177e90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x177e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x177e94: 0x2442a580  addiu       $v0, $v0, -0x5A80
    ctx->pc = 0x177e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944128));
    // 0x177e98: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177e9c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x177e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177ea0: 0x2484ad78  addiu       $a0, $a0, -0x5288
    ctx->pc = 0x177ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
    // 0x177ea4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x177ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177ea8: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x177ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x177eac: 0x92050014  lbu         $a1, 0x14($s0)
    ctx->pc = 0x177eacu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x177eb0: 0x92030015  lbu         $v1, 0x15($s0)
    ctx->pc = 0x177eb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x177eb4: 0xa39018  mult        $s2, $a1, $v1
    ctx->pc = 0x177eb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x177eb8: 0xd21818  mult        $v1, $a2, $s2
    ctx->pc = 0x177eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x177ebc: 0x2463001f  addiu       $v1, $v1, 0x1F
    ctx->pc = 0x177ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x177ec0: 0xc06949c  jal         func_1A5270
    ctx->pc = 0x177EC0u;
    SET_GPR_U32(ctx, 31, 0x177EC8u);
    ctx->pc = 0x177EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177EC0u;
    // 0x177ec4: 0x622824  and         $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5270u, 0x177EC0u, 0x177EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177EC8u;
label_177ec8:
    // 0x177ec8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x177EC8u;
    {
        const bool branch_taken_0x177ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177ec8) {
            ctx->pc = 0x177ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177EC8u;
            // 0x177ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177EECu;
            goto label_177eec;
        }
    }
    ctx->pc = 0x177ED0u;
    // 0x177ed0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x177ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x177ed4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x177ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x177ed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177edc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x177edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177ee0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177EE0u;
    {
        const bool branch_taken_0x177ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EE0u;
        // 0x177ee4: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ee0) {
            ctx->pc = 0x177EECu;
            goto label_177eec;
        }
    }
    ctx->pc = 0x177EE8u;
label_177ee8:
    // 0x177ee8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x177ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_177eec:
    // 0x177eec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x177eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177ef0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177ef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177ef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177efc: 0x3e00008  jr          $ra
    ctx->pc = 0x177EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EFCu;
        // 0x177f00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177F04u;
    // 0x177f04: 0x0  nop
    ctx->pc = 0x177f04u;
    // NOP
    // 0x177f08: 0x0  nop
    ctx->pc = 0x177f08u;
    // NOP
    // 0x177f0c: 0x0  nop
    ctx->pc = 0x177f0cu;
    // NOP
    if (ctx->pc == 0x177f0cu) { ctx->pc = 0x177f10u; }
}
