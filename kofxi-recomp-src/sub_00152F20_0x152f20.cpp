#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152F20
// Address: 0x152f20 - 0x153000
void sub_00152F20_0x152f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152F20_0x152f20");
#endif

    switch (ctx->pc) {
        case 0x152f40u: goto label_152f40;
        default: break;
    }

    ctx->pc = 0x152f20u;

    // 0x152f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x152f24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x152f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x152f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152f30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x152f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f38: 0xc054ab8  jal         func_152AE0
    ctx->pc = 0x152F38u;
    SET_GPR_U32(ctx, 31, 0x152F40u);
    ctx->pc = 0x152F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152F38u;
            // 0x152f3c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152AE0u;
    if (runtime->hasFunction(0x152AE0u)) {
        auto targetFn = runtime->lookupFunction(0x152AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F40u; }
        if (ctx->pc != 0x152F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152AE0_0x152ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F40u; }
        if (ctx->pc != 0x152F40u) { return; }
    }
    ctx->pc = 0x152F40u;
label_152f40:
    // 0x152f40: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x152f40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152f44: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x152f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x152f48: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x152f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x152f4c: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x152F4Cu;
    {
        const bool branch_taken_0x152f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152f4c) {
            ctx->pc = 0x152F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152F4Cu;
            // 0x152f50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152FE0u;
            goto label_152fe0;
        }
    }
    ctx->pc = 0x152F54u;
    // 0x152f54: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x152f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x152f58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x152f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f5c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x152f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x152f60: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x152f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x152f64: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x152f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x152f68: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x152f68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x152f6c: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x152f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x152f70: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x152f70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x152f74: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x152f74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x152f78: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x152f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x152f7c: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x152f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x152f80: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x152f80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x152f84: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x152f84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x152f88: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x152f88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x152f8c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x152f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x152f90: 0x94c50006  lhu         $a1, 0x6($a2)
    ctx->pc = 0x152f90u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x152f94: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x152f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x152f98: 0x51a03  sra         $v1, $a1, 8
    ctx->pc = 0x152f98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 8));
    // 0x152f9c: 0xa6040006  sh          $a0, 0x6($s0)
    ctx->pc = 0x152f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x152fa0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x152fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x152fa4: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x152fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x152fa8: 0x51a83  sra         $v1, $a1, 10
    ctx->pc = 0x152fa8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 10));
    // 0x152fac: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x152facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x152fb0: 0xa203000f  sb          $v1, 0xF($s0)
    ctx->pc = 0x152fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x152fb4: 0x94c30008  lhu         $v1, 0x8($a2)
    ctx->pc = 0x152fb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x152fb8: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x152fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x152fbc: 0x94c3000a  lhu         $v1, 0xA($a2)
    ctx->pc = 0x152fbcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x152fc0: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x152fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x152fc4: 0x94c3000c  lhu         $v1, 0xC($a2)
    ctx->pc = 0x152fc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x152fc8: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x152fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x152fcc: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x152fccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x152fd0: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x152fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x152fd4: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x152fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x152fd8: 0xa204000e  sb          $a0, 0xE($s0)
    ctx->pc = 0x152fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 4));
    // 0x152fdc: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x152fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
label_152fe0:
    // 0x152fe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x152fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152fec: 0x3e00008  jr          $ra
    ctx->pc = 0x152FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152FECu;
            // 0x152ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152FF4u;
    // 0x152ff4: 0x0  nop
    ctx->pc = 0x152ff4u;
    // NOP
    // 0x152ff8: 0x0  nop
    ctx->pc = 0x152ff8u;
    // NOP
    // 0x152ffc: 0x0  nop
    ctx->pc = 0x152ffcu;
    // NOP
    ctx->pc = 0x153000u;
}
