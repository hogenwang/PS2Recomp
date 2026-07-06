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

// Function: sub_0020CDE0
// Address: 0x20cde0 - 0x20d030
void sub_0020CDE0_0x20cde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CDE0_0x20cde0");
#endif

    ctx->pc = 0x20cde0u;

    // 0x20cde0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20cde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20cde4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x20cde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x20cde8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20cde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20cdec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20cdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20cdf0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20cdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20cdf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20cdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20cdf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20cdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20cdfc: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x20CDFCu;
    {
        const bool branch_taken_0x20cdfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDFCu;
        // 0x20ce00: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cdfc) {
            ctx->pc = 0x20CE28u;
            goto label_20ce28;
        }
    }
    ctx->pc = 0x20CE04u;
    // 0x20ce04: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x20ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x20ce08: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x20ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x20ce0c: 0x9489a870  lhu         $t1, -0x5790($a0)
    ctx->pc = 0x20ce0cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294944880)));
    // 0x20ce10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20ce10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce14: 0x9468a872  lhu         $t0, -0x578E($v1)
    ctx->pc = 0x20ce14u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294944882)));
    // 0x20ce18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20ce18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce1c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x20ce1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20ce20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20CE20u;
    {
        const bool branch_taken_0x20ce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE20u;
        // 0x20ce24: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce20) {
            ctx->pc = 0x20CE48u;
            goto label_20ce48;
        }
    }
    ctx->pc = 0x20CE28u;
