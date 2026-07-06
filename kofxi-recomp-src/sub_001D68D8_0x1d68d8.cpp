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

// Function: sub_001D68D8
// Address: 0x1d68d8 - 0x1d6d40
void sub_001D68D8_0x1d68d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D68D8_0x1d68d8");
#endif

    ctx->pc = 0x1d68d8u;

    // 0x1d68d8: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x1d68d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d68dc: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1d68e0: 0x434824  and         $t1, $v0, $v1
    ctx->pc = 0x1d68e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d68e4: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x1d68e4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d68e8: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x1d68e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1d68ec: 0x812a0000  lb          $t2, 0x0($t1)
    ctx->pc = 0x1d68ecu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d68f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d68f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d68f4: 0x248e0018  addiu       $t6, $a0, 0x18
    ctx->pc = 0x1d68f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x1d68f8: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d68f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d68fc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d68fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6900: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x1d6900u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6904: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6904u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6908: 0x91270000  lbu         $a3, 0x0($t1)
    ctx->pc = 0x1d6908u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d690c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d690cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6910: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d6910u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6914: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6918: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6918u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d691c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d691cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6920: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d6920u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d6924: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6924u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6928: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x1d6928u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x1d692c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d692cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d6930: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x1d6930u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6934: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6938: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d6938u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d693c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d693cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d6940: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6940u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6944: 0x1465025  or          $t2, $t2, $a2
    ctx->pc = 0x1d6944u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x1d6948: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1d6948u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d694c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d694cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6950: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x1d6950u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x1d6954: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d6954u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d6958: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6958u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d695c: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x1d695cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x1d6960: 0x28a2001e  slti        $v0, $a1, 0x1E
    ctx->pc = 0x1d6960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1d6964: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d6964u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d6968: 0xaa5004  sllv        $t2, $t2, $a1
    ctx->pc = 0x1d6968u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 5) & 0x1F));
    // 0x1d696c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D696Cu;
    {
        const bool branch_taken_0x1d696c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D696Cu;
        // 0x1d6970: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d696c) {
            ctx->pc = 0x1D69D8u;
            goto label_1d69d8;
        }
    }
    ctx->pc = 0x1D6974u;
    // 0x1d6974: 0x24a5ffe2  addiu       $a1, $a1, -0x1E
    ctx->pc = 0x1d6974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967266));
    // 0x1d6978: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6978u;
    {
        const bool branch_taken_0x1d6978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6978u;
        // 0x1d697c: 0x81042  srl         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6978) {
            ctx->pc = 0x1D6990u;
            goto label_1d6990;
        }
    }
    ctx->pc = 0x1D6980u;
    // 0x1d6980: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d6980u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d6984: 0xa6f82  srl         $t5, $t2, 30
    ctx->pc = 0x1d6984u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
    // 0x1d6988: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6988u;
    {
        const bool branch_taken_0x1d6988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6988u;
        // 0x1d698c: 0x85040  sll         $t2, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6988) {
            ctx->pc = 0x1D6998u;
            goto label_1d6998;
        }
    }
    ctx->pc = 0x1D6990u;
label_1d6990:
    // 0x1d6990: 0xa6f82  srl         $t5, $t2, 30
    ctx->pc = 0x1d6990u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
    // 0x1d6994: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d6994u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d6998:
    // 0x1d6998: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d6998u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d699c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d699cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d69a0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d69a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d69a4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d69a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d69a8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d69a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d69ac: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d69acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d69b0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d69b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d69b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d69b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d69b8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d69b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d69bc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d69bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d69c0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d69c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d69c4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d69c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d69c8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d69c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d69cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D69CCu;
    {
        const bool branch_taken_0x1d69cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69CCu;
        // 0x1d69d0: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d69cc) {
            ctx->pc = 0x1D69E4u;
            goto label_1d69e4;
        }
    }
    ctx->pc = 0x1D69D4u;
    // 0x1d69d4: 0x0  nop
    ctx->pc = 0x1d69d4u;
    // NOP
