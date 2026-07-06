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

// Function: sub_00322C00
// Address: 0x322c00 - 0x322e60
void sub_00322C00_0x322c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322C00_0x322c00");
#endif

    switch (ctx->pc) {
        case 0x322d28u: goto label_322d28;
        case 0x322e34u: goto label_322e34;
        default: break;
    }

    ctx->pc = 0x322c00u;

    // 0x322c00: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x322c00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x322c04: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x322c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x322c08: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x322c08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x322c0c: 0x14200092  bnez        $at, . + 4 + (0x92 << 2)
    ctx->pc = 0x322C0Cu;
    {
        const bool branch_taken_0x322c0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x322C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C0Cu;
        // 0x322c10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c0c) {
            ctx->pc = 0x322E58u;
            goto label_322e58;
        }
    }
    ctx->pc = 0x322C14u;
    // 0x322c14: 0x865823  subu        $t3, $a0, $a2
    ctx->pc = 0x322c14u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x322c18: 0x256a0001  addiu       $t2, $t3, 0x1
    ctx->pc = 0x322c18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x322c1c: 0x29410009  slti        $at, $t2, 0x9
    ctx->pc = 0x322c1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x322c20: 0x14200079  bnez        $at, . + 4 + (0x79 << 2)
    ctx->pc = 0x322C20u;
    {
        const bool branch_taken_0x322c20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x322C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C20u;
        // 0x322c24: 0x2483fff8  addiu       $v1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c20) {
            ctx->pc = 0x322E08u;
            goto label_322e08;
        }
    }
    ctx->pc = 0x322C28u;
    // 0x322c28: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x322c28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x322c2c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x322c2cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c30: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x322c30u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x322c34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x322c38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c3c: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x322C3Cu;
    {
        const bool branch_taken_0x322c3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x322C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C3Cu;
        // 0x322c40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c3c) {
            ctx->pc = 0x322C5Cu;
            goto label_322c5c;
        }
    }
    ctx->pc = 0x322C44u;
    // 0x322c44: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x322c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x322c48: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x322c48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x322c4c: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x322c4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x322c50: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x322C50u;
    {
        const bool branch_taken_0x322c50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x322c50) {
            ctx->pc = 0x322C5Cu;
            goto label_322c5c;
        }
    }
    ctx->pc = 0x322C58u;
    // 0x322c58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x322c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322c5c:
    // 0x322c5c: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x322C5Cu;
    {
        const bool branch_taken_0x322c5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x322c5c) {
            ctx->pc = 0x322C7Cu;
            goto label_322c7c;
        }
    }
    ctx->pc = 0x322C64u;
    // 0x322c64: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x322c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x322c68: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x322c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x322c6c: 0xc1082a  slt         $at, $a2, $at
    ctx->pc = 0x322c6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x322c70: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x322C70u;
    {
        const bool branch_taken_0x322c70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x322c70) {
            ctx->pc = 0x322C7Cu;
            goto label_322c7c;
        }
    }
    ctx->pc = 0x322C78u;
    // 0x322c78: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x322c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322c7c:
    // 0x322c7c: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x322C7Cu;
    {
        const bool branch_taken_0x322c7c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x322c7c) {
            ctx->pc = 0x322C94u;
            goto label_322c94;
        }
    }
    ctx->pc = 0x322C84u;
    // 0x322c84: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x322c84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x322c88: 0x10c70002  beq         $a2, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x322C88u;
    {
        const bool branch_taken_0x322c88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x322c88) {
            ctx->pc = 0x322C94u;
            goto label_322c94;
        }
    }
    ctx->pc = 0x322C90u;
    // 0x322c90: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x322c90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322c94:
    // 0x322c94: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x322C94u;
    {
        const bool branch_taken_0x322c94 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x322c94) {
            ctx->pc = 0x322CD0u;
            goto label_322cd0;
        }
    }
    ctx->pc = 0x322C9Cu;
    // 0x322c9c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x322c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x322ca0: 0x63823  negu        $a3, $a2
    ctx->pc = 0x322ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x322ca4: 0x894024  and         $t0, $a0, $t1
    ctx->pc = 0x322ca4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x322ca8: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x322ca8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x322cac: 0x15070005  bne         $t0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x322CACu;
    {
        const bool branch_taken_0x322cac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x322CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CACu;
        // 0x322cb0: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322cac) {
            ctx->pc = 0x322CC4u;
            goto label_322cc4;
        }
    }
    ctx->pc = 0x322CB4u;
    // 0x322cb4: 0x1693824  and         $a3, $t3, $t1
    ctx->pc = 0x322cb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x322cb8: 0x11070002  beq         $t0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x322CB8u;
    {
        const bool branch_taken_0x322cb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x322cb8) {
            ctx->pc = 0x322CC4u;
            goto label_322cc4;
        }
    }
    ctx->pc = 0x322CC0u;
    // 0x322cc0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x322cc0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322cc4:
    // 0x322cc4: 0x11800002  beqz        $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x322CC4u;
    {
        const bool branch_taken_0x322cc4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x322cc4) {
            ctx->pc = 0x322CD0u;
            goto label_322cd0;
        }
    }
    ctx->pc = 0x322CCCu;
    // 0x322ccc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x322cccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322cd0:
    // 0x322cd0: 0x11a0000c  beqz        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x322CD0u;
    {
        const bool branch_taken_0x322cd0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x322cd0) {
            ctx->pc = 0x322D04u;
            goto label_322d04;
        }
    }
    ctx->pc = 0x322CD8u;
    // 0x322cd8: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x322cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x322cdc: 0x1683824  and         $a3, $t3, $t0
    ctx->pc = 0x322cdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & GPR_U64(ctx, 8));
    // 0x322ce0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x322CE0u;
    {
        const bool branch_taken_0x322ce0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x322CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CE0u;
        // 0x322ce4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322ce0) {
            ctx->pc = 0x322CF8u;
            goto label_322cf8;
        }
    }
    ctx->pc = 0x322CE8u;
    // 0x322ce8: 0x1483824  and         $a3, $t2, $t0
    ctx->pc = 0x322ce8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x322cec: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x322CECu;
    {
        const bool branch_taken_0x322cec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x322cec) {
            ctx->pc = 0x322CF8u;
            goto label_322cf8;
        }
    }
    ctx->pc = 0x322CF4u;
    // 0x322cf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x322cf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322cf8:
    // 0x322cf8: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x322CF8u;
    {
        const bool branch_taken_0x322cf8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x322cf8) {
            ctx->pc = 0x322D04u;
            goto label_322d04;
        }
    }
    ctx->pc = 0x322D00u;
    // 0x322d00: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x322d00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322d04:
    // 0x322d04: 0x11c00040  beqz        $t6, . + 4 + (0x40 << 2)
    ctx->pc = 0x322D04u;
    {
        const bool branch_taken_0x322d04 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x322d04) {
            ctx->pc = 0x322E08u;
            goto label_322e08;
        }
    }
    ctx->pc = 0x322D0Cu;
    // 0x322d0c: 0x64040  sll         $t0, $a2, 1
    ctx->pc = 0x322d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x322d10: 0x3c0701dd  lui         $a3, 0x1DD
    ctx->pc = 0x322d10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)477 << 16));
    // 0x322d14: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x322d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x322d18: 0x24e79410  addiu       $a3, $a3, -0x6BF0
    ctx->pc = 0x322d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939664));
    // 0x322d1c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x322d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x322d20: 0xe86821  addu        $t5, $a3, $t0
    ctx->pc = 0x322d20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x322d24: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x322d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_322d28:
    // 0x322d28: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x322d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x322d2c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x322d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x322d30: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x322d30u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d34: 0x24ac0002  addiu       $t4, $a1, 0x2
    ctx->pc = 0x322d34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x322d38: 0x468001a0  cvt.s.w     $f6, $f0
    ctx->pc = 0x322d38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x322d3c: 0x24ab0003  addiu       $t3, $a1, 0x3
    ctx->pc = 0x322d3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x322d40: 0x24aa0004  addiu       $t2, $a1, 0x4
    ctx->pc = 0x322d40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x322d44: 0x24a90005  addiu       $t1, $a1, 0x5
    ctx->pc = 0x322d44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x322d48: 0x24a80006  addiu       $t0, $a1, 0x6
    ctx->pc = 0x322d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x322d4c: 0x24a70007  addiu       $a3, $a1, 0x7
    ctx->pc = 0x322d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x322d50: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x322d50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x322d54: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x322d54u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d58: 0x0  nop
    ctx->pc = 0x322d58u;
    // NOP
    // 0x322d5c: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x322d5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x322d60: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x322d60u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d64: 0x0  nop
    ctx->pc = 0x322d64u;
    // NOP
    // 0x322d68: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x322d68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x322d6c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x322d6cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d70: 0x0  nop
    ctx->pc = 0x322d70u;
    // NOP
    // 0x322d74: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x322d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x322d78: 0x44854000  mtc1        $a1, $f8
    ctx->pc = 0x322d78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x322d7c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x322d7cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d80: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x322d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x322d84: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x322d84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x322d88: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x322d88u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d8c: 0x0  nop
    ctx->pc = 0x322d8cu;
    // NOP
    // 0x322d90: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x322d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x322d94: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x322d94u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d98: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x322d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x322d9c: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x322d9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x322da0: 0x46086a1c  madd.s      $f8, $f13, $f8
    ctx->pc = 0x322da0u;
    ctx->f[8] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[8]));
    // 0x322da4: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x322da4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x322da8: 0x4606699c  madd.s      $f6, $f13, $f6
    ctx->pc = 0x322da8u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[6]));
    // 0x322dac: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x322dacu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x322db0: 0x4605695c  madd.s      $f5, $f13, $f5
    ctx->pc = 0x322db0u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[5]));
    // 0x322db4: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x322db4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x322db8: 0x4604691c  madd.s      $f4, $f13, $f4
    ctx->pc = 0x322db8u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[4]));
    // 0x322dbc: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x322dbcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x322dc0: 0xe5a80010  swc1        $f8, 0x10($t5)
    ctx->pc = 0x322dc0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 16), bits); }
    // 0x322dc4: 0x460368dc  madd.s      $f3, $f13, $f3
    ctx->pc = 0x322dc4u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[3]));
    // 0x322dc8: 0xe5a60028  swc1        $f6, 0x28($t5)
    ctx->pc = 0x322dc8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 40), bits); }
    // 0x322dcc: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x322dccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x322dd0: 0xe5a50040  swc1        $f5, 0x40($t5)
    ctx->pc = 0x322dd0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x322dd4: 0x4602689c  madd.s      $f2, $f13, $f2
    ctx->pc = 0x322dd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[2]));
    // 0x322dd8: 0xe5a40058  swc1        $f4, 0x58($t5)
    ctx->pc = 0x322dd8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 88), bits); }
    // 0x322ddc: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x322ddcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x322de0: 0xe5a30070  swc1        $f3, 0x70($t5)
    ctx->pc = 0x322de0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 112), bits); }
    // 0x322de4: 0x4601685c  madd.s      $f1, $f13, $f1
    ctx->pc = 0x322de4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[1]));
    // 0x322de8: 0xe5a20088  swc1        $f2, 0x88($t5)
    ctx->pc = 0x322de8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 136), bits); }
    // 0x322dec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x322decu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x322df0: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x322df0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x322df4: 0xe5a100a0  swc1        $f1, 0xA0($t5)
    ctx->pc = 0x322df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 160), bits); }
    // 0x322df8: 0x4600681c  madd.s      $f0, $f13, $f0
    ctx->pc = 0x322df8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[0]));
    // 0x322dfc: 0xe5a000b8  swc1        $f0, 0xB8($t5)
    ctx->pc = 0x322dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 184), bits); }
    // 0x322e00: 0x1020ffc9  beqz        $at, . + 4 + (-0x37 << 2)
    ctx->pc = 0x322E00u;
    {
        const bool branch_taken_0x322e00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E00u;
        // 0x322e04: 0x25ad00c0  addiu       $t5, $t5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e00) {
            ctx->pc = 0x322D28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_322d28;
        }
    }
    ctx->pc = 0x322E08u;