label_20ce28:
    // 0x20ce28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x20ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x20ce2c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x20ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x20ce30: 0x9489a874  lhu         $t1, -0x578C($a0)
    ctx->pc = 0x20ce30u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294944884)));
    // 0x20ce34: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x20ce34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20ce38: 0x9468a876  lhu         $t0, -0x578A($v1)
    ctx->pc = 0x20ce38u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294944886)));
    // 0x20ce3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20ce3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce40: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x20ce40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce44: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x20ce44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_20ce48:
    // 0x20ce48: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20ce4c: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x20ce4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x20ce50: 0xa583c  dsll32      $t3, $t2, 0
    ctx->pc = 0x20ce50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) << (32 + 0));
    // 0x20ce54: 0x8c63a458  lw          $v1, -0x5BA8($v1)
    ctx->pc = 0x20ce54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943832)));
    // 0x20ce58: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x20ce58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20ce5c: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x20ce5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20ce60: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x20ce60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x20ce64: 0x240f0014  addiu       $t7, $zero, 0x14
    ctx->pc = 0x20ce64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20ce68: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x20ce68u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x20ce6c: 0x240b003f  addiu       $t3, $zero, 0x3F
    ctx->pc = 0x20ce6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x20ce70: 0x3c0a2007  lui         $t2, 0x2007
    ctx->pc = 0x20ce70u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8199 << 16));
    // 0x20ce74: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x20ce74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x20ce78: 0x354ad00d  ori         $t2, $t2, 0xD00D
    ctx->pc = 0x20ce78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)53261);
    // 0x20ce7c: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x20ce7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x20ce80: 0xa683c  dsll32      $t5, $t2, 0
    ctx->pc = 0x20ce80u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) << (32 + 0));
    // 0x20ce84: 0xfc6b0018  sd          $t3, 0x18($v1)
    ctx->pc = 0x20ce84u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 11));
    // 0x20ce88: 0x340add31  ori         $t2, $zero, 0xDD31
    ctx->pc = 0x20ce88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56625);
    // 0x20ce8c: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x20ce8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20ce90: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x20ce90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x20ce94: 0x3c0b009d  lui         $t3, 0x9D
    ctx->pc = 0x20ce94u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)157 << 16));
    // 0x20ce98: 0x354a3480  ori         $t2, $t2, 0x3480
    ctx->pc = 0x20ce98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)13440);
    // 0x20ce9c: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x20ce9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20cea0: 0x14d6825  or          $t5, $t2, $t5
    ctx->pc = 0x20cea0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
    // 0x20cea4: 0x3c1501c1  lui         $s5, 0x1C1
    ctx->pc = 0x20cea4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)449 << 16));
    // 0x20cea8: 0xfc6d0020  sd          $t5, 0x20($v1)
    ctx->pc = 0x20cea8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 13));
    // 0x20ceac: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x20ceacu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x20ceb0: 0xfc6c0028  sd          $t4, 0x28($v1)
    ctx->pc = 0x20ceb0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 12));
    // 0x20ceb4: 0x240d0008  addiu       $t5, $zero, 0x8
    ctx->pc = 0x20ceb4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20ceb8: 0x8d43a458  lw          $v1, -0x5BA8($t2)
    ctx->pc = 0x20ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294943832)));
    // 0x20cebc: 0x3c1401c1  lui         $s4, 0x1C1
    ctx->pc = 0x20cebcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
    // 0x20cec0: 0x916cb280  lbu         $t4, -0x4D80($t3)
    ctx->pc = 0x20cec0u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294947456)));
    // 0x20cec4: 0x3c1301c1  lui         $s3, 0x1C1
    ctx->pc = 0x20cec4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)449 << 16));
    // 0x20cec8: 0x3c1201c1  lui         $s2, 0x1C1
    ctx->pc = 0x20cec8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
    // 0x20cecc: 0x3c1101c1  lui         $s1, 0x1C1
    ctx->pc = 0x20ceccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
    // 0x20ced0: 0x3c0a40ab  lui         $t2, 0x40AB
    ctx->pc = 0x20ced0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16555 << 16));
    // 0x20ced4: 0x3c1901c1  lui         $t9, 0x1C1
    ctx->pc = 0x20ced4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)449 << 16));
    // 0x20ced8: 0x354b4000  ori         $t3, $t2, 0x4000
    ctx->pc = 0x20ced8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16384);
    // 0x20cedc: 0xc802b  sltu        $s0, $zero, $t4
    ctx->pc = 0x20cedcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x20cee0: 0x340a8001  ori         $t2, $zero, 0x8001
    ctx->pc = 0x20cee0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x20cee4: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x20cee4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x20cee8: 0x14b6025  or          $t4, $t2, $t3
    ctx->pc = 0x20cee8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x20ceec: 0x3c1801c1  lui         $t8, 0x1C1
    ctx->pc = 0x20ceecu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)449 << 16));
    // 0x20cef0: 0x105978  dsll        $t3, $s0, 5
    ctx->pc = 0x20cef0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 16) << 5);
    // 0x20cef4: 0x1051b8  dsll        $t2, $s0, 6
    ctx->pc = 0x20cef4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) << 6);
    // 0x20cef8: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x20cef8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x20cefc: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x20cefcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x20cf00: 0xfc6a0030  sd          $t2, 0x30($v1)
    ctx->pc = 0x20cf00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 10));
    // 0x20cf04: 0x240b5353  addiu       $t3, $zero, 0x5353
    ctx->pc = 0x20cf04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x20cf08: 0xfc6f0038  sd          $t7, 0x38($v1)
    ctx->pc = 0x20cf08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 15));
    // 0x20cf0c: 0x65100  sll         $t2, $a2, 4
    ctx->pc = 0x20cf0cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x20cf10: 0xfc6e0040  sd          $t6, 0x40($v1)
    ctx->pc = 0x20cf10u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 14));
    // 0x20cf14: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x20cf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x20cf18: 0xfc6d0048  sd          $t5, 0x48($v1)
    ctx->pc = 0x20cf18u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 13));
    // 0x20cf1c: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x20cf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x20cf20: 0xfc6c0050  sd          $t4, 0x50($v1)
    ctx->pc = 0x20cf20u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 12));
    // 0x20cf24: 0x76900  sll         $t5, $a3, 4
    ctx->pc = 0x20cf24u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x20cf28: 0xfc6b0058  sd          $t3, 0x58($v1)
    ctx->pc = 0x20cf28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 11));
    // 0x20cf2c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x20cf2cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x20cf30: 0xac6a0060  sw          $t2, 0x60($v1)
    ctx->pc = 0x20cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 10));
    // 0x20cf34: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x20cf34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x20cf38: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x20cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20cf3c: 0x3c0b01c1  lui         $t3, 0x1C1
    ctx->pc = 0x20cf3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)449 << 16));
    // 0x20cf40: 0x24646c00  addiu       $a0, $v1, 0x6C00
    ctx->pc = 0x20cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x20cf44: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x20cf44u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x20cf48: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x20cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x20cf4c: 0x25296c00  addiu       $t1, $t1, 0x6C00
    ctx->pc = 0x20cf4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 27648));
    // 0x20cf50: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x20cf50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x20cf54: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x20cf54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x20cf58: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x20cf58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x20cf5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20cf60: 0x8ceca458  lw          $t4, -0x5BA8($a3)
    ctx->pc = 0x20cf60u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294943832)));
    // 0x20cf64: 0x25087200  addiu       $t0, $t0, 0x7200
    ctx->pc = 0x20cf64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29184));
    // 0x20cf68: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20cf68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x20cf6c: 0x3c0f01c1  lui         $t7, 0x1C1
    ctx->pc = 0x20cf6cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)449 << 16));
    // 0x20cf70: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x20cf70u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
    // 0x20cf74: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x20cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
    // 0x20cf78: 0xad8d0064  sw          $t5, 0x64($t4)
    ctx->pc = 0x20cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 100), GPR_U32(ctx, 13));
    // 0x20cf7c: 0x2407a833  addiu       $a3, $zero, -0x57CD
    ctx->pc = 0x20cf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x20cf80: 0x8d6ba458  lw          $t3, -0x5BA8($t3)
    ctx->pc = 0x20cf80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294943832)));
    // 0x20cf84: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x20cf84u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x20cf88: 0x3c0c01c1  lui         $t4, 0x1C1
    ctx->pc = 0x20cf88u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)449 << 16));
    // 0x20cf8c: 0xad600068  sw          $zero, 0x68($t3)
    ctx->pc = 0x20cf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 104), GPR_U32(ctx, 0));
    // 0x20cf90: 0x8d56a458  lw          $s6, -0x5BA8($t2)
    ctx->pc = 0x20cf90u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294943832)));
    // 0x20cf94: 0x3c0b01c1  lui         $t3, 0x1C1
    ctx->pc = 0x20cf94u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)449 << 16));
    // 0x20cf98: 0xaec0006c  sw          $zero, 0x6C($s6)
    ctx->pc = 0x20cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 0));
    // 0x20cf9c: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x20cf9cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x20cfa0: 0x8eb5a458  lw          $s5, -0x5BA8($s5)
    ctx->pc = 0x20cfa0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943832)));
    // 0x20cfa4: 0xaea90070  sw          $t1, 0x70($s5)
    ctx->pc = 0x20cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 9));
    // 0x20cfa8: 0x8e89a458  lw          $t1, -0x5BA8($s4)
    ctx->pc = 0x20cfa8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943832)));
    // 0x20cfac: 0xad280074  sw          $t0, 0x74($t1)
    ctx->pc = 0x20cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 116), GPR_U32(ctx, 8));
    // 0x20cfb0: 0x8e68a458  lw          $t0, -0x5BA8($s3)
    ctx->pc = 0x20cfb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943832)));
    // 0x20cfb4: 0xad070078  sw          $a3, 0x78($t0)
    ctx->pc = 0x20cfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 120), GPR_U32(ctx, 7));
    // 0x20cfb8: 0x8e48a458  lw          $t0, -0x5BA8($s2)
    ctx->pc = 0x20cfb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943832)));
    // 0x20cfbc: 0xad00007c  sw          $zero, 0x7C($t0)
    ctx->pc = 0x20cfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 124), GPR_U32(ctx, 0));
    // 0x20cfc0: 0x8e28a458  lw          $t0, -0x5BA8($s1)
    ctx->pc = 0x20cfc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943832)));
    // 0x20cfc4: 0xad060080  sw          $a2, 0x80($t0)
    ctx->pc = 0x20cfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 6));
    // 0x20cfc8: 0x8e06a458  lw          $a2, -0x5BA8($s0)
    ctx->pc = 0x20cfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943832)));
    // 0x20cfcc: 0xacc50084  sw          $a1, 0x84($a2)
    ctx->pc = 0x20cfccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 5));
    // 0x20cfd0: 0x8f25a458  lw          $a1, -0x5BA8($t9)
    ctx->pc = 0x20cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4294943832)));
    // 0x20cfd4: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x20cfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
    // 0x20cfd8: 0x8f05a458  lw          $a1, -0x5BA8($t8)
    ctx->pc = 0x20cfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294943832)));
    // 0x20cfdc: 0xaca0008c  sw          $zero, 0x8C($a1)
    ctx->pc = 0x20cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
    // 0x20cfe0: 0x8de5a458  lw          $a1, -0x5BA8($t7)
    ctx->pc = 0x20cfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294943832)));
    // 0x20cfe4: 0xaca40090  sw          $a0, 0x90($a1)
    ctx->pc = 0x20cfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 4));
    // 0x20cfe8: 0x8dc4a458  lw          $a0, -0x5BA8($t6)
    ctx->pc = 0x20cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294943832)));
    // 0x20cfec: 0xac830094  sw          $v1, 0x94($a0)
    ctx->pc = 0x20cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
    // 0x20cff0: 0x8da3a458  lw          $v1, -0x5BA8($t5)
    ctx->pc = 0x20cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294943832)));
    // 0x20cff4: 0xac670098  sw          $a3, 0x98($v1)
    ctx->pc = 0x20cff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 7));
    // 0x20cff8: 0x8d83a458  lw          $v1, -0x5BA8($t4)
    ctx->pc = 0x20cff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294943832)));
    // 0x20cffc: 0xac60009c  sw          $zero, 0x9C($v1)
    ctx->pc = 0x20cffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 0));
    // 0x20d000: 0x8d63a458  lw          $v1, -0x5BA8($t3)
    ctx->pc = 0x20d000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294943832)));
    // 0x20d004: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x20d004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x20d008: 0xad43a458  sw          $v1, -0x5BA8($t2)
    ctx->pc = 0x20d008u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294943832), GPR_U32(ctx, 3));
    // 0x20d00c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x20d00cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20d010: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20d010u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20d014: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20d014u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d018: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20d018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d01c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20d01cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d028: 0x3e00008  jr          $ra
    ctx->pc = 0x20D028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D028u;
        // 0x20d02c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D030u;
}
