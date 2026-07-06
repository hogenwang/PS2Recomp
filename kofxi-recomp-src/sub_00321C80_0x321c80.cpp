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

// Function: sub_00321C80
// Address: 0x321c80 - 0x321ec0
void sub_00321C80_0x321c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321C80_0x321c80");
#endif

    switch (ctx->pc) {
        case 0x321d50u: goto label_321d50;
        case 0x321e40u: goto label_321e40;
        default: break;
    }

    ctx->pc = 0x321c80u;

    // 0x321c80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x321c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x321c84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x321c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x321c88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x321c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x321c8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x321c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x321c90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x321c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321c94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x321c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x321c98: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x321c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x321c9c: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x321c9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x321ca0: 0x30850003  andi        $a1, $a0, 0x3
    ctx->pc = 0x321ca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x321ca4: 0x30632400  andi        $v1, $v1, 0x2400
    ctx->pc = 0x321ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)9216);
    // 0x321ca8: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x321ca8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x321cac: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x321cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x321cb0: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x321cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x321cb4: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x321CB4u;
    {
        const bool branch_taken_0x321cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x321CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CB4u;
        // 0x321cb8: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321cb4) {
            ctx->pc = 0x321EA0u;
            goto label_321ea0;
        }
    }
    ctx->pc = 0x321CBCu;
    // 0x321cbc: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x321cbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x321cc0: 0x32060002  andi        $a2, $s0, 0x2
    ctx->pc = 0x321cc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x321cc4: 0x50c00009  beql        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x321CC4u;
    {
        const bool branch_taken_0x321cc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x321cc4) {
            ctx->pc = 0x321CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321CC4u;
            // 0x321cc8: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321CECu;
            goto label_321cec;
        }
    }
    ctx->pc = 0x321CCCu;
    // 0x321ccc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x321cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x321cd0: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x321cd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x321cd4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x321cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x321cd8: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x321cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x321cdc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x321cdcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x321ce0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x321ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321ce4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x321CE4u;
    {
        const bool branch_taken_0x321ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CE4u;
        // 0x321ce8: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ce4) {
            ctx->pc = 0x321D04u;
            goto label_321d04;
        }
    }
    ctx->pc = 0x321CECu;
label_321cec:
    // 0x321cec: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x321cecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x321cf0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x321cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x321cf4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x321cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x321cf8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x321cf8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x321cfc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x321cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321d00: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x321d00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
label_321d04:
    // 0x321d04: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x321d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x321d08: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x321d08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x321d0c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x321d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x321d10: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x321d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x321d14: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x321D14u;
    {
        const bool branch_taken_0x321d14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D14u;
        // 0x321d18: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d14) {
            ctx->pc = 0x321D2Cu;
            goto label_321d2c;
        }
    }
    ctx->pc = 0x321D1Cu;
    // 0x321d1c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x321d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x321d20: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x321d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x321d24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x321D24u;
    {
        const bool branch_taken_0x321d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D24u;
        // 0x321d28: 0xa38821  addu        $s1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d24) {
            ctx->pc = 0x321D38u;
            goto label_321d38;
        }
    }
    ctx->pc = 0x321D2Cu;
label_321d2c:
    // 0x321d2c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x321d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x321d30: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x321d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x321d34: 0xa38823  subu        $s1, $a1, $v1
    ctx->pc = 0x321d34u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_321d38:
    // 0x321d38: 0x92450020  lbu         $a1, 0x20($s2)
    ctx->pc = 0x321d38u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x321d3c: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x321d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x321d40: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x321D40u;
    {
        const bool branch_taken_0x321d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321d40) {
            ctx->pc = 0x321D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321D40u;
            // 0x321d44: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x321D58u;
            goto label_321d58;
        }
    }
    ctx->pc = 0x321D48u;
    // 0x321d48: 0xc058404  jal         func_161010
    ctx->pc = 0x321D48u;
    SET_GPR_U32(ctx, 31, 0x321D50u);
    ctx->pc = 0x321D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D48u;
    // 0x321d4c: 0x8e450024  lw          $a1, 0x24($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161010u, 0x321D48u, 0x321D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D50u;
label_321d50:
    // 0x321d50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x321D50u;
    {
        const bool branch_taken_0x321d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D50u;
        // 0x321d54: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d50) {
            ctx->pc = 0x321D70u;
            goto label_321d70;
        }
    }
    ctx->pc = 0x321D58u;
label_321d58:
    // 0x321d58: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x321D58u;
    {
        const bool branch_taken_0x321d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321d58) {
            ctx->pc = 0x321D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321D58u;
            // 0x321d5c: 0x3223ffff  andi        $v1, $s1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x321D74u;
            goto label_321d74;
        }
    }
    ctx->pc = 0x321D60u;
    // 0x321d60: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x321d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x321d64: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x321d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x321d68: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x321d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x321d6c: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x321d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_321d70:
    // 0x321d70: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x321d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_321d74:
    // 0x321d74: 0x6230005  bgezl       $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x321D74u;
    {
        const bool branch_taken_0x321d74 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x321d74) {
            ctx->pc = 0x321D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321D74u;
            // 0x321d78: 0xae430038  sw          $v1, 0x38($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321D8Cu;
            goto label_321d8c;
        }
    }
    ctx->pc = 0x321D7Cu;
    // 0x321d7c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x321D7Cu;
    {
        const bool branch_taken_0x321d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321d7c) {
            ctx->pc = 0x321D88u;
            goto label_321d88;
        }
    }
    ctx->pc = 0x321D84u;
    // 0x321d84: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x321d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_321d88:
    // 0x321d88: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x321d88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