label_322e08:
    // 0x322e08: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x322e08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x322e0c: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x322E0Cu;
    {
        const bool branch_taken_0x322e0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x322e0c) {
            ctx->pc = 0x322E58u;
            goto label_322e58;
        }
    }
    ctx->pc = 0x322E14u;
    // 0x322e14: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x322e14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x322e18: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x322e1c: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x322e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x322e20: 0x24639410  addiu       $v1, $v1, -0x6BF0
    ctx->pc = 0x322e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939664));
    // 0x322e24: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x322e24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x322e28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x322e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322e2c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x322e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x322e30: 0x460c0018  adda.s      $f0, $f12
    ctx->pc = 0x322e30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[12]));
label_322e34:
    // 0x322e34: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x322e34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322e38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x322e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x322e3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x322e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x322e40: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x322e40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x322e44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x322e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x322e48: 0x4600681c  madd.s      $f0, $f13, $f0
    ctx->pc = 0x322e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[0]));
    // 0x322e4c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x322e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x322e50: 0x1020fff8  beqz        $at, . + 4 + (-0x8 << 2)
    ctx->pc = 0x322E50u;
    {
        const bool branch_taken_0x322e50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E50u;
        // 0x322e54: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e50) {
            ctx->pc = 0x322E34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_322e34;
        }
    }
    ctx->pc = 0x322E58u;
label_322e58:
    // 0x322e58: 0x3e00008  jr          $ra
    ctx->pc = 0x322E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322E60u;
}