label_1d69d8:
    // 0x1d69d8: 0xa6f82  srl         $t5, $t2, 30
    ctx->pc = 0x1d69d8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
    // 0x1d69dc: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1d69dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1d69e0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1d69e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1d69e4:
    // 0x1d69e4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1d69e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1d69e8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1d69e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d69ec: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D69ECu;
    {
        const bool branch_taken_0x1d69ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d69ec) {
            ctx->pc = 0x1D69F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D69ECu;
            // 0x1d69f0: 0xa5080  sll         $t2, $t2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6A34u;
            goto label_1d6a34;
        }
    }
    ctx->pc = 0x1D69F4u;
    // 0x1d69f4: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1d69f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1d69f8: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x1d69f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x1d69fc: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d69fcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6a00: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6a00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6a04: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6a04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6a08: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6a0c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6a10: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d6a10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6a14: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d6a14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d6a18: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6a18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6a1c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6a20: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6a20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6a24: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d6a24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d6a28: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6a28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6a2c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6a30: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d6a30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d6a34:
    // 0x1d6a34: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x1d6a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1d6a38: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D6A38u;
    {
        const bool branch_taken_0x1d6a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A38u;
        // 0x1d6a3c: 0xa6742  srl         $t4, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a38) {
            ctx->pc = 0x1D6AA8u;
            goto label_1d6aa8;
        }
    }
    ctx->pc = 0x1D6A40u;
    // 0x1d6a40: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x1d6a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
    // 0x1d6a44: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6A44u;
    {
        const bool branch_taken_0x1d6a44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A44u;
        // 0x1d6a48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a44) {
            ctx->pc = 0x1D6A68u;
            goto label_1d6a68;
        }
    }
    ctx->pc = 0x1D6A4Cu;
    // 0x1d6a4c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d6a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d6a50: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d6a54: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d6a54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d6a58: 0xa6742  srl         $t4, $t2, 29
    ctx->pc = 0x1d6a58u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x1d6a5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6A5Cu;
    {
        const bool branch_taken_0x1d6a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A5Cu;
        // 0x1d6a60: 0xa85004  sllv        $t2, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a5c) {
            ctx->pc = 0x1D6A6Cu;
            goto label_1d6a6c;
        }
    }
    ctx->pc = 0x1D6A64u;
    // 0x1d6a64: 0x0  nop
    ctx->pc = 0x1d6a64u;
    // NOP
label_1d6a68:
    // 0x1d6a68: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d6a68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d6a6c:
    // 0x1d6a6c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d6a6cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6a70: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6a74: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6a74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6a78: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6a7c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6a80: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d6a80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6a84: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d6a84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d6a88: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6a88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6a8c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6a90: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6a90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6a94: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d6a94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d6a98: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6a98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6a9c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6aa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6AA0u;
    {
        const bool branch_taken_0x1d6aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AA0u;
        // 0x1d6aa4: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6aa0) {
            ctx->pc = 0x1D6AB0u;
            goto label_1d6ab0;
        }
    }
    ctx->pc = 0x1D6AA8u;
label_1d6aa8:
    // 0x1d6aa8: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x1d6aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d6aac: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x1d6aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1d6ab0:
    // 0x1d6ab0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6ab4: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1d6ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d6ab8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D6AB8u;
    {
        const bool branch_taken_0x1d6ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6ab8) {
            ctx->pc = 0x1D6ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6AB8u;
            // 0x1d6abc: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6B00u;
            goto label_1d6b00;
        }
    }
    ctx->pc = 0x1D6AC0u;
    // 0x1d6ac0: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1d6ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1d6ac4: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x1d6ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x1d6ac8: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d6ac8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6acc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6accu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6ad0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6ad0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6ad4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6ad8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6adc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d6adcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6ae0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d6ae0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d6ae4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6ae8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6aec: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6aecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6af0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d6af0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d6af4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6af4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6af8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6af8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6afc: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d6afcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d6b00:
    // 0x1d6b00: 0x28a20011  slti        $v0, $a1, 0x11
    ctx->pc = 0x1d6b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d6b04: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D6B04u;
    {
        const bool branch_taken_0x1d6b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B04u;
        // 0x1d6b08: 0xa5c42  srl         $t3, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b04) {
            ctx->pc = 0x1D6B70u;
            goto label_1d6b70;
        }
    }
    ctx->pc = 0x1D6B0Cu;
    // 0x1d6b0c: 0x24a5ffef  addiu       $a1, $a1, -0x11
    ctx->pc = 0x1d6b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967279));
    // 0x1d6b10: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6B10u;
    {
        const bool branch_taken_0x1d6b10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B10u;
        // 0x1d6b14: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b10) {
            ctx->pc = 0x1D6B30u;
            goto label_1d6b30;
        }
    }
    ctx->pc = 0x1D6B18u;
    // 0x1d6b18: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d6b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d6b1c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d6b20: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d6b20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d6b24: 0xa5c42  srl         $t3, $t2, 17
    ctx->pc = 0x1d6b24u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x1d6b28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6B28u;
    {
        const bool branch_taken_0x1d6b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B28u;
        // 0x1d6b2c: 0xa85004  sllv        $t2, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b28) {
            ctx->pc = 0x1D6B34u;
            goto label_1d6b34;
        }
    }
    ctx->pc = 0x1D6B30u;