label_321d8c:
    // 0x321d8c: 0x1127c2  srl         $a0, $s1, 31
    ctx->pc = 0x321d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x321d90: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x321d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x321d94: 0x32060001  andi        $a2, $s0, 0x1
    ctx->pc = 0x321d94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x321d98: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x321d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x321d9c: 0x710018  mult        $zero, $v1, $s1
    ctx->pc = 0x321d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x321da0: 0x1810  mfhi        $v1
    ctx->pc = 0x321da0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x321da4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x321da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x321da8: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x321da8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x321dac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x321dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321db0: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x321DB0u;
    {
        const bool branch_taken_0x321db0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x321DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DB0u;
        // 0x321db4: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321db0) {
            ctx->pc = 0x321DD8u;
            goto label_321dd8;
        }
    }
    ctx->pc = 0x321DB8u;
    // 0x321db8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x321db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x321dbc: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x321dbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x321dc0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x321dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x321dc4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x321dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x321dc8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x321dc8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x321dcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x321dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321dd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x321DD0u;
    {
        const bool branch_taken_0x321dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DD0u;
        // 0x321dd4: 0xa6430002  sh          $v1, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321dd0) {
            ctx->pc = 0x321DF4u;
            goto label_321df4;
        }
    }
    ctx->pc = 0x321DD8u;
label_321dd8:
    // 0x321dd8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x321dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x321ddc: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x321ddcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x321de0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x321de0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x321de4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x321de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x321de8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x321de8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x321dec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x321decu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321df0: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x321df0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_321df4:
    // 0x321df4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x321df4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x321df8: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x321df8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x321dfc: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x321dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x321e00: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x321e00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x321e04: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x321E04u;
    {
        const bool branch_taken_0x321e04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x321E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E04u;
        // 0x321e08: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e04) {
            ctx->pc = 0x321E1Cu;
            goto label_321e1c;
        }
    }
    ctx->pc = 0x321E0Cu;
    // 0x321e0c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x321e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x321e10: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x321e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x321e14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x321E14u;
    {
        const bool branch_taken_0x321e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E14u;
        // 0x321e18: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e14) {
            ctx->pc = 0x321E28u;
            goto label_321e28;
        }
    }
    ctx->pc = 0x321E1Cu;
label_321e1c:
    // 0x321e1c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x321e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x321e20: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x321e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x321e24: 0xa38023  subu        $s0, $a1, $v1
    ctx->pc = 0x321e24u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_321e28:
    // 0x321e28: 0x92450021  lbu         $a1, 0x21($s2)
    ctx->pc = 0x321e28u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
    // 0x321e2c: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x321e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x321e30: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x321E30u;
    {
        const bool branch_taken_0x321e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321e30) {
            ctx->pc = 0x321E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321E30u;
            // 0x321e34: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x321E48u;
            goto label_321e48;
        }
    }
    ctx->pc = 0x321E38u;
    // 0x321e38: 0xc058404  jal         func_161010
    ctx->pc = 0x321E38u;
    SET_GPR_U32(ctx, 31, 0x321E40u);
    ctx->pc = 0x321E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E38u;
    // 0x321e3c: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161010u, 0x321E38u, 0x321E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E40u;
label_321e40:
    // 0x321e40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x321E40u;
    {
        const bool branch_taken_0x321e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E40u;
        // 0x321e44: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e40) {
            ctx->pc = 0x321E60u;
            goto label_321e60;
        }
    }
    ctx->pc = 0x321E48u;
label_321e48:
    // 0x321e48: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x321E48u;
    {
        const bool branch_taken_0x321e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321e48) {
            ctx->pc = 0x321E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321E48u;
            // 0x321e4c: 0x3203ffff  andi        $v1, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x321E64u;
            goto label_321e64;
        }
    }
    ctx->pc = 0x321E50u;
    // 0x321e50: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x321e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x321e54: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x321e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x321e58: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x321e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x321e5c: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x321e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_321e60:
    // 0x321e60: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x321e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_321e64:
    // 0x321e64: 0x6030005  bgezl       $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x321E64u;
    {
        const bool branch_taken_0x321e64 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x321e64) {
            ctx->pc = 0x321E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321E64u;
            // 0x321e68: 0xae43003c  sw          $v1, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321E7Cu;
            goto label_321e7c;
        }
    }
    ctx->pc = 0x321E6Cu;
    // 0x321e6c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x321E6Cu;
    {
        const bool branch_taken_0x321e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321e6c) {
            ctx->pc = 0x321E78u;
            goto label_321e78;
        }
    }
    ctx->pc = 0x321E74u;
    // 0x321e74: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x321e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_321e78:
    // 0x321e78: 0xae43003c  sw          $v1, 0x3C($s2)
    ctx->pc = 0x321e78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
label_321e7c:
    // 0x321e7c: 0x1027c2  srl         $a0, $s0, 31
    ctx->pc = 0x321e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x321e80: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x321e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x321e84: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x321e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x321e88: 0x700018  mult        $zero, $v1, $s0
    ctx->pc = 0x321e88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x321e8c: 0x1810  mfhi        $v1
    ctx->pc = 0x321e8cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x321e90: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x321e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x321e94: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x321e94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x321e98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x321e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321e9c: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x321e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_321ea0:
    // 0x321ea0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x321ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321ea4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x321ea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321ea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x321ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321eac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x321eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x321EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EB0u;
        // 0x321eb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321EB8u;
    // 0x321eb8: 0x0  nop
    ctx->pc = 0x321eb8u;
    // NOP
    // 0x321ebc: 0x0  nop
    ctx->pc = 0x321ebcu;
    // NOP
    if (ctx->pc == 0x321ebcu) { ctx->pc = 0x321ec0u; }
}
