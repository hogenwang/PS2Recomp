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

// Function: sub_0012F9C0
// Address: 0x12f9c0 - 0x12fb50
void sub_0012F9C0_0x12f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F9C0_0x12f9c0");
#endif

    ctx->pc = 0x12f9c0u;

    // 0x12f9c0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x12f9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x12f9c4: 0x3047007f  andi        $a3, $v0, 0x7F
    ctx->pc = 0x12f9c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x12f9c8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x12f9c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x12f9cc: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x12f9ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12f9d0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x12f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12f9d4: 0x54e20003  bnel        $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F9D4u;
    {
        const bool branch_taken_0x12f9d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f9d4) {
            ctx->pc = 0x12F9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F9D4u;
            // 0x12f9d8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F9E4u;
            goto label_12f9e4;
        }
    }
    ctx->pc = 0x12F9DCu;
    // 0x12f9dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12F9DCu;
    {
        const bool branch_taken_0x12f9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9DCu;
        // 0x12f9e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9dc) {
            ctx->pc = 0x12FA1Cu;
            goto label_12fa1c;
        }
    }
    ctx->pc = 0x12F9E4u;
label_12f9e4:
    // 0x12f9e4: 0x54e20003  bnel        $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F9E4u;
    {
        const bool branch_taken_0x12f9e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f9e4) {
            ctx->pc = 0x12F9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F9E4u;
            // 0x12f9e8: 0x3083000c  andi        $v1, $a0, 0xC (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F9F4u;
            goto label_12f9f4;
        }
    }
    ctx->pc = 0x12F9ECu;
    // 0x12f9ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12F9ECu;
    {
        const bool branch_taken_0x12f9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9ECu;
        // 0x12f9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9ec) {
            ctx->pc = 0x12FA1Cu;
            goto label_12fa1c;
        }
    }
    ctx->pc = 0x12F9F4u;
label_12f9f4:
    // 0x12f9f4: 0x30820030  andi        $v0, $a0, 0x30
    ctx->pc = 0x12f9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x12f9f8: 0x33082  srl         $a2, $v1, 2
    ctx->pc = 0x12f9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x12f9fc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x12f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x12fa00: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x12fa00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x12fa04: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12fa08: 0x246355b0  addiu       $v1, $v1, 0x55B0
    ctx->pc = 0x12fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21936));
    // 0x12fa0c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x12fa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x12fa10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12fa14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12fa18: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x12fa18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_12fa1c:
    // 0x12fa1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12fa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12fa20: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x12fa20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x12fa24: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x12fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12fa28: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x12fa28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x12fa2c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x12fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12fa30: 0x24e75510  addiu       $a3, $a3, 0x5510
    ctx->pc = 0x12fa30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21776));
    // 0x12fa34: 0x44040  sll         $t0, $a0, 1
    ctx->pc = 0x12fa34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x12fa38: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x12fa38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12fa3c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x12fa3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x12fa40: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x12fa40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x12fa44: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x12fa44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x12fa48: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x12fa48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x12fa4c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x12fa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x12fa50: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x12fa50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x12fa54: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x12fa54u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12fa58: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x12fa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12fa5c: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x12FA5Cu;
    {
        const bool branch_taken_0x12fa5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA5Cu;
        // 0x12fa60: 0xa0e40000  sb          $a0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa5c) {
            ctx->pc = 0x12FAD4u;
            goto label_12fad4;
        }
    }
    ctx->pc = 0x12FA64u;
    // 0x12fa64: 0x3c043a83  lui         $a0, 0x3A83
    ctx->pc = 0x12fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14979 << 16));
    // 0x12fa68: 0x3484126f  ori         $a0, $a0, 0x126F
    ctx->pc = 0x12fa68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4719);
    // 0x12fa6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x12fa6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fa70: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FA70u;
    {
        const bool branch_taken_0x12fa70 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x12fa70) {
            ctx->pc = 0x12FA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FA70u;
            // 0x12fa74: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FA84u;
            goto label_12fa84;
        }
    }
    ctx->pc = 0x12FA78u;
    // 0x12fa78: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x12fa78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fa7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FA7Cu;
    {
        const bool branch_taken_0x12fa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA7Cu;
        // 0x12fa80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa7c) {
            ctx->pc = 0x12FA9Cu;
            goto label_12fa9c;
        }
    }
    ctx->pc = 0x12FA84u;
label_12fa84:
    // 0x12fa84: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x12fa84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x12fa88: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x12fa88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x12fa8c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x12fa8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fa90: 0x0  nop
    ctx->pc = 0x12fa90u;
    // NOP
    // 0x12fa94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12fa94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12fa98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x12fa98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_12fa9c:
    // 0x12fa9c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x12fa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12faa0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x12faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x12faa4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x12faa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12faa8: 0x2484c320  addiu       $a0, $a0, -0x3CE0
    ctx->pc = 0x12faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951712));
    // 0x12faac: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x12faacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x12fab0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12fab4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x12fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12fab8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12fabc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x12fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12fac0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x12fac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12fac4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fac8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12fac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12facc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x12FACCu;
    {
        const bool branch_taken_0x12facc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FACCu;
        // 0x12fad0: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12facc) {
            ctx->pc = 0x12FB40u;
            goto label_12fb40;
        }
    }
    ctx->pc = 0x12FAD4u;
label_12fad4:
    // 0x12fad4: 0x3c043a83  lui         $a0, 0x3A83
    ctx->pc = 0x12fad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14979 << 16));
    // 0x12fad8: 0x3484126f  ori         $a0, $a0, 0x126F
    ctx->pc = 0x12fad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4719);
    // 0x12fadc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x12fadcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fae0: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FAE0u;
    {
        const bool branch_taken_0x12fae0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x12fae0) {
            ctx->pc = 0x12FAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FAE0u;
            // 0x12fae4: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FAF4u;
            goto label_12faf4;
        }
    }
    ctx->pc = 0x12FAE8u;
    // 0x12fae8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x12fae8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12faec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FAECu;
    {
        const bool branch_taken_0x12faec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FAECu;
        // 0x12faf0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12faec) {
            ctx->pc = 0x12FB0Cu;
            goto label_12fb0c;
        }
    }
    ctx->pc = 0x12FAF4u;
label_12faf4:
    // 0x12faf4: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x12faf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x12faf8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x12faf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x12fafc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x12fafcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fb00: 0x0  nop
    ctx->pc = 0x12fb00u;
    // NOP
    // 0x12fb04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12fb04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12fb08: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x12fb08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_12fb0c:
    // 0x12fb0c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x12fb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12fb10: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x12fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x12fb14: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x12fb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12fb18: 0x2484c320  addiu       $a0, $a0, -0x3CE0
    ctx->pc = 0x12fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951712));
    // 0x12fb1c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x12fb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x12fb20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12fb24: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x12fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12fb28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12fb2c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x12fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12fb30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x12fb30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12fb34: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fb38: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12fb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fb3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12fb3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12fb40:
    // 0x12fb40: 0x3e00008  jr          $ra
    ctx->pc = 0x12FB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FB48u;
    // 0x12fb48: 0x0  nop
    ctx->pc = 0x12fb48u;
    // NOP
    // 0x12fb4c: 0x0  nop
    ctx->pc = 0x12fb4cu;
    // NOP
}