label_1d6b30:
    // 0x1d6b30: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d6b30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d6b34:
    // 0x1d6b34: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d6b34u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6b38: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6b38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6b3c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6b3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6b40: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6b40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6b44: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6b44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6b48: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d6b48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6b4c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d6b4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d6b50: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6b54: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6b54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6b58: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6b58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6b5c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d6b5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d6b60: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6b60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6b64: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6b64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6b68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6B68u;
    {
        const bool branch_taken_0x1d6b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B68u;
        // 0x1d6b6c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b68) {
            ctx->pc = 0x1D6B78u;
            goto label_1d6b78;
        }
    }
    ctx->pc = 0x1D6B70u;
label_1d6b70:
    // 0x1d6b70: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x1d6b70u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x1d6b74: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x1d6b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_1d6b78:
    // 0x1d6b78: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6b7c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1d6b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d6b80: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D6B80u;
    {
        const bool branch_taken_0x1d6b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b80) {
            ctx->pc = 0x1D6B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6B80u;
            // 0x1d6b84: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6BC8u;
            goto label_1d6bc8;
        }
    }
    ctx->pc = 0x1D6B88u;
    // 0x1d6b88: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1d6b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1d6b8c: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x1d6b8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x1d6b90: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d6b90u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6b94: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6b94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6b98: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6b98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6b9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6ba0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6ba4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d6ba4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6ba8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d6ba8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d6bac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6bacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6bb0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6bb4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6bb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6bb8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d6bb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d6bbc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6bc0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6bc4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d6bc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d6bc8:
    // 0x1d6bc8: 0x28a20011  slti        $v0, $a1, 0x11
    ctx->pc = 0x1d6bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d6bcc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D6BCCu;
    {
        const bool branch_taken_0x1d6bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BCCu;
        // 0x1d6bd0: 0xa3c42  srl         $a3, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6bcc) {
            ctx->pc = 0x1D6C38u;
            goto label_1d6c38;
        }
    }
    ctx->pc = 0x1D6BD4u;
    // 0x1d6bd4: 0x24a5ffef  addiu       $a1, $a1, -0x11
    ctx->pc = 0x1d6bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967279));
    // 0x1d6bd8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6BD8u;
    {
        const bool branch_taken_0x1d6bd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BD8u;
        // 0x1d6bdc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6bd8) {
            ctx->pc = 0x1D6BF8u;
            goto label_1d6bf8;
        }
    }
    ctx->pc = 0x1D6BE0u;
    // 0x1d6be0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d6be4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d6be8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d6be8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d6bec: 0xa3c42  srl         $a3, $t2, 17
    ctx->pc = 0x1d6becu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x1d6bf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6BF0u;
    {
        const bool branch_taken_0x1d6bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BF0u;
        // 0x1d6bf4: 0xa85004  sllv        $t2, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6bf0) {
            ctx->pc = 0x1D6BFCu;
            goto label_1d6bfc;
        }
    }
    ctx->pc = 0x1D6BF8u;
label_1d6bf8:
    // 0x1d6bf8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d6bf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d6bfc:
    // 0x1d6bfc: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d6bfcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6c00: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6c00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6c04: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6c04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6c08: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6c08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6c0c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6c10: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d6c10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6c14: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d6c14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d6c18: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6c18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6c1c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6c20: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6c20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6c24: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d6c24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d6c28: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6c28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6c2c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6c30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6C30u;
    {
        const bool branch_taken_0x1d6c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C30u;
        // 0x1d6c34: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c30) {
            ctx->pc = 0x1D6C40u;
            goto label_1d6c40;
        }
    }
    ctx->pc = 0x1D6C38u;
label_1d6c38:
    // 0x1d6c38: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x1d6c38u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x1d6c3c: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x1d6c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_1d6c40:
    // 0x1d6c40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6c44: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1d6c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d6c48: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D6C48u;
    {
        const bool branch_taken_0x1d6c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6c48) {
            ctx->pc = 0x1D6C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6C48u;
            // 0x1d6c4c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6C90u;
            goto label_1d6c90;
        }
    }
    ctx->pc = 0x1D6C50u;
    // 0x1d6c50: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1d6c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1d6c54: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x1d6c54u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x1d6c58: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d6c58u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6c5c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6c5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6c60: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6c60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6c64: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6c68: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6c68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6c6c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d6c6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6c70: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d6c70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d6c74: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6c74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6c78: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6c78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6c7c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6c7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6c80: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d6c80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d6c84: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6c84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6c88: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6c88u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6c8c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d6c8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d6c90:
    // 0x1d6c90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6c94: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1d6c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d6c98: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1D6C98u;
    {
        const bool branch_taken_0x1d6c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6c98) {
            ctx->pc = 0x1D6C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6C98u;
            // 0x1d6c9c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6CD8u;
            goto label_1d6cd8;
        }
    }
    ctx->pc = 0x1D6CA0u;
    // 0x1d6ca0: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1d6ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1d6ca4: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x1d6ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x1d6ca8: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d6ca8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6cac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6cb0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d6cb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6cb4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d6cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d6cb8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6cbc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d6cbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d6cc0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d6cc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d6cc4: 0x91240001  lbu         $a0, 0x1($t1)
    ctx->pc = 0x1d6cc4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x1d6cc8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6ccc: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d6cccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d6cd0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d6cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d6cd4: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x1d6cd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
label_1d6cd8:
    // 0x1d6cd8: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x1d6cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d6cdc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6CDCu;
    {
        const bool branch_taken_0x1d6cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CDCu;
        // 0x1d6ce0: 0xa3282  srl         $a2, $t2, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 10), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6cdc) {
            ctx->pc = 0x1D6D04u;
            goto label_1d6d04;
        }
    }
    ctx->pc = 0x1D6CE4u;
    // 0x1d6ce4: 0x24a5fff6  addiu       $a1, $a1, -0xA
    ctx->pc = 0x1d6ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
    // 0x1d6ce8: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6CE8u;
    {
        const bool branch_taken_0x1d6ce8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6ce8) {
            ctx->pc = 0x1D6CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6CE8u;
            // 0x1d6cec: 0x31830007  andi        $v1, $t4, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6D08u;
            goto label_1d6d08;
        }
    }
    ctx->pc = 0x1D6CF0u;
    // 0x1d6cf0: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1d6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d6cf4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d6cf8: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d6cfc: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d6cfcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d6d00: 0xa3282  srl         $a2, $t2, 10
    ctx->pc = 0x1d6d00u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 10), 10));
label_1d6d04:
    // 0x1d6d04: 0x31830007  andi        $v1, $t4, 0x7
    ctx->pc = 0x1d6d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)7);
label_1d6d08:
    // 0x1d6d08: 0x31627fff  andi        $v0, $t3, 0x7FFF
    ctx->pc = 0x1d6d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
    // 0x1d6d0c: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x1d6d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x1d6d10: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1d6d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1d6d14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d6d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d6d18: 0x2da20001  sltiu       $v0, $t5, 0x1
    ctx->pc = 0x1d6d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d6d1c: 0x30e47fff  andi        $a0, $a3, 0x7FFF
    ctx->pc = 0x1d6d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32767);
    // 0x1d6d20: 0xadc6000c  sw          $a2, 0xC($t6)
    ctx->pc = 0x1d6d20u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 6));
    // 0x1d6d24: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d6d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6d28: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1d6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d6d2c: 0xadc20008  sw          $v0, 0x8($t6)
    ctx->pc = 0x1d6d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 2));
    // 0x1d6d30: 0xfdc30000  sd          $v1, 0x0($t6)
    ctx->pc = 0x1d6d30u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 3));
    // 0x1d6d34: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D34u;
        // 0x1d6d38: 0xade40000  sw          $a0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6D3Cu;
    // 0x1d6d3c: 0x0  nop
    ctx->pc = 0x1d6d3cu;
    // NOP
    if (ctx->pc == 0x1d6d3cu) { ctx->pc = 0x1d6d40u; }
}
